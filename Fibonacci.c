#include <stdio.h>
#include <stdlib.h>
int F[51];

void main(){
	int n,z,i;
	for(i=0;i<51;i++){
		F[i]=-1;
	}
	printf("Enter which number of fibonacci series you want to find\n");
	scanf("%d",&n);
	z=Fib(n);
	printf("%d",z);
}

int Fib(int a){
//	if(a<=1){
//			return a;
//		}
//	int i,F,F1=0,F2=1;
//	for(i=2;i<=a;i++){
//		F=F1+F2;
//		F1=F2;
//		F2=F;
//		
//	}
//	return F;
	if(a<=1){
	return a;
	}
	if(F[a]!=-1){
		return F[a];
	}
	F[a]=Fib(a-1)+Fib(a-2);
	return F[a];
}
