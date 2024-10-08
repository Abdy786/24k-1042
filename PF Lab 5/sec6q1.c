#include <stdio.h>
int main() {
	int x,y,z;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &x,&y,&z);
	
	if (x>=y){
		if (x>z){
			printf("%d is greatest",x);
		
		}
		else if (z>=x){
			printf("%d is greatest",z);
			}
}
	else if (y>=x){
		if (y>z){
			printf("%d is greatest",y);
		}
		else if (z>=y){
			printf("%d is greatest",z);
			}
}
	
	return 0;
	}