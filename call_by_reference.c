//call by reference
#include<stdio.h>
void fun(int*,int*);//declare the fun
void main()
{
    int x=7,y=6;
    fun(&x,&y);
    printf(" inside main(calling function)\n");
    printf("x=%d y=%d",x,y);
}
void fun(int *x,int *y)
{
    *x=6;
    *y=5;
    printf(" inside fun(Called function)\n");
    printf("x=%d y=%d",*x,*y);

}