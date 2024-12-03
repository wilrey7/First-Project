// Membuat Kalkulator Sederhana
// By : William Reynold Pramudya
#include <stdio.h>

int main() {
    double angka1, angka2, hasil;
    int operasi;

    printf("Masukkan angka pertama: ");
    scanf("%lf", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%lf", &angka2);

    printf("Pilih operasi (1 = +, 2 = -, 3 = *, 4 = /): ");
    scanf("%d", &operasi);

    switch (operasi) {
        case 1:
            hasil = angka1 + angka2;
            printf("Hasil: %.2lf\n", hasil);
            break;
        case 2:
            hasil = angka1 - angka2;
            printf("Hasil: %.2lf\n", hasil);
            break;
        case 3:
            hasil = angka1 * angka2;
            printf("Hasil: %.2lf\n", hasil);
            break;
        case 4:
            if (angka2 == 0) {
                printf("Tidak dapat membagi dengan nol.\n");
            } else {
                hasil = angka1 / angka2;
                printf("Hasil: %.2lf\n", hasil);
            }
            break;
        default:
            printf("Pilihan operasi tidak valid.\n");
            break;
    }

    return 0;
}
