#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<"*";
        }
        for(int h=0; h<2*(n-i); h++)
        {
            cout<<" ";
        }
        for(int k=0; k<i; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<"*";
        }
        for(int h=0; h<2*i; h++)
        {
            cout<<" ";
        }
        for(int k=0; k<n-i; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}