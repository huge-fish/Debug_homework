#include<stdio.h>

int main()
{
   int n,i,j;
   int c=0;
   scanf("%d",&n);
   if(n==2)
   {
       printf("2\n");
   }
    else
        printf("2\n");
    {
        for(i=3;i<=n;i=i+1)
        {
            for(j = 2; j < i; j = j + 1)
            {
                if(i % j == 0)
                {
                    c=1;
                    break;
                 }
            }

             if(c==0);
                 printf("%d\n",i);
             c=0;
        }
    }
    return 0;
}
	
