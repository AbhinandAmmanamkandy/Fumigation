#include<stdio.h>

void sortElements(int arr[], int n){
    int i;
    int j;
    int temp;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[j] > arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void main(){

    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int i;
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    sortElements(arr, n);

    printf("Sorted Array: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

}