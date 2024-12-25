//call by value
#include<stdio.h>
void fun(int,int);//declare the fun
void main()
{   //calling
    int x=5,y=6;
    fun(x,y);//arguments or actual parameters
    printf("inside main(calling function)x=%d y=%d\n",x,y);
}
void fun(int x,int y)//locaal var int x and int y
{   //defining
    x=9;
    y=5;
    printf("inside fun(Called function)x=%d y=%d\n",x,y);

}
// In this we have declare the fun frist,we don't want to declaree the fun if defining fun if we write frist