#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    int n = nums.size();
    n /= 2;
    
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    if(nums.size() < n) answer = nums.size();
    else answer = n;
    
    return answer;
}