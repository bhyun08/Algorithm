#include <bits/stdc++.h>
using namespace std;

int top = -1;
vector<int> stk(10000);

void pop() {
    if(top == -1) cout << "-1\n";
    else { 
        cout << stk[top] <<"\n";
        stk[top--] = 0;
    }
}

void push(int a) {
    stk[++top] = a;
}

void empty() {
    if(top == -1) cout << "1\n";
    else cout << "0\n";
}

void topp() {
    if(top == -1) cout << "-1\n";
    else cout << stk[top] <<"\n";
}

void size() {
    cout << top+1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(); cout.tie();
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        
        if(str == "push") {
            int a;
            cin >> a;
            push(a);
        }
        
        if(str == "pop") pop();
        if(str == "size") size();
        if(str == "empty") empty();
        if(str == "top") topp();
    }

    return 0;
}