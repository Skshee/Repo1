#include<stdio.h>

int main()
{
    int n,i,j,pos,small,temp;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    //Sorting starts from here
    for(i=0;i<n-1;i++)//Pass
    {
        pos=i;
        small=arr[i];
        for(j=i+1;j<n;j++)
        {
            if(small>arr[j])
            {
                pos=j;
                small=arr[j];
            }
        }
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
    printf("Sorted array is:");
     for(i=0;i<n;i++)
     {
         printf("%d\t",arr[i]);
     }
}
