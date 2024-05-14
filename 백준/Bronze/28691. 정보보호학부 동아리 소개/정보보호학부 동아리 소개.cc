#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    cin>>str;
    if(str=="M") cout<<"MatKor";
    if(str=="W") cout<<"WiCys";
    if(str=="C") cout<<"CyKor";
    if(str=="A") cout<<"AlKor";
    if(str=="$") cout<<"$clear";
    return 0;
}