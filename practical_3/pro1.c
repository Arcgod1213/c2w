#include<stdio.h>



int main(){
	int x;
	printf("enter number");
	scanf("%d",&x);
	if ( x > 1 && x < 1000){
		printf("Entered Number is between 1 and 1000");
	}
	else{
		printf("enterd number is not between 1 and 1000");
	}
}
