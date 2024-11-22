// sayıtahminoyunu.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
static int tut;

void tahmin(int a);
int main()
{
    srand(time(0));
    tut = (1 + (int)rand() % 100);
    tahmin(tut);
    return 0;
}


void tahmin(int a){
    int tahmin;
    int sayac = 0;
    int puan = 100;
    char cevap;
    cout << "tahmininiz: ";
    do {
        cin >> tahmin;
        sayac++;
        if (tahmin == a) {
            cout << "Bravo " << sayac << " tahminde bildiniz" << endl;
        }
        else if (tahmin < a) {
            cout << "daha buyuk bir sayi giriniz." << endl;
        }
        else {
            cout << "daha kucuk bir sayi giriniz." << endl;
            puan = -10;
        }

    } while (tahmin != a);
    cout << "puaniniz: " << puan;
    cout << "tekrardan denemek ister misiniz(E/H): ";
    cin >> cevap;
    while(cevap== 'E' )
        if (cevap == 'E') {
            void tahmin(int a);
        }
        else {
            break;
        }
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
