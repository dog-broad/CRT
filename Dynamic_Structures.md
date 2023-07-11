> ## Static structure
> **Array:**
> Array is an ADT (Abstract Data Type) that stores homogeneous elements in a Static Structure.

# Dynamic Structures

Dynamic Structures are data structures that can grow or shrink in size during the execution of a program. They are used for storing and manipulating data efficiently. 

## Dynamic Array

Dynamic Array is an ADT that stores homogeneous elements in a Dynamic Structure.

```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Dynamic Array
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
```

> **Output:**
```
8
23 45 67 89 12 34 56 78
23 45 67 89 12 34 56 78
```
```
4
1 3 4 5 6 
1 3 4 5 
