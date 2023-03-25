#include<stdio.h>
int main()
{
    int i,j,n,t;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements in the array: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&A[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
        if(A[i]<0)
        {
            if(i!=j)
            {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        j++;
        }
    }
    printf("The resultant array: ");
    for(i=0;i<n;i++)
    {
    printf("%d\t",A[i]);
    }
    return 0;
}