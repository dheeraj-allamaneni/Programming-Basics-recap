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
