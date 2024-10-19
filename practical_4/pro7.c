

#include<stdio.h>


int main(){

	int i;
	int count=0;
	for(i=2;i<=200;i++){
	
		if(i%2==0){
			count++;
		}

	}
	printf("%d\n",count);

}
