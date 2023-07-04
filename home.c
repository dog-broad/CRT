#include <stdio.h>

int binarySearch(int arr[], int n, int key){
    int low = 0, high = n-1;
    /*
    If the key is less than the first element of the array
    or greater than the last element of the array, 
    the function returns 0, indicating that 
    the key is not present in the array.
    */
    if(key < arr[low] || key > arr[high])
        return 0;
    while(low <= high){
        int mid = (low+high) >> 1;
        if(arr[mid] == key){
            return 1;
        }
        else if(arr[mid] < key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[100];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    scanf("%d", &key);
    printf("%d", binarySearch(arr, n, key));
}