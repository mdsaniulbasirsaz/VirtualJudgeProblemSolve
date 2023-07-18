#include<stdio.h>
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&n,&m);
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            k++;
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}