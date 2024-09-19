def solution(participant, completion):
    
    hash = {}
    for i in participant:
        if i in hash:
            hash[i] += 1
        else:
            hash[i] = 1
            
            
    for i in completion:
        if hash[i] == 1:
            del hash[i]
        else:
            hash[i] -= 1
            
    for i, count in hash.items():
        if count > 0:
            return i
        
    return answer