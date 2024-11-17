#include<stdio.h>

void main(){
	

	int row;
	printf("Enter Row");
	scanf("%d",&row);
	for(int i = 1; i<= row;i++){
		char ch='D';
		for(int j = 1;j <= row;j++){
				
			printf("%c ",ch);
			ch--;

		
		}
		printf("\n");
	}

}


