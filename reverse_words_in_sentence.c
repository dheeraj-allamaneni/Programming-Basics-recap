/*
reverse the words in sentences

Input:  she is good girl

output: ehs si doog lirg

Input format: 1
			  she is good girl
where 1 is number of sentences you want to run

eg  INput:  2
	Input:	she is good girl
	Output:	ehs si doog lirg
	Input:  I am a good coder
	Output: I ma a doog redoc	
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define IN 1
#define OUT 0

char *get_input()
{
    char a[1001], *b;
    int i, c;
    
    for(i = 0, c = getchar(); c != '\n' && c != EOF; i++, c = getchar())
        a[i] = c;
    //a[i] = 'x';
    a[i] = '\0';
    //printf("%c",a[i]);
    b = malloc(sizeof(char) * (strlen(a) + 1));
    strcpy(b, a);
    return b;
}

char *reverse(char *a)
{
    int status = OUT,i=0;
    char *rem,*temp,temp1;
    rem=a;
    temp=a;
    
    for(status = OUT; *a; a++)
    {
        if(*a == ' ' || *a == '	'){
            rem=a-1;
            while(temp<rem){
            	temp1=*temp;
            	*temp=*rem;
            	*rem=temp1;
            	temp++;
            	rem--;
			}
            temp=a+1;
			}
    }
    if(*a == '\0'){
    	rem=a-1;
    	while(temp<rem){
            	temp1=*temp;
            	*temp=*rem;
            	*rem=temp1;
            	temp++;
            	rem--;
			}
    	
	}
}

int main()
{
    int t;
    char *a,*c;
    
    scanf("%d\n", &t);
    while(t--)
    {
        a = get_input();
        //printf("%s\n", a);
        reverse(a);
        c = printf("%s\n", a);
        free(a);
    }
    
    return 0;
}

