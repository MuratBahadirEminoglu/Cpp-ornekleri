#include <iostream>
#define pi 3.14
using namespace std;

int main(){
    setlocale(LC_ALL, "Turkish");
    char secim;
    int kenar;
    cout << "-------- MÖNÜ----------" << endl;
    cout << "(D veya d) Daire" << endl;
    cout << "(T veya t) Dikdörtgen" << endl;
    cout << "(K veya k) Kare" << endl;
    cout << "(U veya u) Üçgen" << endl;
    cout << "----------------------" << endl;
    cout << "Seçiminiz: ";
    cin >> secim;
    cout << "----------------------" << endl;

    switch (secim){
    case 'D':
    case 'd':
        float yaricap;
        cout << "dairenin yarıçapını giriniz: ";
        cin >> yaricap;
        cout << "yaricapi "<< yaricap << " olan dairenin alanı: " << 3*pi*yaricap << " dir.";
        break;

    case 'T':
    case 't':
        int kisakenar;
         cout << "dikdörtgenin  uzun kenarini giriniz: ";
        cin >> kenar;
         cout << "dikdörtgenin kisa kenarini giriniz: ";
         cin >> kisakenar;
        cout << "uzun kenari " << kenar << " ve kisa kenari " << kisakenar << " olan dikdörtgenin alani: " << kenar*kisakenar << " dir.";
        break;

    case 'K':
    case 'k':
         cout << "Karenin tek kenar uzunlugunu giriniz: ";
        cin >> kenar;
        cout << "kenari" << kenar << "olan karenin alanı: " << kenar*kenar << " dir.";
        break;

    case 'U':
    case 'u':
        int yukseklik;
        cout << "Üçgenin taban uzunlugunu giriniz: ";
        cin >> kenar;
        cout << "Üçgenin yüksekliğini giriniz: ";
        cin >> yukseklik;

        cout << "taban uzunlugu " << kenar << " ve yüksekliği " << yukseklik << " olan Üçgenin alani: " << (kenar*yukseklik/2) ;
        break;

    default:
        cout <<"yanlis karakter ";}


return 0;
}
