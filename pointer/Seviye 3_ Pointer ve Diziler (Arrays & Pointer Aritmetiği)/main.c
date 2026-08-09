#include <stdio.h>

int main()
{
    // 1. Adım: 5 elemanlı tamsayı dizisi tanımlanıyor.
    int sayilar[] = {10, 20, 30, 40, 50};

    // 2. Adım: Dizi adı 'sayilar', doğrudan ilk elemanın adresini (&sayilar[0]) temsil eder.
    // Bu adresi 'ptr' adındaki pointer değişkenimize atıyoruz.
    int *ptr = sayilar; 

    // 3. Adım: Dizinin toplam bayt boyutunu, tek bir elemanın bayt boyutuna bölerek
    // eleman sayısını (length) hesaplıyoruz. (5 * 4 bayt) / 4 bayt = 5
    int len = (sizeof(sayilar) / sizeof(int));
    
    printf("--- Pointer Aritmetigi ile Dizi Gezinme ---\n\n");

    // 4. Adım: Döngü ile dizinin tüm elemanlarına erişiyoruz.
    for(int i = 0; i < len; i++) {
        // *(ptr + i): ptr adresinden itibaren i adım ilerle ve oradaki değeri oku (dereference).
        // (ptr + i) : ptr adresinden itibaren i adım ilerlemiş olan adresi ver.
        // Adresleri %p formatıyla yazdırmak güvenli standarttır.
        printf("sayilar[%d] = %d \t Adres: %p\n", i, *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}