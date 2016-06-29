#include<stdio.h>
#include<conio.h>
void main()
{
int h1,h2,m1,m2,a,b,ans;
printf("Enter first time :\n");
scanf("%d\n%d",&h1,&m1);
a=(h1*60)+m1;
printf("Enter second time :\n");
scanf("%d\n%d",&h2,&m2);
b=(h2*60)+m2;
ans=(b-a);
printf("mins between two times =%d\n",ans);
getch();
}
