#include <stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s[100];
        scanf("%s", s);
        int i;
        // check if consecutive characters are consonants
        int count = 0;
        for(i=0; i<n-1; i++){
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
                count++;
            }
            else{
                count = 0;
                continue;
            }
            if(count > 4){
                printf("NO\n");
                break;
            }
        }
        if(count <= 4){
            printf("YES\n");
        }
    }
    return 0;
}