#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	
	int a, b, c;
	float d, x1, x2;
	
	printf("Enter the values of coefficients in format 'ax^2+bx+c=0' : ");
	scanf("%d %d %d", &a, &b, &c);
	
	d = (b*b)-4*a*c;
	
	x1= (-b+sqrt(d))/(2*a); //sqrt()
	x2= (-b-sqrt(d))/(2*a);
	
	printf("\n\nRoot 1 : %f", x1);
	printf("\nRoot 2 : %f", x2);
	
	getch();
	 return 0;
}
