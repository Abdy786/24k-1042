/*
1. Write a C program to generate the following pattern:
1
1 2
1 2 3
1 2 3 4 
*/

#include<stdio.h>
int main(){
    int rows;
     printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=i;j++){
            printf("%d ",j);
        }printf("\n");
    }
    return 0;
}