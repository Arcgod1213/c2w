


#include<stdio.h>


int main(){

	int a,b,c;
	printf("Enter First Value A=");
	scanf("%d",&a);

	printf("Enter Second Value B=");
	scanf("%d",&b);

	printf("Enter Third Value C=");
	scanf("%d",&c);
	
	if (a*a + b*b ==c*c){
		printf("Its A Pythagorean Triplet");
	}
	
	else {
		printf("Its A Not Pythagorean Triplet");
	}
}
