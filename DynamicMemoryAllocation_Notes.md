```c
#include<stdio.h>
#include<malloc.h>

int main(){
    int N = 1;
    int *var = (int*) malloc(sizeof(int)*N);    // Dynamic array
    // Syntax: (datatype*) malloc(sizeof(datatype)*NumElements);
    var[0] = 12;
    printf("%d", *var); //12
    // var is a dynamic array. It's size can be expanded
}
```

```c
#include<stdio.h>
#include<malloc.h>

int main(){
    int N = 100;
    int *var = (int*) calloc(sizeof(int)*N);    // Dynamic array
    // calloc => Contiguous Memory Allocation
    // Syntax: (datatype*) calloc(sizeof(datatype)*NumElements);
    for(int i=0; i<N; i++){
        printf("%d ", var[i]);  // 0 0 0 0 0 0 0 0 0 0 ...
    }
}
// var is a dynamic array. It's size can be expanded
```
```c
#include<stdio.h>
#include<malloc.h>

int main(){
    int *var;   // Wild pointer(Memory not allocated)
    var = (int*) malloc(sizeof(int));    // Dynamic array
    *var = 92;
    
    printf("%d", *var);

    // free the memory
    free(var);

    printf("%d", *var); // Garbage value ==> Dangling pointer [value keeps changning]
    // Random values (Memory Leak)
}
```

---
## How do we clear the memory leak?
```c
#include<stdio.h>
#include<malloc.h>

int main(){
    int *var;   // Wild pointer(Memory not allocated)
    var = (int*) malloc(sizeof(int));    // Dynamic array
    *var = 92;
    
    printf("%d", *var);

    // free the memory
    free(var);

    printf("%d", *var); // Garbage value ==> Dangling pointer [value keeps changning]
    // Random values (Memory Leak)
}
```

To clear memory leak, you need to free the dynamically allocated memory using the free() function. In the given code, the memory is freed using free(var) after the value of var is printed. However, the program still tries to access the value of *var after it has been freed, which results in a dangling pointer and a memory leak.

To fix this, you should not access the value of *var after it has been freed. Here's the corrected code:

```c
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *var;   // Wild pointer(Memory not allocated)
    var = (int*) malloc(sizeof(int));    // Dynamic array
    *var = 92;
    
    printf("%d", *var);

    // free the memory
    free(var);

    var = NULL; // Set the pointer to NULL after freeing the memory

    return 0;
}


In this code, the pointer var is set to NULL after the memory is freed. This ensures that the pointer no longer points to the freed memory and prevents any further access to the memory.
