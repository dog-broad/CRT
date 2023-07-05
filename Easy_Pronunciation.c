#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s[100];
        scanf("%s", s);

        int count = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
                count++;
                if(count >= 4){
                    printf("NO\n");
                    break;
                }
            } else {
                count = 0;
            }
        }
        if (count >= 4) {
            continue;
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}