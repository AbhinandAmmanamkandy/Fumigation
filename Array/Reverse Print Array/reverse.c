#include<stdio.h>
void main(){

    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int i;
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter %dth value: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    for(i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

}