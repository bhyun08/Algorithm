#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio;
    cin.tie(0);
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string a;
        cin>>a;
        if(a=="Algorithm") cout<<"204"<<"\n";
        if(a=="DataAnalysis") cout<<"207"<<"\n";
        if(a=="ArtificialIntelligence") cout<<"302"<<"\n";
        if(a=="CyberSecurity") cout<<"B101"<<"\n";
        if(a=="Network") cout<<"303"<<"\n";
        if(a=="Startup") cout<<"501"<<"\n";
        if(a=="TestStrategy") cout<<"105"<<"\n";
    }
    return 0;
}