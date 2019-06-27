#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    double r;
    scanf("%lf", &r);
    printf("%.3lf\n%.3lf", 2 * PI * r, PI * r * r);
    return 0;
}
