#include <bits/stdc++.h>
using namespace std;

int front = -1, rear = -1;
vector<int> vec(10000000);

void push(int b) {
    vec[++rear] = b;
}

void pop() {
    if(front == rear) cout << "-1\n";
    else cout << vec[++front] <<"\n";
    vec[front] = 0;
}

void siz() {
    cout << rear - front <<"\n";
}

void epy() {
    if(front == rear) cout << "1\n";
    else cout << "0\n";
}

void frt() {
    if(front == rear) cout << "-1\n";
    else cout << vec[front+1] <<"\n";
}

void bk() {
    if(front == rear) cout << "-1\n";
    else cout << vec[rear] <<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        string a;
        cin >> a;
        
        if(a == "push") { 
            int b;
            cin >> b;
            push(b);
        } 
        else if(a == "pop") pop();
        else if(a == "size") siz();
        else if(a == "empty") epy();
        else if(a == "front") frt();
        else if(a == "back") bk();
    }

    return 0;
}