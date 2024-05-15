#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int max1,max2,max3;
    int mel1,mel2,mel3;
    
    cin>>max1>>max2>>max3;
    cin>>mel1>>mel2>>mel3;
    if(max1*3+max2*20+max3*120>mel1*3+mel2*20+mel3*120) cout<<"Max"; 
    else if(max1*3+max2*20+max3*120==mel1*3+mel2*20+mel3*120) cout<<"Draw"; 
    else if(max1*3+max2*20+max3*120<mel1*3+mel2*20+mel3*120) cout<<"Mel"; 
    return 0;
}