#include <stdio.h>
int main() {
	int x,y,z;
	printf("Enter percentage of attendance: ");
	scanf("%d", &x);
	printf("Enter assignments total marks : ");
	scanf("%d", &y);
	printf("Enter exams marks : ");
	scanf("%d", &z);
	((x >= 80) && (y >= 80) && (z >= 80)) ? printf("A grade\n") :
	((x >= 70) && (y >= 70) && (z >= 70)) ? printf("B grade\n") :
	((x >= 60) && (y >= 60) && (z >= 60)) ? printf("C grade\n") :
	((x >= 50) && (y >= 50) && (z >= 50)) ? printf("D grade\n") : printf("Failed\n") ;
 return 0;
}