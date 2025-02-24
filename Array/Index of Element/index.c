#include<stdio.h>

int position(int arr[], int n, int element){

    int i;
    for(i=0; i<n; i++){
        if(arr[i] == element){
            return i;
        }
    }

    return -1;

}

void main(){
    int i;
    
    int n;
    printf("Enter arary size: ");
    scanf("%d", &n);

    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter %dth element: ", i+1);
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter element to search: ");
    scanf("%d", &element);

    int pos = position(arr, n, element);
    if(pos!=-1){
        printf("Element %d found at position %d", element, pos);
    }else{
        printf("Element not found!");
    }
    
}