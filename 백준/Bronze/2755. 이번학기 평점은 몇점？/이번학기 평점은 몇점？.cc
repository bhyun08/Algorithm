#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    
    map<string, double> list = {
        {"A+", 4.3}, {"A0", 4.0}, {"A-", 3.7},
        {"B+", 3.3}, {"B0", 3.0}, {"B-", 2.7},
        {"C+", 2.3}, {"C0", 2.0}, {"C-", 1.7},
        {"D+", 1.3}, {"D0", 1.0}, {"D-", 0.7}, {"F", 0.0}
    };
    
    double sum = 0;
    double listSum = 0;
    for(int i = 0; i < n; i++) {
        string a;
        int score;
        string alpha;
        
        cin >> a >> score >> alpha;
        
        double b = list[alpha];
        listSum += score;
        sum += (score * b);
    }

    double dd = sum/listSum;
    dd += 0.000000000001;
    
    printf("%.2lf", dd);
    
    return 0;
}