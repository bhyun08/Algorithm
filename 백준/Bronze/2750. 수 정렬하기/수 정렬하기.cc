#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int a[],int size) {
    int i,k,j,temp, min;
    
    for(i=0; i<size-1; i++) {
        min = i;
        for(int j=i+1; j<size; j++) {
            if(a[j] < a[min]) min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    
    for(int i=0; i < size; i++) {
        cout << a[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n; 
    int arr[1001];
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    SelectionSort(arr,n);
    return 0;
}