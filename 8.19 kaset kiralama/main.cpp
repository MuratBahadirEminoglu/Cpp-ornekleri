#include <iostream>

using namespace std;

int main()
{  setlocale(LC_ALL, "Turkish");
   char kullanicikodu;
   int kasetsayisi;

   cout << "kullan�c� kodunu (A,a,B,b,c,C,d,D) ve kaset say�s�n� giriniz: ";
   cin >> kullanicikodu >> kasetsayisi;

   switch(kullanicikodu){
        case 'A':
        case 'a':
            cout << "borcunuz = " << kasetsayisi*1 << " TL" ;
            break;

        case 'B':
        case 'b':
            cout << "borcunuz = " << kasetsayisi*2 << " TL";
            break;

        case 'C':
        case 'c':
            cout << "borcunuz = " << kasetsayisi*3 << " TL";
            break;

        case 'D':
        case 'd':
            cout << "borcunuz = " << kasetsayisi*3 << " TL";
            break;

        default:
            cout << "yanl�� karakter girdiniz.";
        }
    return 0;
}
