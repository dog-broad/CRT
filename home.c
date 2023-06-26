#include <stdio.h>
#include <string.h>

#define MAX_N 100
#define MAX_KNOWLEDGE 1000

typedef struct {
    int size;
    int items[MAX_N];
} stack;

int is_possible(stack *s, int n, int knowledge, int x) {
    int dp[1 << 10];
    memset(dp, 0, sizeof(dp));  // Initialize the dynamic programming table

    dp[knowledge] = 1;  // Set the base case

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (1 << 10); j++) {
            if (dp[j]) {
                int new_knowledge = j | s->items[i];
                dp[new_knowledge] = 1;
            }
        }
    }

    return dp[x];
}

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        stack s;
        s.size = n;

        for (int i = 0; i < n; i++) {
            scanf("%d", &s.items[i]);
        }

        if (is_possible(&s, n, 0, x)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
