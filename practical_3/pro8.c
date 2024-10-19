


#include<stdio.h>


int main(){

	float p;

	printf("Enter Percentage=");
	scanf("%f",&p);
	
	if (p >=75.00){
		printf("Passed With Distinction\n");
		
	}

	
	else if (p < 75.00 && p >=55.00){
		printf("Passed With First Class\n");
		
	}

	else if (p < 55.00 && p >=50.00){
		printf("Passed With Second Class\n");
		
	}
	
	else{
		printf("Pass\n");
	}
}
