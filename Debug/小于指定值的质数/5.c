#include <stdio.h>

int main(){
    int i,j,n;
    scanf("%d",&n);
	printf("2\n");
    for(i=3;i<=n;i++)
    {
        for(j=2;j<i;j++){

		
            if(i%j==0)
                break;
		}

            if(j==i) {
                printf("%d\n",j);
            }
     }
    return 0;
}
