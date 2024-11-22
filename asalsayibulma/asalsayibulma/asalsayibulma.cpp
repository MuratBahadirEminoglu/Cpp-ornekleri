// asalsayibulma.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
void asal(int x, int y, bool *z);

int main()
{
	int a, b;
	bool sonuc = 1;
	cout << "1.sayiyi giriniz: ";
	cin >> a;
	cout << "2.sayiyi giriniz: ";
	cin >> b;
	asal(a, b, &sonuc);
	cout << (sonuc ? "aralarında asaldir" : "aralarinda asal degildir");
}
void asal(int x, int y, bool* z) {
	int kucuk;
	kucuk = x;
	if (y < kucuk)
		kucuk = y;
	for (int i = 2; i <= kucuk; i++) {
		if (x % i == 0 && y % i == 0) {
			*z = 0;
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
