#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{	int n,m,sum=0;
	//clrscr();
	printf("\n\nEnter integer number :\n");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
	sum=sum+pow(n%10,3);
	n=n/10;
	}
	if(sum==m) printf("Armstrong Number: %d\n",m);
	else printf("Not an Armstrong Number: %d\n",m);
	getch();
	
	return 0;
}

