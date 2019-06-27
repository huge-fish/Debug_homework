#include <stdio.h>

int main(){
    int n,i,j;
    //printf("Please enter range:");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        for(j = 2;j <= i; j++){
            if(i % j == 0){
                break;
            }
        }
        if(j == i || i == 2){
            printf("%d\n", i);
        }
    }
	
    return 0;
}
