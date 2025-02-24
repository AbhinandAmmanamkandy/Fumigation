#include<stdio.h>
void main(){

    int n;
    printf("Enter num: ");
    scanf("%d", &n);

    int i;
    int j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(
                (i == j) ||
                (i+j == n+1)
            ){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

}