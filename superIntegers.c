/*
write a code to program to print super integer eg two inputs 12453 and 45 is a super integer
whereas 54 is not where as 12, 23, 13, are super integers and 21 32 31 are not

*/
#include <stdio.h>

void main(){
	int i,x,temp,count=0,z,j,t=0,resp,quer,p;
	printf("Mode 1: Display all the possible SUPER INTEGERS for a given Number \nMode 2: Check whether a particular number is a SUPER INTEGER or not for a given Number \n");
	printf("Enter 1 for Mode1 or Enter 2 for Mode2: ");
	scanf("%d",&resp);
	printf("\nENter the Number or sequenced Number to find the possible SUPER INTEGERS: ");
	scanf("%d",&x);
	printf("\n");
	count=getInputdigitscount(x);
	temp=x;
	z=(((count-1)*count)/2);
	//printf("%d \n",z);
	int A[count],B[z];
	for(i=count-1;i>=0;i--){
		A[i]=temp%10;
		temp/=10;
	}
	//printArray(A,count);
	for(i=0,t=0;i<count-1 && t<z;i++){
		for(j=i+1;j<count;j++,t++){
			B[t]=concatenate(A[i],A[j]);
		}
	}
	if(resp==1){
	printArray(B,z);
	}
	else if(resp==2){
		printf("Enter the query Number to check whether SUPER INTEGER or not: ");
		scanf("%d",&quer);
		p=checkSuperinteger(quer,B,z);
		printf("\nCongrats the query check of %d is done\n",quer);
		if(p==0){
			printf("Yes! As you might have guessed %d is SUPER INTEGER Hurreyyy !\n",quer);
		}
		else if(p==1){
			printf("Yeah as Doubted by you %d is not a SUPER INTEGER\n",quer);
		}
	}
}

int checkSuperinteger(int x,int y[],int z){
	int i;
	for(i=0;i<z;i++){
		if(x == y[i]){
			return 0;
		}
	}
	return 1;
}

int concatenate(int x, int y) {
    int pow = 10;
    while(y >= pow)
        pow *= 10;
        //printf("%d %d %d \n",x,y,x * pow + y);
    return x * pow + y;        
}

void printArray(int A[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}

int getInputdigitscount(int temp){
	int count=0;
	while(temp!=0){
		temp/=10;
		count++;
	}
	return count;
}
