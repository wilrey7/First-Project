// Program Manipulasi String dan Operasi Matematika Sederhana
// By : William Reynold Pramudya
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void analisisString() {
    char teks[100];
    int panjang, jumlahVokal = 0;

    printf("Masukkan teks: ");
    scanf(" %[^\n]s", teks);

    panjang = strlen(teks);

    for (int i = 0; i < panjang; i++) {
        char c = tolower(teks[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
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
                printf("Kesalahan: Tidak bisa menghitung akar kuadrat dari bilangan negatif.\n");
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
            printf("Kesalahan: Pilihan tidak valid.\n");
            break;
    }
}

int main() {
    int menu;
    
    printf("Program Manipulasi String dan Operasi Matematika");
    
    do {
        printf("\nMenu:\n");
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
                printf("Terima kasih, sampai jumpa kembali.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
                break;
        }
    } while (menu != 3);

    return 0;
}
