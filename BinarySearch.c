#include<stdio.h>
#include<stdlib.h>

void validatesortedarray(int arr[],int size)
{
    for (int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            //return 0;
            printf("Array not sorted");
        }
    }
    //return 1;
printf("Array sorted\n");
}

void binarysearch(int arr[],int size,int target)
{
    int low=0;
    int high=size-1;
    while (low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)
        {
            //return mid;
            printf("key element found %d",target);
            exit(0);
        }
        else if (arr[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            low=mid-1;
        }
    }
    //return -1;
    printf("Target value not found");
}
int main()
{
    int n,target;
    printf("\nEnter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target element");
    scanf("%d",&target);
    validatesortedarray(arr,n);
    
    binarysearch(arr,n,target);


    return 0;

}
