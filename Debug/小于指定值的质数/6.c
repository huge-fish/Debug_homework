#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d",&c);
    if(c>=2)
    {
        printf("2\n");
    }	 
     for(b = 3;b <= c; b++) { 
     for(a = 2 ; a < b ; a++){
         if(b % a ==0)
         { 
             printf("");
             break;
         }
     }
         if (a >= b){
             printf("%d\n", b);
         }
     }
     return 0;
}
