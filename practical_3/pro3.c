

#include<stdio.h>

int main(){
	char ch,a,A,i,I,o,O,u,U,e,E;
	printf("enter character");
	scanf("%c",&ch);
	if ( ch == 97 || ch == 65 || ch == 69 || ch == 102 || ch == 73 || ch == 105 || ch == 79 || ch == 111 || ch == 85 || ch == 117){
		printf("vowel");
	}
	else {
		printf("not vowrl");
	}

}
