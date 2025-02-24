#include<stdio.h>
void main(){

    int i;

    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    for(i=0; i<n; i++){
        printf("Enter %dth value: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum: %d", sum);

}