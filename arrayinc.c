#include<stdio.h>

int main(){
	
	int i=0, n, c, a[6]={1,2,3,4,5,6};
	
	
	printf("Enter the no. of elements to be shown: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}

	printf("\nEnter the no. of elements to enter: ");
	scanf("%d", &c);

	int b[c], z, x=0, j=1;
	z=c;
	
	for(x=0;x<z;x++){
		printf("Enter the values: ");
		scanf("%d",&b[j]);
		j=j+1;
	}
	
	for(i=1;i<=z;i++){
		printf("\n%d",b[i]);
	}
	
	return 0;
}
