#include<stdio.h>

int main()
{
  int no,factorial;
  int fact (int no);
  printf("Enter a number:");
  scanf("%d",&no);
  factorial=fact(no);
  printf("Factorial=%d",factorial);
  return 0;
}

int fact (int no) { 
  if(no==1) 
    return 1; 
  else
    return (no * fact (no-1));
}
