#include <stdio.h>
#include <math.h>
int main () {
    float a, b, c;
    scanf("%f %f", &a, &b);
    c=sqrt(pow(b, 2)-pow(a, 2));
    printf("Alas = %.f cm\n", c);
    printf("Tinggi = %.f cm\n", a);
    printf("Keliling = %.f cm\n", (a+b+c));
    printf("Luas = %.f cm^2\n", (a*c/2));
    return 0;
}