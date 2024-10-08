#include <stdio.h>
int main() {
	int x,y,z;
	printf("Enter age : ");
	scanf("%d", &x);
	printf("Enter income : ");
	scanf("%d", &y);
	printf("Enter credit score : ");
	scanf("%d", &z);
	((x >= 18) && (y >= 50000) && (z >= 600)) ? printf("you are eligible for loan. \n") : printf("you are not eligible for loan.\n") ;
 return 0;
}