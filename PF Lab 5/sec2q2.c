#include<stdio.h>
int main(){
    int citizen,age;
    printf("are you citizen; 1 for yes, 0 for no");
    scanf("%d",&citizen);
    if (citizen){
        printf("enter your age");
        scanf("%d",&age);
        if(age>=18){
            printf("you are eligible");

        }
    }
    else{
        printf("you are not eligile");
        
    }
    return 0;
}