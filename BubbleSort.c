#include<stdio.h>
int main(){
	int a[50],n,temp,i,j;
	
	printf("Enter the array size\n");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);


for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1-i;j++){
		if(a[j]>a[j+1]){
			//swap
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
  printf("sorted Array is\n");
  for(i=0;i<n;i++){
  	printf("%d\t",a[i]);
  }
  return 0;
}
