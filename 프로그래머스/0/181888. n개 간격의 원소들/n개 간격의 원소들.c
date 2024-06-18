#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    
    
    int* answer = (int*)malloc(sizeof(int)*num_list_len);
    int a=0;
    for(int i=0; i<num_list_len; i+=n, a++)
    {
        answer[a]=num_list[i];
    }
    return answer;
}