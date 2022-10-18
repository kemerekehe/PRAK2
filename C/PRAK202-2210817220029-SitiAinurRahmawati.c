#include <stdio.h>
int main () {
    float pertama, kedua;
    printf("Masukkan nilai pertama: ");
    scanf("%f", &pertama);
    printf("Masukkan nilai kedua: ");
    scanf("%f", &kedua);
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%5.2f\"", pertama, kedua, pertama+kedua);
}