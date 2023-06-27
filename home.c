#include <stdio.h>

int main(){
    int sum = 0;
    // with n as buffer take string input
    char str[5000];
    scanf("%5000s", str);
    for(int i = 0; str[i] != '\0'; i++){
        // if digit add to sum
        if(str[i] >= '0' && str[i] <= '9'){
            sum += str[i] - '0';
        }
    }
    printf("%d", sum);
}