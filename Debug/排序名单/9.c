#include <stdio.h>
#include <string.h>

int main() {
    int i,j;
    char name[10][20]={0};
    
    for(i = 0,j = 0; i < 10; i++){
        scanf("%s",&name[i][j]);
    }
    for(int k = 0; k <= 9; k++){
        for(i = 0,j = 0; i <= 9-k-1; i++){
            if(strcmp(&name[i][j],&name[i+1][j]) > 0){
                char temp[10];
                strcpy(temp,&name[i][j]);
                strcpy(&name[i][j],&name[i+1][j]);
                strcpy(&name[i+1][j],temp);
            }
        }
    }

    for(i = 0,j = 0; i < 10; i++){
        printf("%s\n",&name[i][j]);
    }
    
    return 0;
}
