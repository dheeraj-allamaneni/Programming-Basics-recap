#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, *A, half;
	printf("Enter the size of the Array-Even please\n");
	scanf("%d",&n);
	half = n/2;
	A = (int*)malloc(n*sizeof(int));
	printf("Enter the values of array\n");
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	
//	for(i=0;i<half;i++){
//		printf("%d ",A[i]);
//	}
//	printf("Break due\n");
//	for(i=half;i<n;i++){
//		printf("%d ",A[i]);
//	}
	free(A);
	return 0;
}
