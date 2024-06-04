#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout << " ";
        }
        for(int k=0; k<n-i; k++)
        {
            cout << "*";
        }
        for(int h=0; h<(n-i)-1; h++)
        {
            cout<<"*";
        }
        cout << "\n";
    }
    for(int i=n-1; i>0; i--)
    {
        for(int j=1; j<i; j++)
        {
            cout << " ";
        }
        for(int k=0; k<n-i+1; k++)
        {
            cout << "*";
        }
        for(int h=0; h<n-i; h++)
        {
            cout<<"*";
        }
        cout << "\n";
    }
    return 0;
}