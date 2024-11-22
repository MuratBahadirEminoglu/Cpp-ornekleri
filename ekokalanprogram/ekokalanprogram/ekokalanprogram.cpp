// ekokalanprogram.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

void ekokbul(int a, int b, int *k);

int main()
{
	int a, b, ekok;
	cout << "ekoklari bulunacak sayilar giriniz: ";
	cin >> a >> b;
	ekokbul(a, b, &ekok);
	cout << "sayilarin ekoku: " << ekok;
}
void ekokbul(int a,int b,int *k){

	*k = 1;
	int ortak = 2;
	while (a != 1 || b != 1) {
		while (a % ortak == 0 | b % ortak == 0) {
			*k *= ortak;
			if (a % ortak == 0)
				a /= ortak;
			if (b % ortak == 0)
				b /= ortak;
		}
		++ortak;
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
