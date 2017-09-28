/*

Modular Exponentiation (Power in Modular Arithmetic)

Given three numbers x, n and m, compute (x^n) % m.

Examples

Input:  x = 2, y = 3, p = 5
Output: 3
Explanation: 2^3 % 5 = 8 % 5 = 3.

Input:  x = 2, y = 5, p = 13
Output: 6
Explanation: 2^5 % 13 = 32 % 13 = 6.
 */

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
