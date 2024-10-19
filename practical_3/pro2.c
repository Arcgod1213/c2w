 



#include<stdio.h>


int main(){

	int year;
	printf("enter year");
	scanf("%d",&year);
	if ( year % 400 == 0){
		printf("leap");
	}
	else{
		printf("not leap");
	}

}
