#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    if(1<=A<=20&&1<=B<=20)
    {
        if(A<10&&B<10)
        {
            printf("%d\n",A*B);
        }
        else 
        {
            printf("-1");
        }
    }
    return 0;
}