function solution(arr, k) {
    if(k % 2 == 0) {
        for(i = 0; i<arr.length; i++) arr[i] = arr[i]+k;
    } else {
        for(i = 0; i<arr.length; i++) arr[i] = arr[i]*k;
    }
    return arr;
}