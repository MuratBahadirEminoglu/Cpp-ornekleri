#include <iostream>

using namespace std;

int main()
{setlocale(LC_ALL, "Turkish");
    char basharf;
    cout << "rakamýn baþ harfini giriniz: ";
    cin >> basharf;
    cout << "----------------------" << endl;
    switch(basharf){
    case 'o':
     cout <<"one-bir-1";
     break;
     case 't':
     cout <<"three-ü-3";
     break;
     case 'f':
     cout <<"five-beþ-5";
     break;
     case 's':
     cout <<"seven-yedi-7";
     break;
     case 'n':
     cout <<"nine-dokuz-9";
     break;

     default:
        cout << "yanliþ karakter girdiniz.";

     }
    return 0;
}
