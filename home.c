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
    char stack[100000];
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
    int t;
    scanf("%d", &t);
    while(t--){
        char s[100000];
        scanf("%s", s);
        printf("%s\n", isBalanced(s));
    }
    return 0;
}