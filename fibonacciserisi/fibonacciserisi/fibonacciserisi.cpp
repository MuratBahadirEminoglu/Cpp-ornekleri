// fibonacciserisi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int fibonnaci(int x);
int main()
{
    int sayi;
    cout << "hangi adimdaki fibonacciyi istersiniz: ";
    cin >> sayi;
    cout << "istediginiz " << sayi << ".serinin fibonnacisi:" << fibonnaci(sayi);
}


int fibonnaci(int x) {

    if (x<0)
        return -1;
    else if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return fibonnaci(x - 1) + fibonnaci(x - 2);
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
