#include <stdio.h>
int main () {
    float jari, luas, tinggi, volume, keliling_alas;
    scanf("%g %g", &jari, &tinggi);
    if ((int)jari % 7 == 0 )
    {
        volume=jari*jari*22/7*tinggi;
        luas=2*(jari*jari*22/7)+(tinggi*2*jari*22/7);
        keliling_alas=2*jari*22/7;
    }
    else
    {
        volume=jari*jari*3.14286*tinggi;
        luas=2*(jari*jari*3.14286)+(tinggi*2*jari*22/7);
        keliling_alas=2*jari*3.14286;
    }
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling_alas);
    return 0;
}