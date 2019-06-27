#include <stdio.h>

long long int fun(int n) {
	if (n == 1 || n == 0) {
		return 0;
	} else if(n == 2) {
		return 1;
	} else if(n == 3) {
    	return 1;
    } else
     	return fun(n - 2) + fun(n - 3);
    }
    
int main() {
	long long int n;
    //int sum = 0;
    while (scanf("%lld", &n) != EOF) {
    printf("%lld\n", fun(n));
    }
    return 0;
}

