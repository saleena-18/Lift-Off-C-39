#include<stdio.h>
int main()
{
    int A[50],B[50],C[100],n1,n2,i,k;
    printf("Enter size of 1st array: ");
    scanf("%d",&n1);
    printf("Enter elements in the first array: ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&A[i]);
        C[i]=A[i];
    }
    k=i;
    printf("Enter the size of 2nd array: ");
    scanf("%d",&n2);
    printf("Enter elements in the 2nd array: ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&B[i]);
        C[k]=B[i];
        k++;
    }
    printf("\nThe merged array is:\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",C[i]);
    }
    printf("\nThe merged array in reverse order is:\n");
    for(i=k-1;i>=0;i--)
    {
        printf("%d ",C[i]);
    }
    return 0;
}