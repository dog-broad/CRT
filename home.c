#include <stdio.h>
#include <stdlib.h>


int Fibonacci(int n) 
{ 
    if (n<0) 
        return -1; 
    if (n==1) 
        return 0; 
    return Fibonacci(n-1)+Fibonacci(n-2); 
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", Fibonacci(n));
    return 0;
}