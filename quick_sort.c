//THere is a error i am encountering but unable to find where the problem is :(
//if someone could point where the error is i will be thankfull.

#include <stdio.h>
#include <stdlib.h>

void main(){
	int arr[] = {10, 7, 8, 9, 1, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,n-1);
	printArray(arr,0,n-1);
}

void quickSort(int arr[],int low,int high){
	if (low < high){

	int pi=partition(arr,low,high);
	quickSort(arr,low,pi-1);//takes care of lower set of numbers
	quickSort(arr,pi+1,high);//takes care of higher elements above pivot
	}
}

int partition(int arr[],int low,int high){
	int i,j;
	i=(low-1);
	int pivot=arr[high];
	for(j=low;j<=high;j++){
		if(arr[j]<=pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return (i+1);
}

void printArray(int arr[],int low,int high){
	int i;
	for(i=low;i<=high;i++){
		printf("%d ",arr[i]);
	}
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
