#include<stdio.h>
#include<conio.h>
int main(){

	int a=5;
	//clrscr();

	printf("\n\nOG vlaue: %d\n\nThese is how these things work\n\n", a);
	printf(" %d\n %d\n %d\n %d\n %d\n %d\n\n",a, (a=a++), (a=++a), (a=a--), (a=--a), a );
	printf(" %d\n %d\n %d\n %d\n %d\n %d\n",a, a++, ++a, a--, --a, a);

	getch();
	return 0;
}
