#include<stdio.h>
#include<conio.h>
#include<math.h>


void cube(long g, long c, long d, long e, long f, long a)
{
    while (c!=0)
    {
        d=d*10;
        f=c%10;
        d=d+f;

        e=e+(pow(f, 3));
        c=c/10;
        ;
    }
    /*
    }

    void printing()
    {
    */
    //  printf("Reverse Number is : %ld\n",d);

    if(a==e)
    {
        printf("Avogardo Number is %ld\n", g);
    }
    /* else
     {

         printf("Not Avogardo Number\n");
     }

    */
}

int main()
{
    long a=1,b,c, d=0,e=0, f,g=1;
    //printf("Enter the number :\n");
//scanf("%ld",&a);
    for(b=1; b<=10000; b++)
    {   c=a;
        cube(g,c,d,e,f,a);
        a++;
        g++;
        //  ptinting();
    }
}

