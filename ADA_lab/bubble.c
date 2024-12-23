#include<stdio.h> 
#include<stdlib.h> 
void sort(int a[ ],int n) 
{
	int i,j,temp; 
    for(i=0;i<n-1;i++)
    {
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
		 
    int n,i; 
    printf("enter the total numbers to be sort\n"); 
    scanf("%d",&n); 
    int a[n]; 
    printf("enter the array elements\n"); 
    for(i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("After sorting\n"); 
    for(i=0;i<n;i++)
    {
		printf("%d\n",a[i]);
	}
    return 0;
}
