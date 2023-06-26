### ASCII Value check
```c
#include<stdio.h>

int main(){
    int i;
    for(i=0; i<=255; i++){
        sleep(1);
        printf("%d = %c\n", i, i);
    }
}
```

To convert lower case to upper case: subtract 32 from the ASCII value of the lower case character.

To convert upper case to lower case: add 32 to the ASCII value of the upper case character.

Ex: 
```c
    char ch = 'A';  
    printf("%c", ch+32); // a
```
Ex:
```c
    char ch = 'd';
    printf("%c", ch-32); // D
```


```c
void main(){
    printf("%c", 'c'-34);   // A
    printf("%c", 'A'+35);   // d
    printf("%c", 'D'+32);   // d
    printf("%d", 'c');      // 99
    printf("%d", '1');      // 49
    printf("%c", '1'+2);    // '3'
}
```

### Read a string from the user, convert it into uppercase
```c
#include <stdio.h>

void main(){
    char a[100];
    int i;
    printf("Enter any string: ");
    scanf("%[^\n]s", a);
    printf("Given string : %s", a);
    for(i=0; a[i]!='\0'; i++){
        if(a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - 32;
    }
    printf("Uppercase string: %s", a);
}
```

### Read a string from the user, and convert it into uppercase (Using pointers)
```c
#include <stdio.h>

void main(){
    char *p;
    char a[100];
    int i;
    printf("Enter any string: ");
    scanf("%[^\n]s", a);
    printf("Given string : %s", a);
    p = a;
    while(*p != '\0'){s
        if(*p >= 'a' && *p <= 'z')
            *p = *p - 32;
        p++;
    }
    printf("Uppercase string: %s", a);
}
```

### Convert the given string into a title case
```c
#include <stdio.h>

void main(){
    char a[100];
    int i;
    printf("Enter any string: ");
    scanf("%[^\n]s", a);
    printf("Given string : %s", a);
   if(a[0]>=98 && a[0]<=122)
        a[0] = a[0] - 32;
    for(i=0; a[i]!='\0'; i++){
        if(a[i] == 32){
            if(a[i+1]>=98 && a[i+1]<=122)
                a[i+1] = a[i+1] - 32;
        }
    }
    printf("Title case string: %s", a);
}
```

### Count no. of words in a string
```c
#include <stdio.h>

void main(){
    char a[100];
    int i;
    int count = 1;
    printf("Enter any string: ");
    scanf("%[^\n]s", a);
    printf("Given string : %s", a);
    for(i=0; a[i]!='\0'; i++){
        if(a[i] == 32)
            count++;
    }
    printf("No. of words in the string: %d", count);
}
```