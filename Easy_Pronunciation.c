#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100];
    scanf("%s", s);

    int count = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
            count++;
        } else {
            count = 0;
        }
        if (count >= 4) {
                printf("NO\n");
                return 0;
        }
    }
    printf("YES\n");
    return 0;
}