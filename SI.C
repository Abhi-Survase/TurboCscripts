#include<stdio.h>
#include<conio.h>

int main(){
	
	float p, n, r, si;
	
	printf("Enter the Principle value: ");
	scanf("%f", &p);
	printf("\nEnter the time period: ");
	scanf("%f", &n);
	printf("\nEnter the rate of interest: ");
	scanf("%f", &r);
	
	si=(p*n*r)/100;
	
	printf("\n\n\tYour simple interest is: %f", si);
	getch();
	
}
