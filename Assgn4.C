
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,factn=1,factr=1,factnmr=1,i,npr,ncr;
//	clrscr();

	printf("Enter n and r : \n");
	scanf("%d%d",&n,&r);

	for(i=1;i<=n;++i) factn=factn*i;
	for(i=1;i<=r;++i) factr=factr*i;
	for(i=1;i<=n-r;++i) factnmr=factnmr*i;
	npr=factn/factnmr;
	ncr=npr/factr;
	printf("Permutation value : %d \n",npr);
	printf("Combination Value : %d \n",ncr);
	getch();
	return 0;
}

/*
#include <stdio.h>
#include <conio.h>
void main() {
	int n , r, ncr( int , int);
	long npr( int , int);
	long double fact( int);
	clrscr();
	printf(" Enter value of n & r \n");
	scanf("%d %d",&n , &r);
	if( n>= r) {
		printf( " %dC%d is %d\n", n,r,ncr( n , r));
		printf(" %dP%d  is %ld", n,r,npr( n, r));
	} else {
		printf("WRONG INPUT?? enter the correct input\n");
	}
	getch();
}
long double fact( int p) {
	long double facts = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  facts = facts * i;
	return( facts);
}
int ncr ( int n, int r) {
	return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}
long npr( int n , int r) {
	return( fact( n) / fact( n- r));
}
*/
