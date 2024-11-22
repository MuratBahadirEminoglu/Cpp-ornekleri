// kareveucgencizimi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
int main()
{
    char secim;
    int genislik;
    int uzunluk;
    cout << "ucgen icin U , kare cizmek icin K ye basiniz:";
    cin >> secim;

    if (secim == 'K'|| secim == 'k') {
        cout << "istediginiz genisligi giriniz:";
        cin >> genislik;
        cout << "istediginiz uzunlugu giriniz: ";
        cin >> uzunluk;
        for (int i = 0; i < genislik; i++) {
            for (int j = 0; j < uzunluk; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if(secim=='U'|| secim == 'u'){
        cout << "istediginiz genisligi giriniz:";
        cin >> genislik;
        cout << "istediginiz uzunlugu giriniz: ";
        cin >> uzunluk;

        for (int i = genislik; i > 0; i--) {
            for (int j = uzunluk; j <= 1; j--) {
                cout << "*";
            }
            cout << endl;
        }

    
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
