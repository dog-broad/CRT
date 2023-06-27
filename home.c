#include <stdio.h>

int main(){
    // reverse a string without strrev
    char str[2000];
    // scan till new line
    scanf("%[^\n]s", str);
    // reverse
    int i = 0;
    int j = 0;
    while(str[i] != '\0'){
        i++;
    }
    i--;
    while(i > j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
        j++;
    }
    printf("%s", str);
    return 0;
}