function solution(my_strings, parts) {
    var answer = '';
    for(i=0; i<my_strings.length; i++) {
        var a = my_strings[i].slice(parts[i][0], parts[i][1]+1);
        answer += a;
    }
    return answer;
}