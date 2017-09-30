/*
Input for (Enter the size of array: ): 5
Input for (Enter the array elements please: ): 1 2 3 4 5(press enter) OR 1(enter) 2(enter).....upto 5(enter)
Output: 5 4 3 2 1
*/
#include <stdio.h>
#include <stdlib.h>

void main(){
	int n;
	//int arr[]={1,2,3,4,5,6};
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	printf("Enter the array elements please: ");
	scanArray(arr,n);
	//printArray(arr,n);
	reverseArray(arr,0,n-1);
	printArray(arr,n);
	free(arr);
}

void scanArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
}

void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverseArray(int arr[],int start,int end){
	int temp;
	while(start<end){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
