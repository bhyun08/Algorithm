function solution(n) {
    var answer = 0;
    if(n % 2 == 0) {
        for(i = n; i > 0; i-=2) {
            answer += i*i;
        }
    } else {
        for(i = n; i > 0; i-=2) {
            answer += i;
        }
    }
    return answer;
}