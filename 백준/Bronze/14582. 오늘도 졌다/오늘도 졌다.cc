#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<int> hanhwa(9);
    vector<int> KIA(9);


    for(int i=0; i<9; i++) {
        cin >> hanhwa[i];
    }
    for(int i=0; i<9; i++) {
        cin >> KIA[i];
    }
    
    int hanhwaScore = 0, KIAScore = 0;
    bool eagles = false;
    for(int i = 0; i < 9; i++) {
        
        hanhwaScore += hanhwa[i];
        
        if(hanhwaScore > KIAScore) {
            eagles = true; 
        }
        
        KIAScore += KIA[i];
        
        if(hanhwaScore > KIAScore) {
            eagles = true; 
        }
    }
    
    
    if(eagles) cout << "Yes";
    else cout << "No";
    
    return 0;
}
