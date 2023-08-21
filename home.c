#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;

void push(char* stack, char c){
    stack[++top] = c;
}

void pop(char* stack){
    top--;
}

char* isBalanced(char* s) {
    int n = strlen(s);
    char stack[10000];
    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            push(stack, s[i]);
        } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            if (top < 0) {
                return "NO";
            }
            char topChar = stack[top];
            if ((topChar == '(' && s[i] == ')') ||
                (topChar == '{' && s[i] == '}') ||
                (topChar == '[' && s[i] == ']')) {
                pop(stack);
            } else {
                return "NO";
            }
        }
    }
    if (top >= 0) {
        return "NO";
    } else {
        return "YES";
    }
}

int main(){
    char s[10000];
    scanf("%9999s", s);
    printf("%s", isBalanced(s));
    return 0;
}