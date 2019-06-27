#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d",&a);
    if(a>=2)
        printf("2\n")
    for(b = 2 ; b <= a ; b++){
        for(c = 2 ; c < b ; c++){
           if(b % c == 0) {
              break; 
           }else{
                if(c>=b-1){
                    printf("%d\n",b);
                    break;
                 }
           }
        }
        
     }
    return 0;
 }
