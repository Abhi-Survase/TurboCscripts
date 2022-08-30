#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, dec;
	
	printf("Enter two numbs: ");
	scanf("%d %d", &a, &b);
	
	printf("\nSelect one of the below:\n1.Add\n2.Substract\n3.Multiply\n4.Divide\n: ");
	scanf("%d", &dec);
	
	switch(dec){
		case 1: printf("%d", a+b); break;
		case 2: printf("%d", a-b); break;
		case 3: printf("%d", a*b); break;
		case 4: printf("%d", a/b); break;
		
		default: printf("\nLol try again"); break;
	}
	
	return 0;
}
