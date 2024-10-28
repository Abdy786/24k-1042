

#include<stdio.h>
int main(){
    int n,i,j,odd;
    printf("enter the number of rows to print the pattern of odd numbers\n");
    scanf("%d",&n);
    printf("enter the number of rows to print the pattern of odd numbers\n if you put a small number, there will be negative number in the end\n");
    scanf("%d",&odd);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(odd%2==0 && odd>0){
                odd--;
            }
            printf("%3d",odd);
            odd--;
            }
        printf("\n");
    }

    return 0;
}