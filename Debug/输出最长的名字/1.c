#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);
    char names[n][101];
    char max[101];
    
    for (int i = 0; i < n; i++) {
         gets(names[i]);
    } 
    max == names[0];

        for (int j = 0; j < n ; j++) {
           
            if (strlen(max) < strlen(names[j])) {
                strcpy(max, names[j]);//codereviwe : an extar loop we only the largest number
            }
        }
    
    
    printf("%s\n", max);
    
    return 0;
}

