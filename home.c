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
    // using stack to check if brackets are balanced

    char stack[10000];
    for(int i = 0; i < n/2; i++){
        push(stack, s[i]);
    }

    for(int i = n/2; i < n; i++){
        if(stack[top] == '(' && s[i] == ')'){
            pop(stack);
        }
        else if(stack[top] == '{' && s[i] == '}'){
            pop(stack);
        }
        else if(stack[top] == '[' && s[i] == ']'){
            pop(stack);
        }
        else{
            return "NO";
        }
    }
}

int main(){
    char s[10000];
    scanf("%9999s", s);
    printf("%s", isBalanced(s));
    return 0;
}