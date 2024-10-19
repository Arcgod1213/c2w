


#include<stdio.h>

int main(){
	
	char c,s;
	printf("Enter your Choice [y/n]=");
	scanf("%c",&c);
	getchar();
	printf("Old student/New student [Y/N]=");
	scanf("%c",&s);

	if (c =='y'){
		if (s=='Y'){
			printf("Fees=%d\n",5000);
		}
		else {
			printf("Fees=%d\n",10000);
		}
	}
	else {
		printf("Okay Please Leave ....... ");
	}



}

