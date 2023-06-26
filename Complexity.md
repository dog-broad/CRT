# Complexity

**Algorithm:** A set of instructions to solve a problem.

**Complexity:** Number of instructions required to solve a problem.  
<br>

<u>*How do we measure complexity?*</u>  
By measuring the number of operands(operations) performed for variable input.

<u>*What makes a good algorithm?*</u>
1. Balanced Complexity
2. Goodness (OOP, Proper documentation, Comments, Simple Code, etc.)

## Problem: Take 3 numbers as input and print the largest number

```c
#include<stdio.h>

int main(){
  long long var1, var2, var3;
  scanf("%lld %lld %lld", &var1, &var2, &var3);

  if(var1 >= var2 && var1 >= var3){
    printf("%lld", var1);
  }   // This block contains 3 operators
  else if(var2 >= var1 && var2 >= var3){
    printf("%lld", var2);
  }   // This block contains 3 operators + 1 else check
  else{
    printf("%lld", var3);
  }   // 1 else check
  return 0;
}  
// The total number of checks is 8, and the problem has the Time complexity 8
// T(N) = 8
```
- This solution is not balanced, it uses too many checks.
- Gaussian elimination is a better solution.
- Gaussian elimination uses 3 operators, and has 3 Time complexity.

## Optimizing the solution

```c
#include<stdio.h>

int main(){
  long long var1, var2, var3;
  scanf("%lld %lld %lld", &var1, &var2, &var3);

  // Gaussian Elimination to find the largest number
  if(var1 >= var2){
    if(var1 >= var3){
      printf("%lld\n", var1);
    }else{
      printf("%lld\n", var3);
    }
  }
  else{
    if(var2 >= var3){
      printf("%lld\n", var2);
    }else{
      printf("%lld\n", var3);
    }
  }
  return 0;
}
// T(N) = 4
```

## Optimized Solution Further

```c
#include<stdio.h>

int main(){
    long long var1, var2, var3;
    scanf("%lld %lld %lld", &var1, &var2, &var3);
    long long max;

    if(var1 >= var2){
        if(var1 >= var3){
        max = var1;
        }else{
        max = var3;
        }
    }
    else{
        if(var2 >= var3){
        max = var2;
        }else{
        max = var3;
        }
    }
    printf("%lld\n", max);
}   // T(N) = 4
```
## Most Optimized: Using ternary operator

```c
#include<stdio.h>

int main(){
    long long var1, var2, var3;
    scanf("%lld %lld %lld", &var1, &var2, &var3);
    long long max;

    printf("%lld", var1 >= var2 ? (var1 >= var3 ? var1 : var3)
                                : (var2 >= var3 ? var2 : var3));
}   // T(N) = 3 
```

---

## Problem: Take an input find its number of digits

```c
int main(){
    long long n, c=0;
    scanf("%lld", &n);
    while(n != 0){
        c++;
        n /= 10;
    }
    printf("%lld", c);
}   // T(N) = 1 + 3 * log10(N)
```

### Optimized Solution

```c
int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld", (long long)log10(n) + 1);
}   // T(N) = log10(N) + 1
```

---

## Problem: Take an N and print odd numbers from 1 to N

```c
int main(){
    long long n;
    scanf("%lld", &n);
    for(long long i=1; i<=n; i++){  // 1 + 2N
        // Bitwise AND to check if the number is odd
        if (i & 1){                 // 1N
            printf("%lld ", i);
        }
    }
}   // T(N) = 3N + 1
```

### Using simpler logic

```c
int main(){
    long long n;
    scanf("%lld", &n);
    for(long long i=1; i<=n; i+=2){ // 1 + 2(N/2)
        printf("%lld ", i);
    }
}   // T(N) = 2(N/2) + 1
```
---

## Problem: Take an N and print N*N box of stars

```c
#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    for(long long i=1; i<=n; i++){  // 1 + 2N
        for(long long j=1; j<=n; j++){  // n(1 + 2N)
            printf("*");
        }
        puts("");
    }
}   // T(N) = 1 + 2N + n(1 + 2N) = 2(N^2) + 3N + 1
```

### Optimized Solution

```c
#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    n *= n;
    for(long long i=1; i<=n; i++){  // 1 + 2N
        printf("*");
    }
}   // T(N) = 2(N^2) + 1
```

---

## Problem: Take an N. If N is within 100 and 300, print "Yes", else print "No"

```c
#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    if(n >= 100 && n <= 300){   // 3
        printf("Yes");
    }else{
        printf("No");
    }
}   // T(N) = 3
```

### Optimized Solution

```c
#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    switch(n){   // 1
        case 100 ... 300: printf("Yes"); break;
        default: printf("No"); break;
    }
}   // T(N) = 1
```

---

## Problem: Take two inputs Base and Power. Find the value of base to the power.

```c
int main(){
  double b, p;
  scanf("%lf%lf", &b, &p);
  double r = 1;
  for(double i = 1; i <= p; i++){ // 1 + 2P
    r *= b;                       // 1P
  }
  printf("%lf", r);
} // T(N) = 1 + 3P
```

### Optimized Solution

```c
int main(){
	double b, p;
	scanf("%lf%lf", &b, &p);
	double r = 1;
	while(p!=0){	// Until P is 0
		if(p&1)		// If last Bit in p is 1,
			r *= b;	// multiply b with p
		b *= b;		// square the base
		p >>= 1;	// p /= 2
	}
	printf("%lf", r);
}	// T(N) = 1 + 5 * log2(P)
```

Base: 3		P: 6	R: 1

6 ⇒ 0110 & 1 ⇒ 0

Base: 9		P: 3	R: 1

3 ⇒ 0011 & 1 ⇒ 1

Base: 81	P: 1	R: 9

1 ⇒ 0001 & 1 ⇒ 1

Base: 6551	P: 0	R: 279


## Time complexity comparison:

|	Equation	|	100		|	10000	|	100000000	|
|---------------|-----------|-----------|---------------|
|	  3P+2		|	302		|	30002	|	300000002	|
|5 * log2(P) + 1|	16		|	  66	|		131		|


<br>
<br>

# Asymptotic Analysis

**Asymptotic Analysis:** It measures the growth of a program.

**Asymptotic Notation:** They provide an abstraction of the complexity in an algorithm.

**Bounds:**  
- Upper Bound ⇒ Big Oh ⇒ O ⇒ The Worst Case
- Tight Bound ⇒ Theta ⇒ Ɵ ⇒ Average case
- Lower Bound ⇒ Omega ⇒ Ω ⇒ Best Case


```c
#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    if(n&1)
      for(long i = 1; i <= n; i++)
        printf("*");
    else
      printf("*");
}   // O(N) Omega(C) Theta(N)
// Theta(N) since even if Odd occurs once, Time will be N

/*
If N is Odd,
T(N) => 2+2n 
If N is Even,
T(N) => 2
*/ 
```

## Bubble Sort
```c
#include<stdio.h>

void swap(long long *a, long long *b){
  long long c = *a;
  *a = *b;
  *b = c;
}

// void bubbleSort(long long arr[], int n){
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       if(arr[j] > arr[j+1])
//         swap(&arr[j], &arr[j+1]);
//     }
//   }
// }
// can be optimized

void bubbleSort(long long arr[], int n){
   for(int i=0; i<n-1; i++){
    int chk = 0;
     for(int j=0; j<n-i-1; j++){
       if(arr[j] > arr[j+1]){
         swap(&arr[j], &arr[j+1]);
         chk = 1;
       }
       if(chk == 0)
        break;
     }
   }
}

int main(){
  int n;
  scanf("%d", &n);
  long long arr[n];
  for(int i=0; i<=n; i++)
    scanf("%lld", &arr[i]);
  bubbleSort(arr, n);
  return 0;
}
```

> Optimized:
```c
#include <stdio.h>
// Bubble Sort
void swap(long long *a, long long *b)
{ long long c = *a; *a = *b; *b = c; }
void bubbleSort(long long arr[], int n){
    for(int i=0;i<n-1;i++){
        int chk = 0;
        for(int j=0;j<n-i-1;j++){
            if(arr[ j ] > arr[ j+1 ] ) 
            { swap(&arr[ j ], &arr[ j + 1 ]); chk =1;
        }
        if(chk == 0) break;
    }
} // O(N**2) Omega(N) Theta (N**2)
int main(){
    int n; scanf("%d", &n); long long arr[n];
    for(int i=0;i<n;i++) scanf("%lld", &arr[i]);
    bubbleSort(arr, n);
    for(int i=0;i<n;i++) printf("%lld ", arr[i]);
}  // O(N) Omega(C) Theta(N)
```