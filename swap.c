#include<stdio.h>
void main(){
	int a,b,c;
	//with temp var
	printf("Enter a number to swap:\n");
	scanf("%d %d",&a,&b);
	c=a;
    a=b;
    b=c;
    printf("Swaped numbers are : %d %d\n",a,b);
    //without temp var
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Given numbers were : %d %d\n",a,b);
	}