# Bitwise

**Bit:** Binary digit

**Binary:** Combination of 1's and 0's

> 1 ⇾ True  
> 0 ⇾ False

|**Conversion**| **Value**      |
|-------------|-----------------|
| 1 Byte      | 8 Bits          |
| 1 Kilo Byte | 1024 Bytes      |
| 1 Mega Byte | 1024 Kilo Bytes |
| 1 Giga Byte | 1024 Mega Bytes |
| 1 Tera Byte | 1024 Giga Bytes |

**Bitwise Operators:** Operators that work on bits

---

## **DEC ⇒ Binary**

26 ⇒ 11010
```

 2  | 26   0
    |----
 2  | 13   1
    |----
 2  | 6    0
    |----
 2  | 3    1
    |----
    | 1   
    |----

```
---
## **Bitwise And (&)**

The bitwise AND operator (&) compares two numbers on a bit level and returns a number where the bits of that number are turned on if the corresponding bits of both numbers are 1.

### AND Table

| A | B | A & B |
|---|---|-------|
| 0 | 0 | 0     |
| 0 | 1 | 0     |
| 1 | 0 | 0     |

```c
  9  ⇒  1001
 10  ⇒  1010
------------------
  8  ⇒  1000
```

```c
  9  ⇒  1001
  5  ⇒  0101
------------------
  1  ⇒  0001
```

---

## **Bitwise Or (|)**

The bitwise OR operator (|) compares two numbers on a bit level and returns a number where the bits of that number are turned on if either of the corresponding bits of either number are 1.

### OR Table

| A | B | A \| B |
|---|---|--------|
| 0 | 0 | 0      |
| 0 | 1 | 1      |
| 1 | 0 | 1      |
| 1 | 0 | 1      |

```c
  323 ⇒  101000011
  163 ⇒  010000011
--------------------
  483 ⇒  111000011
```

---
## **Bitwise Xor (^)**

The XOR (^) or exclusive or operator compares two numbers on a bit level and returns a number where the bits of that number are turned on if either of the corresponding bits of the two numbers are 1, but not both.

### XOR Table

| A | B | A ^ B |
|---|---|-------|
| 0 | 0 | 0     |
| 0 | 1 | 1     |
| 1 | 0 | 1     |
| 1 | 1 | 0     |

```c
  53 ⇒  110101
  42 ⇒  101010
------------------
  31 ⇒  011111
```

```c
  73 ⇒  1001001
  37 ⇒  0100101
------------------
 108 ⇒  1101100
```

---

## **Left Shift (<<)**

The Left Shift (<<) operator moves the bits of a number to the left and fills in the new gaps with 0.

```c
  5  ⇒  101
  5 << 1
------------------
   10  ⇒  1010
```

```c
   10 << 0 ==>  1010 <<0   ==> 1010(10)
   10 << 1 ==>  1010 <<1   ==> 10100(20)
   10 << 2 ==>  1010 <<2   ==> 101000(40)
   10 << 3 ==>  1010 <<3   ==> 1010000(80)
```

> n << k ⇒ n * 2^k

---

## **Right Shift (>>)**

The Right Shift (>>) operator moves the bits of a number to the right and fills in the new gaps with the sign bit (1 for negative numbers and 0 for positive numbers).

```c
   22 >> 0 ==>  10110 >>0   ==> 10110(22)
   22 >> 1 ==>  10110 >>1   ==> 1011(11)
   22 >> 2 ==>  10110 >>2   ==> 101(5)
   22 >> 3 ==>  10110 >>3   ==> 10(2)
```

> n >> k ⇒ n / 2^k

---

## **Compare Even and Odd Numbers**

|   Even   |   Odd   |
|----------|---------|
| 0 ⇒ 000 | 1 ⇒ 001 |
| 2 ⇒ 010 | 3 ⇒ 011 |
| 4 ⇒ 100 | 5 ⇒ 101 |
| 6 ⇒ 110 | 7 ⇒ 111 |
| 8 ⇒ 1000| 9 ⇒ 1001|
| 10 ⇒ 1010| 11 ⇒ 1011|

- Even numbers end with 0
- Odd numbers end with 1

> **Modulo operator (%) has the highest time complexity**

- use n & 1 to check if n is odd or even

```c
#include <stdio.h>
// Take an input from user and check if it is odd or even
int main()
{
    int n;
    scanf("%d", &n);
    if (n & 1)
        printf("Odd\n");
    else
        printf("Even\n");
    return 0;
}
```

Modulo can be written as a formula as shown below

```c
n % k = n - (k * (n / k))
```


# Important Stuff

*Bitwise operators have the highest precedence*
---

1. n/2 ⇒ n >> 1
2. n*2 ⇒ n << 1
3. n%2 ⇒ n & 1
4. n%k ⇒ n & (k-1)
5. n<<K ⇒ n * (2^k)
6. n>>K ⇒ n / (2^k)
7. Even ⇒ n & 1 == 0
8. Odd ⇒ n & 1 == 1
9. ~n ⇒ -(n + 1)
10. 2's complement ⇒ ~n + 1 ⇒ -n (1's complement + 1)
11. Number of digits in a number ⇒ log10(n) + 1
12. Number of digits in a number in base 2 ⇒ log2(n) + 1
13. Number of digits in a number in base 8 ⇒ log8(n) + 1
14. Decimal to Binary ⇒ (n >> (--i)) & 1, while i >= 0

## Precedence of operators:
(**~**) [Complement] > (**<< >>**) [Shift Operators] > (**&**) [AND] > (**^**) [XOR] > (**|**) [OR]

---

```c
#include<stdio.h>
int main(){
   printf("%d", 15&3|2^1);
}
// (15&3)|2^1  ==>   3|2^1  ==>   3|2  ==>   3
```
```c
#include<stdio.h>
int main(){
  printf("%d", 3^7&6|4);
}
//  3^(7&6)|4 ==>   3^6|4  ==>   5|4  ==>   5
```

## **Binary Representation of Numbers**

**MSB:** Most Significant Bit  
MSB for Positive is 0 && MSB for Negative is 1

- 8: 00001000  
- 4: 0100  
- 3: 0011  
- 2: 0010  
- 1: 01  
- 0: 00  
- -1: 11(-2 + 1)  
- -2: 10(-2)  
- -3: 1101(-8 + 4 + 1)  
- -4: 1100(-8 + 4)  

|   Decimal   |   Binary   |   1's Complement   |   2's Complement   |
|-------------|------------|--------------------|--------------------|
|12           |  0000 1100 |   1111 0011 {-13}  |   1111 0100 {-12}  |
|7            |       0111 |        1000 {-8}   |        1001 {-7}   |
|23           |  0001 0111 |   1110 1000 {-24}  |   1110 1001 {-23}  |
|-47          |  1101 0001 |   0010 1110 {46}   |   0010 1111 {47}   |
|133          |  0000 0000 1000 0101  |   1111 1111 0111 1010 {-134}  |   1111 1111 0111 1011 {-133}  |
|-122         |  1111 1111 1000 0110  |   0000 0000 0111 1001 {121}   |   0000 0000 0111 1010 {122}   |
|-93          |  1111 1111 1010 1101  |   0000 0000 0101 0010 {92}    |   0000 0000 0101 0011 {93}    |

---

## Program to find negative of a number without using (-) operator

```c

#include<stdio.h>

int main(){
    int n;
    // Take an input from user
    scanf("%d", &n);
    // Print the negative of the number using 2's complement
    printf("%d", (~n + 1));
    return 0;
} // -5 ⇒ 1111 1011 ⇒ 0000 0100 ⇒ 4 + 1 ⇒ 5

```

---

## Technique to convert a binary number to n - bit format

Decimal: 23
Binary: 10111

- To convert the binary to 8 bit, right shift the number from 7 to 0 times

```c
  010111 >> 7 ⇒ 0        &1 ⇒ 0
  010111 >> 6 ⇒ 0        &1 ⇒ 0
  010111 >> 5 ⇒ 0        &1 ⇒ 0
  010111 >> 4 ⇒ 01       &1 ⇒ 1
  010111 >> 3 ⇒ 010      &1 ⇒ 0
  010111 >> 2 ⇒ 0101     &1 ⇒ 1
  010111 >> 1 ⇒ 01011    &1 ⇒ 1
  010111 >> 0 ⇒ 010111   &1 ⇒ 1
```

23 ⇒ 0001 0111

## The program
  
```c
#include<stdio.h>

int main(){
  long long N;
  scanf("%lld", &N);
  // 16-bit Representation
  for(long i = 16 - 1; i>=0; i--){
    if(i%4 == 3)
      printf(" ");
    printf("%d", (N>>i)&1);
  }
}
```
---

## Program to print the Number of digits in a number

```c
#include<stdio.h>
#include<math.h>

int main(){
  long long N;
  scanf("%lld", &N);
  printf("%ld", (long)log10(N) + 1);
  // to get no of binary  digits use log2(N) + 1
  // to get no of octal digits use log8(N) + 1
  // to get no of hexadecimal digits use log16(N) + 1
  // printf("%ld", (long)log2(N) + 1);

  // if log to base 2 is not available i.e log2(), use log(n)/log(2)
  // if log to base 8 is not available i.e log8(), use log(n)/log(8)
  // if log to base 16 is not available i.e log16(), use log(n)/log(16)
}
```