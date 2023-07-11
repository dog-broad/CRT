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
```
Using `realloc()` to change the size of the array.
```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Dynamic Array
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int));
    for(int i = 0; i < n; i++){
        arr = realloc(arr, sizeof(int) * (i + 2));
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
```

## List

List is an ADT that stores non-homogeneous elements in a Dynamic Structure.

## Linked List

Linked List is an ADT that stores elements in a Dynamic Structure. Each element MUST be linked to the next element in the list. The last element is linked to a NULL pointer.

Types of Linked List:

1. **Singly Linked List** ⇒ Each element is linked to the next element. [Contains next Pointer & head & Tail Pointer].
2. **Doubly Linked List** ⇒ Each element is linked to the next element and the previous element. [Contains next & previous Pointer & head & Tail Pointer].
3. **Circular Linked List** ⇒ Each element is linked to the next element. The last element is linked to the first element. [Contains Head & Tail].