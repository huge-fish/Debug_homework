#include <stdio.h>

int main() {
    int a,b,d;
    int c=0;
    scanf("%d",&a);
    for(d=2;d<=a;d+=1){
        for(b=2;b<d;b+=1){
            if(d % b==0){
                c += 1;
            }
        }
            if(c == 0 || d == 2){
                printf("%d\n", d);
        }
        c=0;
    }
   
        
    return 0;
}
