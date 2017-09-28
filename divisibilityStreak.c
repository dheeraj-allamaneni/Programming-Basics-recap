/*
n=13:
13 is divisible by 1 
14 is divisible by 2 
15 is divisible by 3 
16 is divisible by 4 
17 is not divisible by 5

The Divisibilty Streak of 13 is 4

n=120:
120 is divisible by 1 
121 is not divisible by 2 

The Divisibilty Streak of 120 is 1
Test Cases:

n      DS
2      1
3      2
4      1
5      2
6      1
7      3
8      1
9      2
10     1
2521   10
*/


#include <stdio.h>

void main(){
	int n,y;
	printf("Enter the value to X to find Divisibility Streak\n");
	scanf("%d",&n);
	y=divisibilityStreak(n);
	printf("Divisibility streak of %d is %d",n,y);
}

int divisibilityStreak(int n){
	int i=0,x=1,y=0;
	while(i==0){
		if(n%x==0){
			y++;
			n++;
			x++;
		}
		else{
			i=1;
		}
	}
	return y;
}
