#include<stdio.h>
#include<stdlib.h>
//Sort an Array
int comp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
//Quick Sort: O(N**2) Theta(NlogN) Omega(NlogN)
int main()      //Comparator: a-b => Ascending | b-a => Descending
{
    int k, n, i; scanf("%d", &n);
    int arr[n]; for (i =0; i<n; i++) scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), comp);
    for(i=0; i<n; i++) printf("%d", arr[i]);
    return 0;
}
