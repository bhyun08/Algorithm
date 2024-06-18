#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    n -= 1;
    
    if(num_list_len < n)
    {
        return num_list;
    }
    
    int* answer = (int*)malloc(sizeof(int) * (num_list_len - n + 1));
    int answer_len = 0;
    for(int i=n; i<num_list_len; i++)
    {
        answer[answer_len++] = num_list[i];
    }

    return answer;
}