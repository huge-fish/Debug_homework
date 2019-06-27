#include <stdio.h>

int main() {
    int n,m;
    int i,j;
    scanf ("%d" , &n);
    for (i = 1; i <= n; i++){
        for (j = 1 , m = n; j <= (n-i+1); j++, m--){
            printf ("%d", m-i+1);
            if (j != (n-i+1))
                printf (" ");
            else
                printf ("\n");
        }

    }
    
    
    return 0;
}
