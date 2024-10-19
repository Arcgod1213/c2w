


#include<stdio.h>


int main(){
	
	float p;
	printf("Enter Percentage=");
	scanf("%f",&p);

	if (p > 85.00){
		printf("Medical\n");
	}

	if (p <=  85.00 && p > 75.00){
		printf("Engineering \n");
	}

	else {
		printf("pharmacy and bach in science\n");
	}

}
