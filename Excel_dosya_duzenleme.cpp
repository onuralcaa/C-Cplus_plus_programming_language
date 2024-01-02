#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Excel dosyasýný aç
    FILE *dosya = fopen("C:\sample_data.csv", "w+");

    // Seed'i ayarla
    srand(time(NULL));

    // Her bir hücreye 1-10 arasýnda random deðer ekle
    for (int i = 0; i < 50000; ++i) {
        fprintf(dosya, "%d", rand() % 10 + 1);

        // Her hücre arasýna virgül ekleyerek ayýr
        if (i < 49999) {
            fprintf(dosya, ",");
        }
    }

    // Dosyayý kapat
    fclose(dosya);

    return 0;
}

