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
