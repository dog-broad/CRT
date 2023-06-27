#include<stdio.h>
#include<string.h>

// Take an integer input n. Take another input string. Print string of n chars.

int main(){
    int n;
    char str[100];
    scanf("%d", &n);
    // input string with spaces
    scanf("%[^\n]s", str);
    if(n > strlen(str)){
        // print string
        puts(str);
        return 0;
    }
    return 0;
}