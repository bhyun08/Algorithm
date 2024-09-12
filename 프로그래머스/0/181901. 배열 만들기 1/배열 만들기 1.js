function solution(n, k) {
    var answer = [];
    for(i = 1; i <= n; i++) {
        if(i % k == 0) answer.push(i);
    }
    return answer;
}