#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p,
                 int q, 
                 double (*func)(int, int, double));
double f(int p, 
         int q, 
         double x);

int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, 
                 int q, 
                 double (*func)(int, int, double)) {  
    double a;
    double b;
    double mid;
    a = 20;
    b = -20;
    mid = (a + b)/ 2;
    while(fabs(f(p,q,mid)) >= EPSILON){
        if((f(p,q,a) * f(p,q,mid)) < 0) {
           // mid = (mid + a)/ 2;
            b = mid;
            mid = (a + b)/2;
        }
        if((f(p,q,b) * f(p,q,mid)) < 0) {
           // mid = (b + mid)/ 2;
            a = mid;
            mid = (a + b)/2;
        }
    }
    return mid;
        
}

double f(int p, 
         int q, 
         double x) {
    return p * x + q;
}
//clang tindy and delete unneccssary code
