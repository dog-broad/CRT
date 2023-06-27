#include <stdio.h>
#include <math.h>

#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    long long arr[n];
    for(long long i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    long long k;
    scanf("%lld", &k);
    long long index = -1;
    for(long long i = 0; i < n; i++){
        if(arr[i] == k){
            index = i;
            break;
        }
    }
    printf("%lld", index);
    return 0;
}