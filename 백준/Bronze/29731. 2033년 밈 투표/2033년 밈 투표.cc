#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    
    vector<string> astley_promises = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
    };
    
    string status = "No";
    
    for (int i = 0; i < N; ++i) {
        string promise;
        getline(cin, promise);
        
        bool found = false;
        for (const string& astley_promise : astley_promises) {
            if (promise == astley_promise) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            status = "Yes";
            break;
        }
    }
    
    cout << status << endl;
    
    return 0;
}
