#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    size_t answer_len = num_list_len - (n - 1);

    int* answer = (int*)malloc(answer_len * sizeof(int));


    if (answer == NULL) {
        return NULL; 
    }

    for (size_t i = 0; i < answer_len; i++) {
        answer[i] = num_list[n - 1 + i]; 
    }

    return answer;
}
