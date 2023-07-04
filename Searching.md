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

## Binary Search

Binary Search is a searching algorithm that is used to search for an element in a **sorted list**. 
- The algorithm works by repeatedly dividing the search interval in half until the target element is found, or the search interval is empty. 
- This allows the algorithm to quickly narrow down the search to a small subset of the list, making it much more efficient than <u>linear search</u> for large lists. 
- The time complexity of Binary Search is `O(log n)`, which is much faster than the `O(n)` time complexity of <u>linear search</u>.


### Formulae needed for Binary Search

`Mid ⇒ (l + h)/2` [or] `Mid ⇒ l+((h-l)/2)`

### Implementation

It can be done in two ways
- Iterative Method
- Recursive method

> Iterative Method

```c
#include <stdio.h>

int binarySearch(int arr[], int n, int key){
    int low = 0, high = n-1;
    /*
    If the key is less than the first element of the array
    or greater than the last element of the array, 
    the function returns 0, indicating that 
    the key is not present in the array.
    */
    if(key < arr[low] || key > arr[high])
        return 0;
    while(low <= high){
        int mid = (low+high) >> 1;
        if(arr[mid] == key){
            return 1;
        }
        else if(arr[mid] < key){
            low = mid+1;
        }
        else{
            high = mid-1;
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
    printf("%d", binarySearch(arr, n, key));
}
```

> Recursive method

```c
#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int key){
    if(low > high){
        return 0;
    }
    int mid = (low+high) >> 1;
    if(arr[mid] == key){
        return 1;
    }
    else if(arr[mid] < key){
        return binarySearchRecursive(arr, mid+1, high, key);
    }
    else{
        return binarySearchRecursive(arr, low, mid-1, key);
    }
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
    printf("%d", binarySearchRecursive(arr, 0, n-1, key));
}
```

#### Lecturer's version
```c
#include <stdio.h>

int binarySearch2(int arr[], int n, int k, int low, int high){
    if(low <= high){
        int mid = ((low + high)>>1);
        if(arr[mid] == k)
            return 1;
        if(k < arr[mid])
            return binarySearch2(arr, n, k, low, mid-1);
        else
            return binarySearch2(arr, n, k, mid+1, high);
    }
    return 0;
}

int binarySearch(int arr[], int n, int k){
    if(k < arr[0] || k > arr[n-1])
        return 0;
    return binarySearch2(arr, n, k, 0, n-1);
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
    printf("%d", binarySearch(arr, n, key));
    return 0;
}
```

- Both iterative and recursive methods of binary search have their own advantages and disadvantages.

- The iterative method is generally preferred over the recursive method because it is more efficient in terms of space and time complexity. 
- The iterative method uses a loop to perform the search, which requires less memory than the recursive method. 
- Additionally, the iterative method is faster because it avoids the overhead of function calls that are required in the recursive method.

However, the recursive method is easier to understand and implement. It is also more elegant and can be used in situations where the size of the input is small or the performance of the algorithm is not critical.