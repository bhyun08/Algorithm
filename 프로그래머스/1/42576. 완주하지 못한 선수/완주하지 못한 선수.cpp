#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    if(participant.size() == 1) {
        if(completion.size() == 0) return participant[0];
    }
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    
    for(int i=0; i<completion.size(); i++) {
        if(completion[i] != participant[i]) {
            answer = participant[i];
            return answer;
        }  
    }
}