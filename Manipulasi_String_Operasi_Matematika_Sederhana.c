#include <stdio.h>
#include <string.h>
#include <math.h>

void analisisString() {
    char teks[100];
    int panjang, jumlahVokal = 0;

    printf("Masukkan teks: ");
    scanf(" %[^\n]s", teks);

    panjang = strlen(teks);

    for (int i = 0; i < panjang; i++) {
        char c = teks[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            jumlahVokal++;
        }
    }

    printf("Panjang teks: %d\n", panjang);
    printf("Jumlah huruf vokal: %d\n", jumlahVokal);
}

void operasiMatematika() {
    int pilihan;
    double angka1, angka2, hasil;

    printf("\nOperasi Matematika:\n");
    printf("1. Penjumlahan\n");
    printf("2. Akar Kuadrat\n");
    printf("3. Pangkat\n");
    printf("Pilih operasi (1-3): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukkan angka pertama: ");
            scanf("%lf", &angka1);
            printf("Masukkan angka kedua: ");
            scanf("%lf", &angka2);
            hasil = angka1 + angka2;
            printf("Hasil: %.2lf + %.2lf = %.2lf\n", angka1, angka2, hasil);
            break;
        case 2:
            printf("Masukkan angka: ");
            scanf("%lf", &angka1);
            if (angka1 < 0) {
                printf("Mohon maaf, tidak dapat menghitung akar kuadrat dari bilangan negatif.\n");
            } else {
                hasil = sqrt(angka1);
                printf("Hasil: √%.2lf = %.2lf\n", angka1, hasil);
            }
            break;
        case 3:
            printf("Masukkan angka: ");
            scanf("%lf", &angka1);
            printf("Masukkan pangkat: ");
            scanf("%lf", &angka2);
            hasil = pow(angka1, angka2);
            printf("Hasil: %.2lf^%.2lf = %.2lf\n", angka1, angka2, hasil);
            break;
        default:
            printf("Pilihan tidak valid! Silakan coba lagi\n");
            break;
    }
}

int main() {
    int menu;

    do {
        printf("\n----- PROGRAM STRING & MATEMATIKA -----\n");
        printf("Menu:\n");
        printf("1. Analisis String (Panjang & Vokal)\n");
        printf("2. Operasi Matematika (Penjumlahan, Akar Kuadrat, Pangkat)\n");
        printf("3. Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                analisisString();
                break;
            case 2:
                operasiMatematika();
                break;
            case 3:
                printf("Terima kasih telah menggunakan program ini!\n");
                break;
            default:
                printf("Pilihan tidak valid! Silakan coba lagi\n");
                break;
        }
    } while (menu != 3);

    return 0;
}
