#include <stdio.h>

int main()
{
    // 1. Adım: Bellekte 'sayi' adında bir tamsayı değişkeni oluşturulur ve içine 42 değeri yazılır.
    int sayi = 42;

    // 2. Adım: 'sayi' değişkeninin bellek adresini alan (&) ve bu adresi tutan 'ptr' adında bir pointer tanımlanır.
    int *ptr = &sayi;

    // 3. Adım: Değerleri ve bellek adreslerini ekrana yazdırıyoruz.
    // %d: Tamsayı (int) yazdırmak için kullanılır.
    // %p: Bellek adresi (pointer) yazdırmak için kullanılır.
    printf("sayi adresi (&sayi) : %p\n", (void *)&sayi);
    printf("ptr'nin tuttugu adres: %p\n", (void *)ptr);
    printf("sayi'nin kendi degeri : %d\n", sayi);
    printf("ptr ile okunan deger  : %d\n\n", *ptr);

    // 4. Adım: 'sayi' değişkenine doğrudan müdahale etmeden, 'ptr' üzerinden adresteki değeri 100 yapıyoruz.
    // Dereference (*) operatörü: "ptr'nin işaret ettiği adresteki kutunun içine git ve yaz" anlamına gelir.
    *ptr = 100;

    // 5. Adım: Değişimin gerçekleştiğini teyit ediyoruz.
    printf("Guncelleme sonrasi sayi: %d\n", sayi);

    return 0;
}