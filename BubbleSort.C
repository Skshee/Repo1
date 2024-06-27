//This is a program that executes Bubble Sort.

#include<stdio.h>

int main()
{
    int n,i,j,temp;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    //Sorting starts from here
    for(i=0;i<n;i++)//pass
    {
        for(j=0;j<n-i-1;j++)//Remember n-i-1
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
