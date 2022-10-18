#include <stdio.h>
int main () {
    char nama[100], nim[50], kelas[2], alamat[50], ttl[50], hobby[50], hp[50];
    printf("Nama                   : ");
    gets(nama);
    printf("NIM                    : ");
    gets(nim);
    printf("Kelas Parallel         : ");
    gets(kelas);
    printf("Tempat/Tanggal Lahir   : ");
    gets(ttl);
    printf("Alamat                 : ");
    gets(alamat);
    printf("Hobby                  : ");
    gets(hobby);
    printf("No. HP                 : ");
    gets(hp);
    return 0;
}