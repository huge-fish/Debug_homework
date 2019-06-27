#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    double r;
    double a;
    double b;
    scanf("%lf",&r);
    a=2 * PI * r;
    printf("%.3lf\n", a);
    b=PI * r * r;
    printf("%.3lf", b);

    return 0;
}
