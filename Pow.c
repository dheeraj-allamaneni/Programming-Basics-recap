#include <stdio.h>

void main(){
	int x,n,y;
	printf("Enter the values x,n to findout x^n");
	scanf("%d %d",&x,&n);
	y=Pow(x,n);
	printf("The vlaue of power is %d",y);
}

int Pow(int x, int n){
	int y;
	if(n==0) return 1;
	else if(n%2==0){
		y=Pow(x,n/2);
		return y*y;
	}
	else{
		return x*Pow(x,n-1);
	}
}
