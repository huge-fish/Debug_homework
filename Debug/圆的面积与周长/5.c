#include <stdio.h>
#define PI 3.14159

int main() {
    float r,a,b;
    scanf("%f",&r);
    a=2 * PI * r;
    b=PI * r * r;
    printf("%.3f\n", a);
    printf("%.3f", b);
    return 0;
}
