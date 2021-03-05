#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void bubble_sort(char* N){
    int length = strlen(N);
    char temp;

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length - (i + 1); j++) {
            if (N[j] < N[j + 1]){
                temp = N[j];
                N[j] = N[j + 1];
                N[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    char N[10000];
    scanf("%s", N);
    bubble_sort(N);
    printf("%s", N);
    return 0;
}