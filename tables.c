#include<stdio.h>
#include<conio.h>
//#include<math.h>

int main(){
	
	int n, i, a;
	
	printf("Enter the desired number: ");
	scanf("%d", &n);
	
	for(i=1; i<26; ++i){
		a= n*i;
		printf("\n\t%d x %d = %d", n, i, a);
	}
	
	getch();
	return 0;
}
