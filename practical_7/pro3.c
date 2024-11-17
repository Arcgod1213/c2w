#include<stdio.h>


int main(){
		

	int  row;
	printf("Enter Row");
	scanf("%d",&row);
	int z=1;
	for(int i = 1; i <= row;i++){
		for(int j = 1;j <= row;j++){
				
			printf("%d",z);
			z++;

		
		}
		printf("\n");
	}

}



