#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    cin >> str;
    int n = str.size();
    int maxIdx = -1;
    
    vector<int> abc(26, 0);
    
    for (int i = 0; i < n; i++) {
        if (isupper(str[i])) { 
            abc[str[i] - 'A']++;
        } else if (islower(str[i])) {
            abc[str[i] - 'a']++;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (abc[i] > abc[maxIdx]) maxIdx = i; 
    }
    
    for (int i = 0; i < 26; i++) {
        if (abc[i] == abc[maxIdx] && i != maxIdx) 
        {
            cout << "?";
            return 0;
        }
    }
    
    cout << char(maxIdx + 'A'); 
    return 0;
}
