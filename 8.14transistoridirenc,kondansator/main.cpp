#include <iostream>

using namespace std;

int main()
{
    int adet , ucret;
    char parca;
    cout << "********* URUN SECENEKLERİ***********" << endl;
    cout << "(T veya t) Transistor" << endl;
    cout << "(D veya d) Direnc" << endl;
    cout << "(K veya k) Kondansator" << endl;
    cout << "*************************************" << endl;
    cout <<" seciminiz: ";
    cin >> parca;
    switch(parca){

    case 'T':
    case 't':
        cout << "seciminiz: t"<<endl;
        cout << "ne kadarlik transistor alacaksınız: ";
        cin >> adet;
        if( adet >= 1000){
            ucret = adet-(adet*10)/100;
            cout << "odeme = " << ucret ;
        }
        else{
        cout << "odeme = " << adet ;
    }
        break;

    case 'D':
    case 'd':
        cout << "seciminiz: d"<<endl;
        cout << "ne kadarlik Direnc alacaksınız: ";
        cin >> adet;
        if( adet >= 100){
            ucret = adet-(adet*5)/100;
            cout << "odeme = " << ucret ;
        }
        else{
        cout << "odeme = " << adet ;
    }
        break;

    return 0;
}
}
