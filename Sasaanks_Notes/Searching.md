**LINEAR SEARCH**
```c
//Linear Search
int linSearch(int arr[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == k) return 1;
    }
    return 0;
}
int main(){
    int n; scanf("%d", &n);
    int arr[n]; for(int i=0; i<n; i++) scanf("%d",&arr[i];)
    int k; scanf("%d", &k);
    printf("%d", &k);
    printf("%d", linSearch(arr, n, k));
}
```
**BINARY SEARCH**
```c
//Binary Search
int binSearch(int arr[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == k) return 1;
    }
    return 0;
}
int main(){
    int n; scanf("%d", &n);
    int arr[n]; for(int i=0; i<n; i++) scanf("%d",&arr[i];)
    int k; scanf("%d", &k);
    printf("%d", &k);
    printf("%d", binSearch(arr, n, k));
}
```