#include<stdio.h>

int (search(int *arr,int i,int n,int key))
{
    if(i<n)
    {
        if(arr[i]==key)
        return 1;
        return (arr,i+1,key);
    }
    return 0;
} 
int main()
{
    int i,n,key,arr[10];
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key element");
    scanf("%d",&key);

    if(search(arr,0,n,key))
    printf("Element found %d",(search(arr,0,n,key)));
    else
    printf("Element not found");

}   
