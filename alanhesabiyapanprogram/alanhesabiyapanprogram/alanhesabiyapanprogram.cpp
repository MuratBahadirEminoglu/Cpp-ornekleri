// alanhesabiyapanprogram.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#define pi 3.14

void kare();
void dikdortgen();
void ucgen();
using namespace std;
int main()
{
    
    
    char secim;
    cout << "***ALAN HESABŞ YAPAN PROGRAM***" << endl;
    cout << "kare icin k'ye basiniz" << endl;
    cout << "dikdortgen icin d'ye basiniz" << endl;
    cout << "ucgen icin u'ye basiniz" << endl;
    cin >> secim;

    switch (secim) {
       
    case 'K':
    case 'k':
       kare();
        break;

    case 'D':
    case 'd':
        dikdortgen();
        break;

    case 'U':
    case 'u':
        ucgen();
        break;



    }
}





void kare() {
    int a;
    cout << "karenin alan hesabi icin bir kenar uzunlugunu giriniz: ";
    cin >> a;
    cout << "karenin alani: " << a * a;

}



void dikdortgen() {
    int a, b;
    cout << "dikdortgen alan hesabi icin " << endl;
    cout << "uzun kenari giriniz: " << endl;
    cin >> a;
    cout << "kisa kenari giriniz: " << endl;
    cin >> b;

    cout << "dikdortgenin alani: " << a * b;
}

void ucgen() {
    int x, r;
    cout << "ucgenin alani hesaplanmasi icin" << endl;
    cout << "yuksekligini giriniz: " << endl;
    cin >> x;
    cout << "taban uzunlugunu giriniz: " << endl;
    cin >> r;

    cout << "ucgenin alani: " << (x * r) / 2;
}
// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
