// hayvansavar program.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//



#include <iostream>
#include <Windows.h> // Beep fonksiyonunu kullanmak için gerekli kütüphane

using namespace std;

int main() {
    int a;
    char devam;

    do {
        cout << "1. insan savma" << endl;
        cout << "2. sinek savma" << endl;
        cout << "3. kedi savma" << endl;
        cout << "4. kopek savma" << endl;
        cout << "5. manuel girmek için" << endl;
        cout << "seciminiz: ";
        cin >> a;

        switch (a) {
        case 1:
            Beep(1000, 5000);
            break;
        case 2:
            Beep(1500, 5000);
            break;
        case 3:
            Beep(50000, 5000);
            break;
        case 4:
            Beep(30000, 5000);
            break;
        case 5: 
            int f, s;
            cout << "Frekans ve sure degerlerini giriniz: ";
            cin >> f >> s;
            Beep(f, s);
            break;
        
        default:
            cout << "Yanlış seçim yaptınız. Lütfen tekrar deneyiniz." << endl;
        }

        cout << "Tekrar denemek ister misiniz? (e/h): ";
        cin >> devam;

    } while (devam == 'e' || devam == 'E');
    cout << "programdan cikiliyor";

    return 0;
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
