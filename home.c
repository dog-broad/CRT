#include <stdio.h>
#include <stdlib.h>

int mani(){
    // Dynamic Array
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        arr = realloc(arr, sizeof(int) * (i + 2));
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}