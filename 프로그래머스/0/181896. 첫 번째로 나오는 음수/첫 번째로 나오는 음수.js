function solution(num_list) {
    var answer = -1;
    for(i = 0; i < num_list.length; i++) {
        if(num_list[i] < 0) {
            answer = i;
            break;
        }
    }
    return answer;
}