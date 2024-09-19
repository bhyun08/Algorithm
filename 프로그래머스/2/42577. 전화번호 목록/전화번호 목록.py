def solution(phone_book):
    
    hash = {} 
    for nums in phone_book: 
        hash[nums] = 1 
        
    for nums in phone_book: 
        arr = "" 
        for num in nums: 
            arr += num

            if arr in hash and arr != nums:       
                return False 
    return True