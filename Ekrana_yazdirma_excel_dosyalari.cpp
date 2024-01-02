#include <stdio.h>

int main() {
    // Excel dosyasýný aç
    FILE *dosya = fopen("C:\Users\sample_dataset.csv", "r");

    // Hata kontrolü yap
    if (dosya == NULL) {
        printf("Dosya açma hatasý!\n");
        return 1;
    }

    // Ýlk 3 satýrdaki veriyi oku ve ekrana yazdýr
    for (int i = 0; i < 3; ++i) {
        int veri;
        fscanf(dosya, "%d,", &veri);
        printf("%d\n", veri);
    }

    // Dosyayý kapat
    fclose(dosya);

    return 0;
}

