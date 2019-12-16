#include<stdio.h>
void selectionsort(int [],int);
void main()
{
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void selectionsort(int arr[],int n)
{
    int i,j,min,t;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        t=arr[i];
        arr[i]=arr[min];
        arr[min]=t; 
    }
}
