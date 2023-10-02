#include<stdio.h>
void main(){
	int n;
	printf("Enter a number : \n");
	scanf("%d",&n);
	(n&1==1)?printf("odd"):printf("even");
	}