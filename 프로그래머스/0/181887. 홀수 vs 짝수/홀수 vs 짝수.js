function solution(n) {
    let answer = 0;
    let a=0,b=0;
    
    for(i = 0; i < n.length; i++) {
        if(i % 2 == 0) a += n[i];
        else b += n[i]
    }
    
    if (a > b) answer = a;
    else answer = b;
    
    return answer;
}