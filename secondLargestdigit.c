/*
This program is to find the second largest digit in the given input number
I could use sorting algorithm but delibrately done without sorting as per problem statement
*/
#include <stdio.h>

void main(){
	int i,t=0,num,count,largest,secondLargest;
	printf("Enter Number to find out the highest digit in that number(Little silly but yeah its a problem statement: )");
	scanf("%d",&num);
	count=checktheDigitscount(num);
	int A[count],B[count];
	getintoArray(A,num,count);
	largest=A[0];
	for(i=0;i<count;i++){
		if(largest<A[i]){
			largest=A[i];
		}
	}
	for(i=0;i<count;i++){
		if(A[i]!=largest){
			B[t]=A[i];
			t++;
		}
	}
	secondLargest=B[0];
	for(i=0;i<t;i++){
		if(secondLargest<B[i]){
			secondLargest=B[i];
		}
	}
	
	printf("Second Largest digit in given number is %d",secondLargest);
}

int checktheDigitscount(int num){
	int i=0;
	while(num!=0){
		num/=10;
		i++;
	}
	return i;
}

void getintoArray(int A[],int num,int count){
	int i;
	for(i=count-1;i>=0;i--){
		A[i]=num%10;
		num/=10;
	}
}
