// Binary search is efficient for

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int low,mid,high,a[10],n,i,key;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("Enter the values: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: \n");
    scanf("%d",&key);
    low=0, high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("%d found at location %d",key,mid+1);
            exit(0);
        }
        else
            {
                if(key>a[mid])
                    low=mid+1;
                else
                    high=mid-1;
                    
            }
        
    }
    printf("%d is not found", key);


    return 0;
}