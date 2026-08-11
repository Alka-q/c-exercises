#include <stdio.h> // printf fonksiyonunu kullanabilmek için dahil ediyoruz

// 1. Adım: 'Ogrenci' adında bir veri yapısı (struct) ve tür (typedef) tanımlıyoruz.
typedef struct {
    int id;     // Öğrenci numarası
    float notu; // Öğrenci notu
} Ogrenci;

/**
 * @brief Bir öğrencinin notunu adres üzerinden güncelleyen fonksiyon.
 * 
 * @param pOgr Güncellenecek Ogrenci yapısının adresi (Ogrenci pointer)
 * @param yeni_not Atanacak yeni not değeri (float)
 */
void not_guncelle(Ogrenci *pOgr, float yeni_not) {
    // pOgr adrestir. '->' operatörü adresteki alan değerine doğrudan erişir ve değiştirir.
    //pOgr->notu = yeni_not;
    
    // not: Aslında pOgr->notu ifadesi, (*pOgr).notu yazımının kısa ve okunabilir halidir.
    (*pOgr).notu = yeni_not;
}

int main()
{
    // 2. Adım: 'ogr1' adında bir Ogrenci değişkeni oluşturup ilk değerlerini atıyoruz.
    Ogrenci ogr1 = {
        .id = 101,
        .notu = 85.5
    };

    printf("--- Güncelleme Öncesi ---\n");
    printf("id   = %d\n", ogr1.id);
    printf("notu = %.1f\n\n", ogr1.notu);

    // 3. Adım: 'ogr1' yapısının bellek adresini 'ogr_ptr' isimli pointer'a atıyoruz.
    Ogrenci *ogr_ptr = &ogr1;

    // 4. Adım: Fonksiyona adresi göndererek notu 95.0 olarak güncelliyoruz.
    not_guncelle(ogr_ptr, 95.0);

    printf("--- Güncelleme Sonrası ---\n");
    // Güncellenmiş veriyi işaretçi üzerinden okuyoruz: ogr_ptr->id ve ogr_ptr->notu
    printf("id   = %d\n", ogr_ptr->id);
    printf("notu = %.1f\n", ogr_ptr->notu);

    return 0;
}