#include <stdio.h>
#include <string.h>

int main() {
    char str[500]; 
    int arr[32], bits[32];
    char fs[32];
    int i;
    memset(arr, 0, sizeof(arr));
    memset(fs, '\0', sizeof(fs));
    scanf("%s", str);
    for (i = 1; i <= strlen(str); i++)
    {
        if (str[i-1] == '\n') break;
        arr[i % 32] += str[i-1];
    }
    
    /*for(int i=0 ;i<32 ;i++)
    {
    	printf("%d ",arr[i]); //test data
	}*/
    
    for (i = 0; i < 32; i++)
    {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
       // printf("b%d ",bits[i]);
        fs[i] = bits[i] % 85 + 34;
    }
    /* for(int i=0 ;i<32 ;i++)
    {
    	printf("f%d ",fs[i]); //test data
	}*/
    for (int i = 0 ; i <= 31; i++)
        printf("%c", fs[i]);//out put problem;

    return 0;
}
