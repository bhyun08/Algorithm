function solution(a, b) {
    let answer = ''
    let newa = a.toString() + b.toString();
    let newb = b.toString() + a.toString();
    
    if(parseInt(newa) > parseInt(newb)) answer = newa;
    else answer = newb;
    return Number(answer);
}