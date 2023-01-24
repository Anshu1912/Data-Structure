#include<stdio.h>

void printfibonacci(int n)
{
   static int a=0,b=1,c;
    if(n>0)
             {
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
        printfibonacci(  n-1);

    }
}
int main()
{
    int n;
    printf("enter the no. of elements - ");
    scanf("%d",&n);
    printf("fibonacci series - ");
    printf("%d %d",0,1);
    printfibonacci( n-2); //n-2 because 2 no. ae all ready teken
    getch();
     return 0;
}









