# Searching Techniques

## Linear Search

Linear search is a very simple search algorithm. In this type of search, a sequential search is made over all items one by one. Every item is checked and if a match is found then that particular item is returned, otherwise the search continues till the end of the data collection.

- There are two types of linear search:
  - Unordered Linear Search
  - Ordered Linear Search
  
### Unordered Linear Search

> Take an input N and take N inputs. Take another input K and return 1 if present in array, 0 if absent.
```c
#include <stdio.h>

int linSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    scanf("%d", &key);
    printf("%d", linSearch(arr, n, key));
}
```

- Time complexity of Linear Search is O(n) ʘ(i) Omega(i)

### Ordered Linear Search

Ordered Linear Search is a searching algorithm that is used to search for an element in an ordered list. The algorithm works by starting at the beginning of the list and comparing each element with the target element until a match is found or the end of the list is reached.

The difference between Ordered Linear Search and Linear Search is that in Ordered Linear Search, the list is sorted in ascending or descending order before the search begins. This allows the algorithm to stop searching as soon as it encounters an element greater than the target element, which can significantly reduce the number of comparisons required to find the target element.

```c
#include <stdio.h>

int orderedLinSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
        if(arr[i] > key){
            return 0;
        }
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    scanf("%d", &key);
    printf("%d", orderedLinSearch(arr, n, key));
}
```