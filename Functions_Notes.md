# Functions

A named set of statements that perform some specific tasks is called a function.

In general, we have two types of functions:
- Pre-Defined
- User-Defined

## User Defined Functions
- With Parameters and With Return type
- With Parameters and Without Return type
- Without Parameters and With Return type
- Without Parameters and Without Return type

## Syntax

```c
data_type fucntion_name(paramters); // Declaration

fucntion_name(parameters); // Function Call

data_type function_name(parameters){    //
    // Set of statements                // Definition
}                                       //
```

### Example (With Parameters and With Return type)
```c
#include <stdio.h>
int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int res = sum(n1, n2);  // Function Call
    printf("%d", res);
    return 0;
}

int sum(int a, int b){  // Function Definition
    return a + b;
}
```

### Example (With Parameters and Without Return type)
```c
#include <stdio.h>
int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    sum(n1, n2);  // Function Call
    printf("%d", res);
    return 0;
}

void sum(int a, int b){  // Function Definition
    printf("%d", a+b);
}
```

### Example (Without Parameters and With Return type)
```c
#include <stdio.h>
int main(){
    res = sum();  // Function Call
    printf("%d", res);
    return 0;
}

int sum(){  // Function Definition
    int a, b;
    scanf("%d %d", &a, &b);
    return a+b;
}
```

### Example (Without Parameters and Without Return type)
```c
#include <stdio.h>
int main(){
    sum();  // Function Call
    return 0;
}

void sum(){  // Function Definition
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a+b);
}
```


# Recursion

A function calling a *copy* of itself is called Recursion

## Examples

```c
//C Program to print sum of N natural numbers using Recursion
#include <stdio.h>

int sum(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of %d natural numbers is %d", n, sum(n));
    return 0;
}

int sum(int n){
    if(n == 0)
        return 0;
    else
        return n + sum(n-1);
}
```


```c
// C Program to find factorial of a given number using recursion
#include <stdio.h>

int factorial(int);

int main()
{
    int n, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial of %d is %d", n, fact);
    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
```
```c
// C program to find sum of digits of a given number using recursion
#include <stdio.h>

int digit_sum(int);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d", num, digit_sum(num));
    return 0;
}

int digit_sum(int num){
    if(num == 0)
        return 0;
    return (num % 10 + digit_sum(num / 10));
}
```
```c
// C Program to print Nth Fibanocci term using recursion
#include <stdio.h>

int fib(int);

int count, a = 0, b = 1;

int main(){
    int n;
    printf("Enter the term required: ");
    scanf("%d", &n);
    printf("The %dth term is %d", n, fib(n-2));
    return 0;
}

int fib(int n){
    int c;
    count = n-1;
    c = a;
    a = b;
    b = b+c;
    printf("%d\n", b);
    if(count>-1)
        fib(count);
    else
        return b;
}
```
```c
// C Program to find power of two numbers with recursion

#include <stdio.h>

int power(int, int);

int main(){
    int base, exp, result;
    printf("Enter exponent: ");
    scanf("%d", &exp);
    printf("Enter base: ");
    scanf("%d", &base);
    result = power(exp, base);
    printf("%d^%d = %d", base, exp, result);
    return 0;
}

int power(int exp, int base){
    if(exp == 0){
        return 1;
    }
    else{
        return base * power(exp - 1, base);
    }
}
```

# Strings
In C, we implement strings using a character array

While storing this character array, a compiler takes a null character at the end of the string by default

## Initialize strings
- ```char str[] = "Hello";```
- ```char str[50] = "Hello";```
- ```char str[] = {'H', 'e', 'l', 'l', 'o'};```
- ```char str[6] = {'H', 'e', 'l', 'l', 'o'}```

## Accepting Strings from user
- `%s` for a single word
- `%[^\n]` for multiple words

## String - Inbuilt Functions
- `strlen()` ⇒ Returns the length of the string
- `strrev()` ⇒ Returns the reverse of the string
- `strcpy()` ⇒ Copies one string to another string
- `strncpy()` ⇒ Copies 'n' number of characters from the string
- `strcmp()` ⇒ Compares two strings
- `strcat()` ⇒ Concatenates two strings
- `strlwr()` ⇒ Converts a string to lowercase
- `strupr()` ⇒ Converts a string to uppercase

```c
// String concatenation
int main(){
    char str1[] = "Hello";
    char str2[] = "World";
    strcat(str2, str1);
    printf("%s", str2);
    return 0;
}
```
```c
// String concatenation till n characters
int main(){
    char str1[] = "Hello";
    char str2[] = "World";
    strncat(str2, str1, 3);
    printf("%s", str2);
    return 0;
}
```
```c
// String Comparison
int main(){
    char arr1[10] = "abe";
    char arr2[10] = "abc";
    printf("%d", strcmp(arr1, arr2));
    return 0;
}
```
```c
// String Comparison for n characters
int main(){
    char arr1[10] = "abe";
    char arr2[10] = "abc";
    printf("%d", strncmp(arr1, arr2, 2));
    return 0;
}
```
