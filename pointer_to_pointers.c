#include<stdio.h>

void main()
{
int a=9;
int *p=&a;
int **q=&p;
int ***r=&q;

*p=10;
**q=12;
***r=14;

printf("value of  a =%d\n",a);
printf("value of  a =%d\n",*p);
printf("value of p+1 a =%d\n",p+1);
printf("value of p+2 a =%d\n",p+2);
printf("value of p+3 a =%d\n",p+3);
printf("value of &a a =%d\n",&a);
printf("value of  a =%d\n",*(p+1));
printf("value of  a =%d\n",*(p+2));
printf("value of  a =%d\n",*(p+3));
printf("value of  a =%d\n",*(*q));
printf("value of  a =%d\n",*(*(*r)));
printf("address of q=%x\n%x",r,&q);
printf("address of p=%x\n%x",q,&p);

return 0;
}