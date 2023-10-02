#include<stdio.h>
void main(){
	float a,b,c;
	printf("Enter three numbers : \n");
	scanf("%f %f %f",&a,&b,&c);
	if(a>=b && a>=c){
		printf("%.2f is largest number among them.",a);
		}
	else if(b>=a && b>=c){
	printf("%.2f is largest number among them.",b);
		}
	else {
	printf("%.2f is largest number among them.",c);
		}
	}