#include <stdio.h>
#include <math.h>

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main() {
    int n = 10;
    int m;
    int numbers[100] = {};
    int i;
    
    for (i = 1; i <= n; i++) {
        scanf("%d", &numbers[i]);
        for (int j = i;j > 0 && numbers[j] > numbers[j - 1]; j--) {
            swap(&numbers[j], &numbers[j - 1]);
        }
    }
    
    for (m = 0; m < 10; m++) {
        printf("%d", numbers[m]);
        if (m != 9) {
            printf(" ");
        }
    }
    return 0;
}

