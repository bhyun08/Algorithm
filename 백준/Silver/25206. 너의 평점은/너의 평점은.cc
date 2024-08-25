#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    
    map<string, double> m = {
        {"A+", 4.5}, {"A0", 4.0},
        {"B+", 3.5}, {"B0", 3.0},
        {"C+", 2.5}, {"C0", 2.0},
        {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}
    };
    
    double sum = 0;
    double creditSum = 0;
    
    for(int i=0; i < 20; i++) {
        
        string a, rank;
        double credit;
        cin >> a >> credit >> rank;
        
        if(rank != "P") {
            creditSum += credit;
            sum += (credit*m[rank]);
        } 
    }
    
    double re = sum/creditSum;
    
    printf("%.6f",re);

    return 0;
}