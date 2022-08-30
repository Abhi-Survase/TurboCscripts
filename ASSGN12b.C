#include<stdio.h>
#include<conio.h>
int main()
{   
	int i, number, sum = 0;
   	for (i=1; i <= 10; ++i){
    	printf("Enter a number: ");
    	scanf("%d",  &number);
    	
		if(number < 0) { continue; }
   	 		sum += number;
        }
   printf("Sum = %d", sum);
}
