function solution(num_list, n) {
    
    let answer = [];
    
    let a = 0;
    for(let i = 0; i < num_list.length; i += n) {
        answer[a] = num_list[i];
        a++;
    }
    
    return answer;
}