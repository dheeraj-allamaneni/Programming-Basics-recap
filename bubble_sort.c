#include <stdio.h>
#include <stdlib.h>

void main(){
	int i,j,n,temp;
	printf("ENter the size of the Array: ");
	scanf("%d",&n);
	int *A = (int*)malloc(n*sizeof(int));
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
		}
	printf("\n");
	for(i=0;i<n-1;i++){
	//In the next line n-i-1 because for every upper loop the last elements gets sorted so we need to bother only for the below elements
		for(j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
}
	
	printArray(A,n);
	}
	
void printArray(int A[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
}
