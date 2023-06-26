# Pointer

**Pointer**: Points to a reference

## Operators  

**&** ⇒ Reference

**\*** ⇒ Dereference

`size of()` ⇒ Returns the Byte Size of the Data Type

> Use `%p` for printing the address of a variable

```c
#include <stdio.h>

void main(){
    int var = 92;   
    printf("%d %p", var, &var); // 92 00000093533ffa2
    // var ⇒ Value
    // &var(refernecing) ⇒ Address of var
}
```

(Pointer ⇒ `*p`)

`*p` ⇒ value  
`p` ⇒ address of p  
`&p` ⇒ address of the entire pointer

**Pointers** are considered the most *important* feature of C Language

```c
#include<stdio.h>
int main(){
    int var1 = 67;  // Varible
    int *var2;      // Pointer
    var2 = &var1;   // Address of var1 is assigned to var2
    printf("&d \n", *var2);  // 67
    printf("%p %p\n", var2, &var1); // Address is same
    // 000000dab3dffdf4 000000dab3dffdf4
    // *var2 pointsto the variable's value
    // var2 is the address of var1
    // &var2 is the adress of entire var2
}
```

`[]` ⇒ Subscript Operator - Performs pointer arithmetic

```c
#include<stdio.h>
int main(){
    int arr[] = {67, 70, 34, 78, 123};
    printf("%d \n", sizeof(arr));   // NumberOfElemnts * byteSize

    printf("%p %p", arr, &arr[0]);  // 000000bac37ffd00 000000bac37ffd00
    // Address of the array is equal to the adress of the first element

    printf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    // -1015022336 -1015022332 -1015022328
    // Adress for each element increases by 4 bytes
}
```

```c
#include<stdio.h>
int main(){
    char str[]="Hello";
    printf("%d", sizeof('c'));
    // Output: 4
    // Explaination: Any chracter in C is converted to it's ASCII
    // ASCII ⇒ American Standard Code for Information Interchange
    // ASCII value for 'c' is 99
}
```

## Consider Example

```
+----+----+----+----+----+----+----+
| 21 | 23 | 25 | 27 | 29 | 30 | 35 |
+----+----+----+----+----+----+----+
|0x20|0x24|0x28|0x32|0x36|0x40|0x44|
+----+----+----+----+----+----+----+
|                                  |
+--------------0x20----------------+
```

```c
arr[int] ⇒ *(arr + Index)
```

> arr[2] ⇒ [BaseAddress + (Index * ByteSize)] ⇒ 0x20+(2*4) ⇒ 0x28  
> arr[5] ⇒ [0x20 + (5*4)] ⇒ *(0x40) ⇒ 30

## Double pointer

```c
#include<stdio.h>
int main(){
    int var1 = 56;  //var1 refers to a value
    int *var2 = &var1;  // var2 refers var1
    int **var3 = &var2; // var3 refers to var2
    *var2 = 90;     // A chnage in var2 changes var1 and var3
    printf("%d %d %d\n", var1, *var2, **var3);  // 90 90 90
    // Since the address for all of the vars are equal
    printf("%p %p %p", &var1, var2, *var3);
    // 00000008053ffae4 00000008053ffae4 00000008053ffae4
}
```

```c
#include<stdio.h>
int main(){
    int arr[] = {12, 13, 67};
    printf("%d\n", *arr);   // 12
    // *arr ⇒ arr[0] ⇒ *(arr+0)

    printf("%d\n", *arr+2);     // 14 (12+2)
    printf("%d\n", *(arr+2));   // 67

    printf("%d", *&*&*arr); //12
}   
```

char ⇒ 1  
float ⇒ 4  
double ⇒ 8  
int ⇒ 4  
long double ⇒ 16  
short int ⇒ 2  
long ⇒ 4  
long long int ⇒ 8

## Pointer Arithmetic

```c
#include<stdio.h>
int main(){ // We cannot use a pointer without giving it an address
    int *var;
    scanf("%d\n",var);
    printf("%d",*var);
    // Output: Runtime Error
}
```

```c
#include<stdio.h>
int main(){
    int v;
    int *var = &v;
    scanf("%d\n", var); //90
    printf("%d %d", *var, v); // 90 90
    // Output: Input will be printed twice
}
```

```c
#include<stdio.h>
int main(){
    char var[100];
    scanf("%s",&var);   // Hello
    // var or &var ⇒ Both are same, Output will be same
    printf("%s",var);
}
```

```c
#include<stdio.h>
int main(){
    char str[]="Hello";
    printf("%c\n", *str++);   // ⇒ Not possible
    // Compile time Error
    printf("%c\n", (*str)++); // H
    // Works
    printf("%c\n", ++(*str)); // I
}
```