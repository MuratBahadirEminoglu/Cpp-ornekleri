#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int kilo;
    float boy;
    char cinsiyet;

    cout << "Kilo(kg) ve boy(m) ve cinsiyetinizi (e,E/k,K) giriniz: ";
    cin >> kilo >> boy >> cinsiyet;

    float vki = kilo / pow(boy,2);
    cout << "----------------------------" << endl;
    switch(cinsiyet){
        case 'e':
        case 'E':

        if(vki < 20.7){
            cout << "v�cut kilo indeksi = " << vki << endl;
            cout << "Zay�fs�n�z Sa�l�k riski!" << endl;
        }
        else if(vki > 20.7 && vki < 26.4){
            cout << "v�cut kilo indeksi = " << vki << endl;
            cout << "Normalsiniz.Risk yoktur" << endl;
        }
        else if(vki > 26.5 && vki < 31.1){
            cout << "v�cut kilo indeksi = " << vki << endl;
            cout << "�i�manl�k s�n�r�nda ya da �i�mans�n�z Riskli." << endl;
        }
        else if( vki > 32.3){
            cout << "v�cut kilo indeksi = " << vki << endl;
            cout << "Obezite. Ciddi derecede riskli" << endl;
        }
        break;


        case 'k':
        case 'K':

        if(vki < 19.1){
            cout << "v�cut kilo indeksi = " << vki << endl;
            cout << "Zay�fs�n�z Sa�l�k riski!" << endl;
        }
        else if(vki > 19.1 && vki < 25.8){
            cout << "v�cut kilo indeksi = " << vki << endl;
            cout << "Normalsiniz.Risk yoktur" << endl;
        }
        else if(vki > 25.9 && vki < 32.2){
            cout << "v�cut kilo indeksi = " << vki << endl;
            cout << "�i�manl�k s�n�r�nda ya da �i�mans�n�z Riskli." << endl;
        }
        else if( vki > 32.3){
            cout << "v�cut kilo indeksi = " << vki << endl;
            cout << "Obezite. Ciddi derecede riskli" << endl;
        }


        break;

        default:
            cout << "yanlis karakter sectiniz";
    }
    return 0;
}
