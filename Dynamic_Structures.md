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

### Define a node?

A Node is an Abstract Structure when there's 

```c
#include <stdio.h>
#include <stdlib.h>

struct CSD{
    double per
};

int main(){
    struct CSD *p = (double *)malloc(sizeof(double));
    p->per = 90.5;
    printf("%lf", (*p).per);
    // p->per is same as (*p).per
}
```
> **Output:**
```
90.5
```

### Singly Linked List

```c
#include <stdio.h>
struct CSD{
    double per;
    struct CSD *next;
};

int main(){
    struct CSD *p1 = (struct CSD *)malloc(sizeof(struct CSD));
    struct CSD *p2 = (struct CSD *)malloc(sizeof(struct CSD));
    struct CSD *p3 = (struct CSD *)malloc(sizeof(struct CSD));

    p1->per = 90.5; p1->next = p2;  // 90.5 -> NULL
    p2->per = 80.5; p2->next = p3;  // 90.5 -> 80.5 -> NULL
    p3->per = 70.5; p3->next = NULL;// 90.5 -> 80.5 -> 70.5 -> NULL
    for(; p1!=NULL; p1=p1->next){
        printf("%lf\n", p1->per);
    }
}
```
> **Output:**
```
90.5
80.5
70.5
```
```c
#include <stdio.h>
#include <stdlib.h>
#include<math.io>

```