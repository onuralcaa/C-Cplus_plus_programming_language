#include <stdio.h>

int main() {
    // Excel dosyas�n� a�
    FILE *dosya = fopen("C:\Users\sample_dataset.csv", "r");

    // Hata kontrol� yap
    if (dosya == NULL) {
        printf("Dosya a�ma hatas�!\n");
        return 1;
    }

    // �lk 3 sat�rdaki veriyi oku ve ekrana yazd�r
    for (int i = 0; i < 3; ++i) {
        int veri;
        fscanf(dosya, "%d,", &veri);
        printf("%d\n", veri);
    }

    // Dosyay� kapat
    fclose(dosya);

    return 0;
}

