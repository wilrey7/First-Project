// Membuat ATM Sederhana
// By : William Reynold Pramudya
#include <stdio.h>

int main() {
    int pilihan;
    double saldo = 1000000.0; // Saldo awal
    double jumlah;
    
    printf("------- SELAMAT DATANG -------");

    do {
        printf("\n--- LAYANAN ATM SAINT JOHN ---\n");
        printf("1. Cek Saldo\n");
        printf("2. Tarik Uang\n");
        printf("3. Setor Uang\n");
        printf("4. Keluar\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: // Cek saldo
                printf("Saldo Anda saat ini: Rp %.2lf\n", saldo);
                break;
            case 2: // Tarik uang
                printf("Masukkan jumlah yang ingin ditarik: Rp ");
                scanf("%lf", &jumlah);

                if (jumlah > saldo) {
                    printf("Mohon maaf, saldo anda tidak mencukupi\n");
                } else if (jumlah <= 0) {
                    printf("Mohon maaf, jumlah penarikan saldo minimal Rp 1\n");
                } else {
                    saldo -= jumlah;
                    printf("Penarikan berhasil. Saldo Anda sekarang: Rp %.2lf\n", saldo);
                }
                break;
            case 3: // Setor uang
                printf("Masukkan jumlah yang ingin disetor: Rp ");
                scanf("%lf", &jumlah);

                if (jumlah <= 0) {
                    printf("Mohon maaf, jumlah setor uang minimal Rp 1\n");
                } else {
                    saldo += jumlah;
                    printf("Setoran berhasil. Saldo Anda sekarang: Rp %.2lf\n", saldo);
                }
                break;
            case 4: // Keluar
                printf("Terima kasih telah menggunakan layanan ATM Saint John\n");
                break;
            default: // Pilihan tidak valid
                printf("Pilihan menu tidak valid. Silakan coba lagi.\n");
                break;
        }
    } while (pilihan != 4);

    return 0;
}
