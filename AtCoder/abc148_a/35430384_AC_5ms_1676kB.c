#include<stdio.h>
int main()
{
    int choice1=1,choice2=2,choice3=3;
    int A,B;
    scanf("%d%d",&A,&B);
    if(A==1&&B==2||A==2&&B==1)
    {
        printf("%d\n",choice3);
    }
    else if(A==2&&B==3||A==3&&B==2)
    {
        printf("%d\n",choice1);
    }
    else if(A==1&&B==3||A==3&&B==1)
    {
        printf("%d\n",choice2);
    }
    return 0;
}