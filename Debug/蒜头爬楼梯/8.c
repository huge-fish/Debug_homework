#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i = 0;
    int x;
    int y;
    int m = 1;
    int b = 1;
    for (x = 0; x <= n / 2; x++) {
        for (y = 0; y <= n / 3; y++) {
            if (x * 2 + y * 3 == n) {
				m = 1;
				b = 1;
            	if (x != 0 && y != 0) {
					for (int count = x + y; count > y; count--) {
                		m = m * count ;b=b* (count - y);
					}
				}
				i += m / b;
            }
        }
    }
    printf("%d", i);
    return 0;
}
