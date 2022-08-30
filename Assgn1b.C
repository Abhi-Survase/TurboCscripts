#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b;

	printf("\n\nEnter two numbers : \n");
	scanf("%d%d",&a,&b);
	printf("Before swapping......\n");
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping......\n");
	printf("a= %d\n",a);
	printf("b= %d\n",b);
return 0;
}
