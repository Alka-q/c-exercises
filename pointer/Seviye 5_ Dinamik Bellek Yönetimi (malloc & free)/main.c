}


#include <stdio.h>  // Standart girdi/çıktı fonksiyonları (printf, scanf) için
#include <stdlib.h> // Dinamik bellek yönetimi (malloc, free) fonksiyonları için

int main()
{
    int N;

    // 1. Adım: Kullanıcıdan dizinin eleman sayısını alıyoruz.
    printf("Bellekte kac elemanlik alan ayrilacak: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Gecersiz bir eleman sayisi girdiniz!\n");
        return -1;
    }

    // 2. Adım: Heap bölgesinde N adet 'int' sığacak büyüklükte dinamik alan ayırıyoruz.
    // (int*) tür dönüşümü (casting) yapılarak 'void*' tipindeki alan 'int*' tipine dönüştürülür.
    int *dizi = (int *)malloc(N * sizeof(int));

    // 3. Adım: Bellek ayırma işleminin başarısını kontrol ediyoruz.
    if (dizi == NULL) {
        printf("Hata: Yeterli bellek ayrilamadi!\n");
        return -1; // Programı hatayla sonlandırıyoruz.
    }

    // 4. Adım: Kullanıcıdan değerleri alıyoruz.
    // (dizi + i) ifadesi i. elemanın bellek adresidir, scanf bu adresi bekler.
    printf("\nBelirlenen adet kadar sayi giriniz:\n");
    for (int i = 0; i < N; i++) {
        printf("%d. sayi: ", i + 1);
        scanf("%d", (dizi + i));
    }

    // 5. Adım: Girilen sayıları pointer aritmetiği kullanarak ekrana yazdırıyoruz.
    printf("\nGirilen sayilar: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(dizi + i));
    }
    printf("\n");

    // 6. Adım: İşimiz bittiğinde ayrılan belleği işletim sistemine geri veriyoruz.
    free(dizi);

    // 7. Adım: Pointer'ı güvenli hale getiriyoruz (Dangling Pointer'ı önlemek için).
    dizi = NULL;

    return 0;
}