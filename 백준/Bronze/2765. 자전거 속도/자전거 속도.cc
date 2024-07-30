#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n=1;
    while(1) {
        
        
        double diameter;
        int turn;
        double second;
        
        cin >> diameter >> turn >> second;
        if(turn == 0) return 0;
        
        double oneRound = 0;
        oneRound = diameter*3.1415927;
    
        
        
        double distance = 0;
        double mph = 0;
        distance = ((oneRound*turn)/12)/5280;
        mph = (distance)/(second/3600);
    
        cout << fixed;
        cout.precision(2);
        cout << "Trip #" << n << ": " << distance << " " << mph << "\n";
        
        n++;
    }

    return 0;
}