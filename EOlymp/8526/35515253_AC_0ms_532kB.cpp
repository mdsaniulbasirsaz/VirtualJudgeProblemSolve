#include<stdio.h>
int main()
{
  int x;
  scanf("%d",&x);
  if(x>=-100&&x<=100)
  {
      if(x<-4)
      {
          printf("%d\n",x+5);
      }
      else if(x>=-4&&x<=7)
      {
          printf("%d\n",x*(x-3));
      }
      else if(x>7)
      {
          printf("%d\n",x*(x*x+2));
      }
  }
    return 0;
}