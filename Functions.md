# Functions

### Function performs a task
<br>

> Example
```c
#include <stdio.h>

void csd(); // Function Prototype
int main(){
    csd();  // Function call
}
void csd(){ // Function Declaration
    printf("In the class CSD!");
}
```

**What are the parts of a function?**
1. Prototype
2. Declaration
3. Call

## Parameterized function

> Parameterized function
```c
#include <stdio.h>
long add(long, long);   // Protoype ⇒ Doesn't see Var names

int main(){
    printf("%ld", add(9, 4));   // Prints 13
}

long add(long a, long b){
    return a+b;
}
```

> Return with multiple values
```c
#include <stdio.h>
long add(long, long);
int main(){
    printf("%ld", add(9, 2));
}
long add(long a, long b){
    return 1, 2, 3;
}

/*
Output: 3

1. Function can return only one value of certain type.
2. As the return function works as a stack when coma is seperating the integer 3 would be the first to be popped of three
*/
```

---
## Program to swap two numbers
```c
#include <stdio.h>
// Take two inputs and swap them.
void swap(long, long);
int main(){
    long a, b;
    scanf("%ld%ld". &a, &b);    // 9 7
    printf("Before Swap: %ld %ld \n", a, b);
    swap(a, b);
    printf("After Swap: %ld %ld", a, b);
    return 0;
}   // Swap will not work since values are swapped temporarily
void swap(long a, long b){
    long c = a;
    a = b;
    b = c;
}
```
- The above code doesn't work as the scope of variables a, b lies within the main function.  

- If the "After Swap" print statement were to be placed in the swap function, then it would display the swapping correctly.
```c
#include <stdio.h>
// Take two inputs and swap them.
void swap(long, long);
int main(){
    long a, b;
    scanf("%ld%ld". &a, &b);    // 9 7
    printf("Before Swap: %ld %ld \n", a, b);
    swap(a, b);
    return 0;
} 
void swap(long a, long b){
    long c = a;
    a = b;
    b = c;
    printf("After Swap: %ld %ld", a, b);
    // **Output:** 
    // After Swap: 7 9
}
```

But the actual a, b variables have not been changed

> To properly swap the two variables, we use their addresses

```c
#include <stdio.h>
// Take two inputs and swap them.
void swap(long *, long *);
int main(){
    long a, b;
    scanf("%ld%ld". &a, &b);    // 9 7
    printf("Before Swap: %ld %ld \n", a, b);
    swap(&a, &b);
    printf("After Swap: %ld %ld", a, b);
    return 0;
}
void swap(long *a, long *b){
    long c = *a;
    *a = *b;
    *b = c;
}
```

---

## **Function Parameter** Vs. **Function Argument**
|   Function Parameter  | Function Argument |
|:-----------------------|:-------------------|
|Parameters are written in the function declaration | Arguments are written in the function call|

**Variadic Function:**  
Functions with variable arguments.

```c
#include <stdio.h>
#include <stdarg.h>
long add(long, ...);
int main(){
    printf("%ld", add(5, 4, 5, 1, 2, 3));   // The first argument denotes the number of arguments being passed
    return 0;
}
long add(long n, ...){
    va_list values; // Object for N values
    int sum = 0;
    va_start(values, n);    // Go through all the values N times
    for(long i=0; i<n; i++) // Adding each value from values
        sum += va_arg(values, long);
    va_end(values); // Stop the list
    return sum;
}
```

> Usage
```c
#include <stdio.h>
#include <stdarg.h>

long add(long, ...);
int mani(){
    add(3, 10, 90, 40);
    return 0;
}
long add(long n, ...){
    va_list values;         // 1. Creates the list
    va_start(values, n);    // 2. Start the list
    // 3. Access arguments
    printf("%ld", va_arg(values, long));
    printf("%ld", va_arg(values, long));
    // 4. End the list
    va_end(values);
}
```

# Summary

## **Functions in stdarg.h**

1. `va_list` \<listObject> ⇒ Create a list object of arguments
2. `va_start` (\<listObject>, \<NumberOfArgs>) ⇒ Starts a listObject till N.
3. `va_arg` (\<listObject>, \<DataType>) ⇒ Goes through the arguments. 
4. `va_end` (\<listObject>) ⇒ Ends the list. Deallocates.