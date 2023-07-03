#include <stdio.h>
#include <math.h>

#include <stdio.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        n--;
        int n3 = n / 3;
        int n5 = n / 5;
        int n15 = n / 15;
        int sum3 = 3 * n3 * (n3 + 1) / 2;
        int sum5 = 5 * n5 * (n5 + 1) / 2;
        int sum15 = 15 * n15 * (n15 + 1) / 2;
        printf("%d\n", sum3 + sum5 - sum15);
    }
    return 0;
}