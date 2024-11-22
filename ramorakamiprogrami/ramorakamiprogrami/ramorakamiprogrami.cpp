// ramorakamiprogrami.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	int sayi;
	int uzunluk;
	char carpan;
	int deger[100];
	char roma[100];

	cout << "roma rakamini giriniz: ";
	cin >> roma;
	uzunluk = strlen(roma);
	for (int i = 0; i < uzunluk; i++) {

		switch(roma[i]){
		case 'I':
		case 'ı':
			deger[i] = 1;
			break;
		case'V':
		case'v':
			deger[i] = 5;
			break;
		case'X':
		case'x':
			deger[i] = 10;
			break;
		case'L':
		case'l':
			deger[i] = 50;
			break;
		case'C':
		case'c':
			deger[i] = 100;
			break;
		case'D':
		case'd':
			deger[i] = 500;
			break;
		case'M':
		case'm':
			deger[i] = 1000;
			break;









		}
	}
	sayi = deger[uzunluk - 1];
	for (int i = 0; i < uzunluk; i++) {
		carpan = 1;
		for (int j = i + 1; j < uzunluk; j++) {
			if (deger[i] < deger[j]) {
				carpan =carpan -1;
				}

		}
		sayi = sayi+ (carpan * deger[i]);
	}
	cout << "sayinin latin hali: " << sayi;
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
