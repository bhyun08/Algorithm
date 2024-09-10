function solution(a, b) {
    let answer = 0
    let newa = a.toString() + b.toString();
    let newb = 2*a*b;
    
    if(parseInt(newa) > parseInt(newb)) answer = Number(newa);
    else answer = Number(newb);
    return answer;
}