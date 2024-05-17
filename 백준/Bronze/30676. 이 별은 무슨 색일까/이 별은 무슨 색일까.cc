#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio;
    cin.tie(0);
    
    int a;
    cin>>a;
    if(620<=a && a<=780) cout<<"Red";
    else if(590<=a && a<620) cout<<"Orange";
    else if(570<=a && a<590) cout<<"Yellow";
    else if(495<=a && a<570) cout<<"Green";
    else if(450<=a && a<495) cout<<"Blue";
    else if(425<=a && a<450) cout<<"Indigo";
    else if(380<=a && a<=425) cout<<"Violet";
    return 0;
}