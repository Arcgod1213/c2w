


#include<stdio.h>


int main(){

	int i;
	int count=0;
	for(i=1;i<=100;i++){
	
		if(i%2!=0){
			printf("%d\n",i);
			count++;
		}
		if(count>10){
			break;
		}

	}

	

}
