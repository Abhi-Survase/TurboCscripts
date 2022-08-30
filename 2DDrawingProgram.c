#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define ESC 0x1b
void drcir(int,int,int);
void drarc(int,int,int);
void main()
{
int a,b,c,d,e,f,curcolor=3;
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
verybegin:
sound(333);
delay(100);
sound(222);
delay(100);
sound(250);
delay(100);
sound(33);
delay(100);
sound(111);
delay(100);
sound(222);
delay(100);
sound(333);
delay(100);
sound(3333);
delay(100);
nosound();
gotoxy(25,1);
printf("\n2d Drawing");
gotoxy(18,5);
printf("\nA Simple Program");
gotoxy(18,6);
printf("\nThis is used for drawing circles,arcs,rectangle,");
gotoxy(18,7);
printf("\nlines and many more...");
printf("\nThe Controls For The Two-Dimensional Drawing\n");
printf("			N(Up Arrow)     = North\n");
printf("			S(Down Arrow)   = South\n");
printf("			E(Right Arrow)  = East\n");
printf("			W(Left Arrow)   = West\n");
printf("			F(Page Up)      = North-East\n");
printf("			X(Home)         = North-West\n");
printf("			D(Page Down)    = South-East\n");
printf("			Z(End)          = South-West\n");
printf("			J               = Current Position\n");
printf("			B               = Help(This Screen)\n");
printf("			R(Insert)       = Reset\n");
printf("			T               = Color Change(0-9)\n");
printf("			C               = Circle\n");
printf("			A               = Arc\n");
printf("			ESC             = Quit\n");
getch();
begin:
curcolor=3;
a = getmaxx() / 2;
b = getmaxy() / 2;
cleardevice();
start:
putpixel(a,b,curcolor);
c=getch();
sound(100);
delay(20);
nosound();
if(c==ESC)
   {
   goto end;
   }
switch(c)
   {
   case 'N':
   case 'n':
   case 'H':
   case 'h':
      c=a;
      d=b-1;
      a=c;
      b=d;
      goto start;
   case 'S':
   case 's':
   case 'P':
   case 'p':
      c=a;
      d=b+1;
      a=c;
      b=d;
      goto start;
   case 'E':
   case 'e':
   case 'M':
   case 'm':
      c=a+1;
      d=b;
      a=c;
      b=d;
      goto start;
   case 'W':
   case 'w':
   case 'K':
   case 'k':
      c=a-1;
      d=b;
      a=c;
      b=d;
      goto start;
   case 'D':
   case 'd':
   case 'Q':
   case 'q':
      c=a+1;
      d=b+1;
      a=c;
      b=d;
      goto start;
   case 'X':
   case 'x':
   case 'G':
   case 'g':
      c=a-1;
      d=b-1;
      a=c;
      b=d;
      goto start;
   case 'Z':
   case 'z':
   case 'O':
   case 'o':
      c=a-1;
      d=b+1;
      a=c;
      b=d;
      goto start;
   case 'F':
   case 'f':
   case 'I':
   case 'i':
      c=a+1;
      d=b-1;
      a=c;
      b=d;
      goto start;
   case 'R':
   case 'r':
      goto begin;
   case 'J':
   case 'j':
      f=curcolor+1;
      putpixel(a,b,f);
      gotoxy(1,2);
      printf("X=%d,Y=%d",a,b);
      sound(100);
      getch();
      gotoxy(1,2);
      printf("                          ");
      nosound();
      goto start;
   case 'C':
   case 'c':
      drcir(a,b,curcolor);
      goto start;
   case 'A':
   case 'a':
      drarc(a,b,curcolor);
      goto start;
   case 'T':
   case 't':
      gotoxy(1,2);
      printf("Enter color code:");
      e=getche();
      curcolor=e;
      setcolor(curcolor);
      gotoxy(1,2);
      printf("                                  ");
      goto start;
   case 'B':
   case 'b':
      cleardevice();
      goto verybegin;
   default:
      goto start;
   }
end:
cleardevice();
closegraph();
}
void drcir(int x,int y,int ccolor)
{
   int r;
   gotoxy(1,2);
   printf("Enter Radius of Circle:");
   scanf("%d",&r);
   gotoxy(1,2);
   printf("                                               ");
   setcolor(ccolor);
   circle(x,y,r);
}
void drarc(int x,int y,int ccolor)
{
   int r,sa,ea;
   gotoxy(1,2);
   printf("Enter Radius:");
   scanf("%d",&r);
   gotoxy(1,2);
   printf("                                 ");
   gotoxy(1,2);
   printf("Enter Starting Angle:");
   scanf("%d",&sa);
   gotoxy(1,2);
   printf("                                 ");
   gotoxy(1,2);
   printf("Enter Ending Angle:");
   scanf("%d",&ea);
   gotoxy(1,2);
   printf("                                 ");
   setcolor(ccolor);
   arc(x,y,sa,ea,r);
}