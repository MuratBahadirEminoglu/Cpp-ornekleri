#include <iostream>
#define pi 3.14
using namespace std;

int main(){
    setlocale(LC_ALL, "Turkish");
    char secim;
    int kenar;
    cout << "-------- M�N�----------" << endl;
    cout << "(D veya d) Daire" << endl;
    cout << "(T veya t) Dikd�rtgen" << endl;
    cout << "(K veya k) Kare" << endl;
    cout << "(U veya u) ��gen" << endl;
    cout << "----------------------" << endl;
    cout << "Se�iminiz: ";
    cin >> secim;
    cout << "----------------------" << endl;

    switch (secim){
    case 'D':
    case 'd':
        float yaricap;
        cout << "dairenin yar��ap�n� giriniz: ";
        cin >> yaricap;
        cout << "yaricapi "<< yaricap << " olan dairenin alan�: " << 3*pi*yaricap << " dir.";
        break;

    case 'T':
    case 't':
        int kisakenar;
         cout << "dikd�rtgenin  uzun kenarini giriniz: ";
        cin >> kenar;
         cout << "dikd�rtgenin kisa kenarini giriniz: ";
         cin >> kisakenar;
        cout << "uzun kenari " << kenar << " ve kisa kenari " << kisakenar << " olan dikd�rtgenin alani: " << kenar*kisakenar << " dir.";
        break;

    case 'K':
    case 'k':
         cout << "Karenin tek kenar uzunlugunu giriniz: ";
        cin >> kenar;
        cout << "kenari" << kenar << "olan karenin alan�: " << kenar*kenar << " dir.";
        break;

    case 'U':
    case 'u':
        int yukseklik;
        cout << "��genin taban uzunlugunu giriniz: ";
        cin >> kenar;
        cout << "��genin y�ksekli�ini giriniz: ";
        cin >> yukseklik;

        cout << "taban uzunlugu " << kenar << " ve y�ksekli�i " << yukseklik << " olan ��genin alani: " << (kenar*yukseklik/2) ;
        break;

    default:
        cout <<"yanlis karakter ";}


return 0;
}
