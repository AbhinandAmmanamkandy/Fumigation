#include<stdio.h>
void main(){

    int i;
    int j;
    int n;

    printf("Enter num: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("* ");
        }
        printf("\n");
    }

}