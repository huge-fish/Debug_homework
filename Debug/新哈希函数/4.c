#include <stdio.h>
#include <string.h>

 int  F(char k[500]){
    char s[33];
    int bits[32];
    int  arr[32]={0};
    int i;
    int j;
    int m = strlen(k);
    for( i = 1; i <= m; i++){//(1<=i<=k)
        arr[i % 32]= arr[i % 32] + k[i-1];   //the same problem last one
    }
    for(j = 0; j <= 31; j++){//(0<=j<=31)
        bits[j]= arr[31 - j] ^ (arr[j] << 1);
          printf("%c",bits[j] % 85 + 34 );
    } 

     
     return 0;
    }
int main() {   
    char k[500];
    scanf("%s",&k);
    F(k);
    return 0;
}
