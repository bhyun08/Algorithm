#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        for(int j=0; j<a; j++)
        {
            if(j==0 || j==(a-1))
            {
                for(int k=0; k<a; k++)
                {
                    cout << "#";
                }
                cout <<"\n";
                continue;
            }
            
            cout << "#";
            for(int k=0; k<a-2; k++)
            {
                cout << "J";
            }
            cout << "#\n";
        }
        cout <<"\n";
    }
    
    return 0;
}