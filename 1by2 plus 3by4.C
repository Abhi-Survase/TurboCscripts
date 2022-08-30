#include<stdio.h>
    
int main()
{
	int i, j, n;
	float a=1.0, sum=0.0;
	
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum= a/(a+1)+sum;
		a=a+2;
		printf("%f\n", sum);
	}
	
	return 0;
}
