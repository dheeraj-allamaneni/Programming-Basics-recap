#include <stdio.h>
#include <stdlib.h>

void main(){
	int x,m,n,y;
	printf("Enter the values of x,n,m to calc x^n Mod M");
	scanf("%d %d %d", &x, &n, &m);
	y=Mod(x,n,m);
	printf("\nSolution for given problem is %d",y);
	
}

int Mod(int x, int n, int m){
	int y;
	if(n==0){
		return 1;
	}
	else if(n%2==0){
		y = Mod(x,n/2,m);
		return (y*y)%m;
	}
	else {
		return ((x%m)*Mod(x,n-1,m))%m;
	}
}
