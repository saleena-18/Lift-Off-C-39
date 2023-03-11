#include<stdio.h>
int main()
{
    int ch,a,b;
    int sum,sub,mul,div,rem;
    printf("1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-Remainder\n");
    printf("Enter 2 numbers ");
    scanf("%d %d",&a,&b);
    printf("Enter your choice ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:sum=a+b;
               printf("Sum=%d",sum);
               break;
        case 2:sub=a-b;
               printf("Subtraction=%d",sub);
               break;
        case 3:mul=a*b;
               printf("Multiplication=%d",mul);
               break;
        case 4:div=a/b;
               printf("Division=%d",div);
               break;
        case 5:rem=a%b;
               printf("Remainder=%d",rem);
               break;
        default:printf("Invalid Option");
                break;                                     
               
    }
    return 0;
}