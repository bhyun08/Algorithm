#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string name;
    int age, height;
    while (1) {
        cin>>name>>age>>height;
        if (age > 17 || height >= 80) cout << name << " Senior\n";
        else if (name == "#" && age == 0 && height == 0) break;
        else cout << name << " Junior\n";
    }
    return 0;
}
