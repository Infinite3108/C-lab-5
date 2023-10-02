#include<stdio.h>
void main(){
	char n;
	printf("Enter a alphabet : \n");
	scanf("%c",&n);
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
		printf("Alphabet is a vowel.");
		}
	else {
	printf("Alphabet is a consolent.");
		}
	}