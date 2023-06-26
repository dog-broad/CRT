# **Storage classes**
 
**Features of a variable:** Scope, Lifetime

**Storage Class:** Defines the features of a variable

---
## Types of Storage Classes

- Automatic
- Static

auto, static

---
## Automatic Storage Class

**Auto** is the default storage class for all the local variables. It is applied to any variable within the main function.

**Default value:** Garbage value (Random Value)

**scope:** Limited to the Block {} in which it is declared

**lifetime:** Till the end of the block in which it is declared

```c
#include<stdio.h>
int main(){
    int var = 2;    // Automatic Storage Class by default
    var = (var+=3) + (var+=5)   
    /*
     *  Output is 20
     *  (var=5) + (var=10)
     *  Auto cannot retain its previous value
     *  So it takes the latest value, 10 + 10 = 20
    */
    printf("%d", var);
}
```

```c
#include<stdio.h>
int main(){
    {int var = 2;}
    printf("%d", var); 
    // Compiler Error: var is not defined
    // Because var is limited to the block {} in which it is declared
}
```

---
## Static Storage Class

**Static** is a storage class that retains its value even after the block in which it is declared ends.  
It retains its previous instance (value) and is not reinitialized.

**Default value:** 0

**scope:** Limited to the Block {} in which it is declared

**lifetime:** Till the end of the program

```c
#include <stdio.h>
int main(){
    static int var = 4;
    var = (var+=2) + (var+=3)
    printf("%d", var);
    /*
       Output is 15
       If auto: 18
    */
}
```

```c
#include <stdio.h>
int main(){
    static int arr[100];
    for(int i=0; i<100; i++){
        printf("%d ", arr[i]);
    }
    // Output: 100 zeros
    // If Auto: Filled with Garbage Values
}
```
