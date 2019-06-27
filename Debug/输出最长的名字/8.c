#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char line;
    scanf("%c", &line);
    
    char name[100][102];
    int i, j;
    char largest[102];
    
    for (i = 0; i < n; i++)
        for(j = 0; scanf("%c", &name[i][j]) != -1 && name[i][j] != '\n'; j++);
  
    strcpy(largest, name[0]);
    for ( i = 1; i < n; i++){
        if (strlen(largest) < strlen(name[i]))
            strcpy(largest, name[i]);
     }       
    printf("%s", largest);
    
    return 0;
}

