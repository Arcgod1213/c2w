


#include<stdio.h>


int main(){

	int u;
	printf("Enter Units Used");
	scanf("%d",&u);
	if(u <= 100){
		printf("Units Used= %d\n",u*5,"rs");
	}

	else if(u <= 200){
		printf("Units Used= %d\n",u*7,"rs");
	}

	else {
		printf("Units Used= %d\n",u*10,"rs");
	}


	


}
