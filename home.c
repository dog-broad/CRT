char* isBalanced(char* s) {
    int i = 0, j = strlen(s) - 1;
    while(i < j){
        if(s[i] != s[j]) return "NO";
        i++; j--;
    }
    return "YES";
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