function solution(str_list, ex) {
    answer = ""
    for(i = 0; i< str_list.length; i++) {
        if(!str_list[i].includes(ex)) {
            answer += str_list[i];
        }
    }
    return answer;
}