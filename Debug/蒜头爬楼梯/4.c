#include <stdio.h>

int main() {
	int n, i;
    int sum = 0;
    int arr[51];
    scanf("%d", &n);
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
	for (int i = 4; i <= n; i++) {
        
        arr[i] = arr[i - 2] + arr[i - 3];
    	sum += 1;
    }
    printf("%d", arr[n]);
    return 0;
}

