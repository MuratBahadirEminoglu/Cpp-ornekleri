#include <iostream>

using namespace std;

int main()
{
    double N;
    string  karakter;

    cout << "righter cinsinden deprem buyuklugunu giriniz: ";
    cin >> N;

    if(N< 5.0)
        karakter = "ufak ve hasarsýz."; // neden sonuna << endl; ekleyemiyorum
    else if( 5.0 <= N && N < 5.5)
        karakter = "az hasarli.";
    else if (5.5 <= N && N < 6.5)
        karakter = "ciddi hasar: catlamalar ve cökmeler olabilir.";
    else if(6.5 <= N && N < 7.5)
        karakter = "Felaket: evler ve binalar cokebilir.";
    else if( 7.5 <= N)
        karakter = "Facia: Bütün yapilar yok olur.";


    cout <<"------------------------------" << endl;
    cout << karakter;

    return 0;
}
