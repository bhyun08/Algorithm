#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int sum = 0;
    vector<int> vec1={9, 7, 8, 0, 9, 2, 1, 4, 1, 8, 0, 0, 0};
    for(int i = 0; i < 3; i++) {
        cin >> vec1[10 + i]; 
    }
    
    for(int i = 0; i < vec1.size(); i++) {
        if(i % 2 == 0) {
            sum += vec1[i];
        } else {
            sum += vec1[i] * 3;
        }
    }
    
    cout<<"The 1-3-sum is "<<sum;
    return 0;
}