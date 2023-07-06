# Arrays

- Array size must be an unsigned int(0-65535) which is greater than 0. 
```c
char a[5];
// size --> 5
// sizeof(a) --> 5 bytes
int a[5];
// size --> 5
// sizeof(a) --> 5*sizeof(int) --> 5*2 = 10 bytes
int a[2<3]; // int a[1];    // Valid
int a[2>3]; // int a[0];    // Error
int a[-3];  // Error
int a[2+3]; // int a[5];    // Valid
int a[3,4]; // int a[4];    // Valid
// Comma operator returns the right side value
int a[6/3]; // int a[2];    // Valid
int n=5;
int a[n];   // Error: Constant Expression required
// As per ANSI C  variables are not allowed as size.
#define SIZE 5
int a[SIZE]; // valid
// Macros are allowed isn array declaration, because macros are nothing but constants.
int a[40000]; // error :array size is too large 
// What is the maximum size int array?
// =stack size is 65535,
// it creates 40000 variables, each variables requires 2 bytes,total 40000*2=80000 bytes are required.but stack size 65535 bytes only.
int a[stack size/int size];
int a[65535/2]; // int a[32767]; bytes only
```
## Initialization

```c
int a[3] = {10, 20, 30};    // Valid
int a[4] = {10, 20, 30, 20} // Valid
int a[3] = {10, 20, 30, 40} // Error
int a[];                    // Error
// In array declaration size is mandatory
int a[] = {10, 20, 30};     // Valid
// In array intialisation size is optional
int a[5];
// It creates 5 variables, they are
// --------------------------------------------
// | a[0] |  a[1]  |  a[2]  |  a[3]  |  a[4]  |
// --------------------------------------------
// All values are garbage values
int a[5] = {10};
// -------------------------------
// | 10 |  0  |  0  |  0  |  0  |
// ------------------------------
char a[3] = {a, b, c};          // Error
char a[3] = {'a', 'b', 'c'}     // Valid
char a[2] = {'a', 'b', 'c'}     // Error
char a[3] = {65, 66, 67}        // Valid [A, B, C]
char a[3] = {'0', '1', '2'}     // Valid
char a[3] = {'10', '20', '30'}  // Error
char a[5] = {'a'};
// -----------------------------------
// |  a  |  \0  |  \0  |  \0  |  \0  |
// -----------------------------------
char a[10] = "welcome";         // String
char a[5] = "abcdef";           // Error
char a[5] = "abcde";            // Valid but garbage value
char a[5] = "abcd";             // Valid
```

| 1000 | 1002 | 1004 |
|------|------|------|
|  10  |  20  |  30  |
| a[0] | a[1] | a[2] |
| 0[a] | 1[a] | 2[a] |
|*(a+0)|*(a+1)|*(a+2)|

## Usage

### Read a string and print out it on the screen
```c
void main(){
    char a[100];
    printf("Enter any string: ");
    // scanf("%s", a);  reads the string without spaces
    // gets(a);  with spaces
    scanf("%[\n]s", a);
    printf("\nGIven string: %s", a);
    getch();
}
```

### Printing a given string vertically
```c
void main(){
    char a[30];
    int i;

    printf("Enter any string: ");
    scanf("%[\n]s", a);
    for(i=0; a[i]!='\0'; i++){
        sleep(1);
        printf("\n %c" ,a[i]);
    }
    getch();
}
```

```
+---+----+----+----+----+----+----+----+----+----+
| w |  e |  l |  c |  o |  m |  e | \0 | gr | gr |
+---+----+----+----+----+----+----+----+----+----+
```

```c
void main(){
    char a[30], *p;
    printf("Enter any string: ");
    scanf("%[\n]s", a);
    p = a;  // p = &a,  p = &a[0],  p=a+0
    while(*p!=0){
        sleep(1);
        printf("\n %c", *p);
        p++;
    }
    getch();
}
```

### Print the vowels in the given string
```c
void main(){
    char a[30];
    int i;

    printf("Enter any string: ");
    scanf("%[\n]s", a);
    for(i=0; a[i]!='\0'; i++){
        sleep(1);
        if(a[i] == 'a' || a[i] == 'e'|| a[i] == 'i'|| a[i] == 'o'|| a[i] == 'u')
            printf("\n %c" ,a[i]);
    }
}
```

### Length of string
```c
void main(){
    char a[100];
    int i, count=0;

    printf("Enter any string: ");
    scanf("%[\n]s", a);
    for(i=0; a[i]!='\0'; i++){
        count++;
    }
    printf("Length = %d", count);
}
```

### Program to find the length of a string using pointers
```c
#include <stdio.h>

void main(){
    char *str = "Hello World";
    char *ptr = str;
    int count = 0;
    while(*ptr != '\0'){
        count++;
        ptr++;
    }
    printf("Length of string is %d", count);
}
```

```
+---+----+----+----+----+----+----+----+
| w |  e |  l |  c |  o |  m |  e | \0 |
+---+----+----+----+----+----+----+----+
```


### Reverse a string
```c
void main(){
    char a[100], b[100];
    int i, j, count=0;

    printf("Enter any string: ");
    scanf("%[\n]s", a);
    for(i=0; a[i]!='\0'; i++){
        count++;
    }
    for(i=count-1, j=0; i>=0; i--, j++){
        b[j] = a[i];
    }
    b[j] = '\0';
    printf("Reverse string is %s", b);
}
```

```c
void main(){
    char a[30], *p;
    int len=0;

    printf("Enter any string: ");
    scanf("%[\n]s", a);

    p=a;
    while(*p != '\0'){
        len++;
        p++;
    }
    printf("Length of string is %d", len);
    p=&a[len-1];
    while(p>=a){
        printf("%c", *p);
        p--;
    }
}
```