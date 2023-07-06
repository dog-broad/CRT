#include<stdio.h>
#include<stdlib.h>
//QuickSort
int comp(const void *x, const void *y)
{
    return *(int *)x - *(int *)y;
}

int main() 
{
    int k, n, i; scanf("%d", &n);
    int arr[n]; for (i =0; i<n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    int *c = bsearch(&k, arr, n, sizeof(int), comp);
    if(c == NULL) printf("0");
    else printf("1");
    return 0;
}
