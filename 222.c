#include<stdio.h>

int main(){

	int a,b,c;

	char operater;

	printf("please enter a expression");
	scanf("%d %c %d",&a, &operater, &b);

	switch(operater){

	case '+':
			c = a+b;
			break;
	case '-':
			c = a-b;
			break;
	case '/':
			c = a/b;
			break;
	case '*':
			c = a*b;
			break;
	}

	printf("%d �Դϴ�. \n",c);
	return 0;

}