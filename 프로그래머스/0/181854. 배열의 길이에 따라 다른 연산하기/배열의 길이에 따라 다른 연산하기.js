function solution(arr, n) {
    
    let b = 1;
    if(arr.length % 2 != 0) {
        b = 0
    } 
        
    for(i = b; i<arr.length; i += 2) {
            arr[i] += n;
    }   
    return arr;
}