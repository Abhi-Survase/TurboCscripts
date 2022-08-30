#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{	int no1,no2,choice;
	float result;
	
	do
	{
		printf("\nEnter two numbers:");
		scanf("%d %d",&no1,&no2);
		printf("\n\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulus\n6.Exit\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	case  1:result=no1+no2;
			printf("Sum= %f",result);break;

			case  2:result=no1-no2;
			printf("Difference= %f",result);break;

			case  3:result=no1*no2;
			printf("Product= %f",result);	break;

			case  4:result=no1/no2;
			printf("Quotient= %f",result);break;

			case  5:result=no1%no2;
			printf("Remainder= %f",result);break;
			
			case  6: exit(0);
		}
	}while(choice!=6);

	getch(); 
	return 0;
}
