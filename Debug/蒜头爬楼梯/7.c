#include <stdio.h>

int main() {
    int i,N,x;
    int a[51] = {0};
    scanf("%d",&N);
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    a[3] = 1;
    for(i = 3;i <= N; i++) {
        a[i] = a[i - 2] + a[i - 3];
    }
    printf("%d", a[N - 1]);
    return 0;
}

