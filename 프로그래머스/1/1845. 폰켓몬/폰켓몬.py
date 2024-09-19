def solution(nums):
    answer = 0
    hash = {}
    
    for i in nums:
        hash[i] = 1                 
        
    if len(nums) // 2 <= len(hash): 
        return len(nums) // 2         
    
    return len(hash)       
    
    return answer