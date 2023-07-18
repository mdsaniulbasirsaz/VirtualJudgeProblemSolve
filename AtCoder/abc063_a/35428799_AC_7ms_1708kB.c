#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    if(A>=1&&B<=9)
    {
        if(A+B<10)
        {
            printf("%d\n",A+B);
        }
        else
        {
            printf("error\n");
        }
    }
    return 0;
}