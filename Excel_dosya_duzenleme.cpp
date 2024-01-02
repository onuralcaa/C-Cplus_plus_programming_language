#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Excel dosyas�n� a�
    FILE *dosya = fopen("C:\sample_data.csv", "w+");

    // Seed'i ayarla
    srand(time(NULL));

    // Her bir h�creye 1-10 aras�nda random de�er ekle
    for (int i = 0; i < 50000; ++i) {
        fprintf(dosya, "%d", rand() % 10 + 1);

        // Her h�cre aras�na virg�l ekleyerek ay�r
        if (i < 49999) {
            fprintf(dosya, ",");
        }
    }

    // Dosyay� kapat
    fclose(dosya);

    return 0;
}

