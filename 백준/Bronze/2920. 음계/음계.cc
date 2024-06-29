#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> notes(8);
    for (int i = 0; i < 8; ++i) {
        cin >> notes[i];
    }

    bool ascending = true;
    bool descending = true;

    for (int i = 0; i < 7; ++i) {
        if (notes[i] < notes[i + 1]) {
            descending = false;
        }
        if (notes[i] > notes[i + 1]) {
            ascending = false;
        }
    }

    if (ascending) {
        cout << "ascending";
    } else if (descending) {
        cout << "descending";
    } else {
        cout << "mixed";
    }

    return 0;
}
