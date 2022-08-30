#include<stdio.h>
#include<conio.h>

int main(){
	
	int n, i, j, a=0;
	
	printf("Enter number of rows : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		
		for(j=1; j<=i; j++){
			a=a+1;
			printf("%d", a);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}



