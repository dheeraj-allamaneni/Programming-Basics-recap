#include <stdio.h>
#include <stdlib.h>

void main(){
	int n,x;
	printf("Please enter the value for which you want to calc Factorial: ");
	scanf("%d",&n);
	printf("\nStarting calculating F(%d)\n",n);
	x=Factorial(n);
	printf("F(%d) is %d",n,x);
}

int Factorial(int a){
	if(a==0){
		return 1;
	}
	
	return a*Factorial(a-1);
}
