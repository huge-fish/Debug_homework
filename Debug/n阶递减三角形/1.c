#include <stdio.h>
int main() {
    int n;
    int i,j;
    scanf("%d",&n);
    for(i = n;i >= 1;i--){ //mins
        for(j = i; j >= 1;j--){ //loop less than required
            if(j > 1){
                printf("%d",i);
                printf(" ");
            }
            else{
                 printf("%d\n",i);
            }
        }
    }
    return 0;
}
