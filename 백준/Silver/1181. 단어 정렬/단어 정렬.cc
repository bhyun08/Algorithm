#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    else {
        return a < b;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<string> vec(n);
    for(int i=0; i < n; i++) {
        cin >> vec[i];
    }
    
    sort(vec.begin(), vec.end(), comp);
    vec.erase(unique(vec.begin(),vec.end()), vec.end());
    
    for(int i=0; i < vec.size(); i++) {
        cout << vec[i] <<"\n";
    }

}