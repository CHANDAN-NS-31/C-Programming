#include<stdio.h>
void linearsearch(int arr[],int size,int target,int result[],int* resultsize)
{   *resultsize=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            result[*resultsize]=i;
            (*resultsize)++;
        }
    }
}
int main()
{
    int size,target,i;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target value to search");
    scanf("%d",&target);
    int result[size];
    int resultsize;
    linearsearch(arr,size,target,result,&resultsize);
    if(resultsize>0)
    {
        printf("matching the indices for target %d \n",target);
        for(i=0;i<resultsize;i++)
        printf("index %d",result[i]);
    
    printf("\n");}
    else{
        printf("no matching the indices for target %d \n",target);
    }
    return 0;
}


