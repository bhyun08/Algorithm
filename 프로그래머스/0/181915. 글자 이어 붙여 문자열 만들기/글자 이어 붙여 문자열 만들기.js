function solution(my_string, index_list) {
    var answer = '';
    for(i=0; i<index_list.length; i++) {
        let a = my_string[index_list[i]];
        answer += a;
    }
    return answer;
}