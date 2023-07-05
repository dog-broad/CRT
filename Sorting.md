<h3>Inbuilt c function for sorting</h3> 

```c
#include<stdio.h>
#include<stdlib.h>
int comp(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}
int main(){
    int n,k;scanf("%d",&arr[i]);
    int arr[n];for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),comp);
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
}
```c
// inbuilt binary search
#include<stdio.h>
#include<stdlib.h>
int comp(const void *x,const void *y){
    return *(int *)x-*(int *)y;
}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&k);
    int *c=bsearch(&k,arr,n,sizeof(int),comp);
    if(c==NULL)
    printf("0");
    else print("1");
    return 0;
}
```

