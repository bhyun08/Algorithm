function solution(num_list) {
    num_list.sort(function(a, b) {return a - b; });
    num_list.splice(0, 5); 
    return num_list;
}