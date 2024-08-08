#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    while(true) {
        string str;
        getline(cin, str); 
        if(str == "EOI") break;
        
        for(int i=0;i<str.size();i++){
            str[i]=toupper(str[i]);
        }
        
        if(str.find("NEMO") != string::npos) {
            cout << "Found\n";
        } else {
            cout << "Missing\n";
        }
    }

    return 0;
}
