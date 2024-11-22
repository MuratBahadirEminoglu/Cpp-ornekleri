#include <iostream>

using namespace std;

int main()
{
    int sayi;
    int a,b,c,d,e;

    cout << "5 basamakli sayiyi giriniz.";
    cin >> sayi;
    e = sayi%10;
    d = sayi/10000;

    c = (sayi%1000)/100;
    b = (sayi-10000)%10;
    a = sayi/10000;

    int yenisayi = e*10000+d*1000+c*100+b*10+a;
    // cout << e << endl;
    //cout << d << endl;
    //cout << c << endl;
    //cout << b << endl;
    //cout << a << endl;
    cout << yenisayi << endl;
    if(sayi == yenisayi)
        cout << "girdiginiz sayi palindromdur.";
    else{
        cout << "girdiginiz sayi palindrom değildir.";
    }
    return 0;
}
