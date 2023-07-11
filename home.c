#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = (int *)malloc(sizeof(int));
    int n = 0;
    int input;
    while(1){
        scanf("%d", &input);
        if(input == -1){
            break;
        }
        arr[n] = input;
        n++;
        arr = realloc(arr, sizeof(int) * (n + 2));
    }
    while(n--){
        printf("%d ", arr[n]);
    }
}