#include <stdio.h> 

/**
 * @brief İki tamsayı değişkenin değerlerini adresleri üzerinden yer değiştirir.
 * 
 * @param p1 Değeri değiştirilecek ilk değişkenin bellek adresi (int pointer)
 * @param p2 Değeri değiştirilecek ikinci değişkenin bellek adresi (int pointer)
 */
void swap(int *p1, int *p2) {
    // 1. Adım: p1'in işaret ettiği adresteki değeri geçici bir değişkende saklıyoruz.
    int temp = *p1;

    // 2. Adım: p2'nin işaret ettiği adresteki değeri, p1'in işaret ettiği adrese yazıyoruz.
    *p1 = *p2;

    // 3. Adım: Geçici değişkende sakladığımız ilk değeri, p2'nin işaret ettiği adrese yazıyoruz.
    *p2 = temp;
}

int main()
{
    // Değişkenlerin ilk değerleri tanımlanıyor
    int A = 5, B = 10;

    printf("--- Takastan Önce ---\n");
    printf("A = %d, B = %d\n\n", A, B);

    // Değişkenlerin kendisini değil, adreslerini (&) fonksiyona parametre olarak gönderiyoruz.
    swap(&A, &B);

    printf("--- Takastan Sonra ---\n");
    printf("A = %d, B = %d\n", A, B);

    return 0;
}