#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    int siralama;
    cout << "uc adet ondalikli sayi giriniz: ";
    cin >> a>> b>> c;
    if( a/)
    if(a>b && a> c && b>c)
        cout <<"buyukten kucuge sirali hali = " <<  a << " > " << b << " > " << c << " dir." ;
    else if(a>b && a> c && c>b)
        cout <<"buyukten kucuge sirali hali = " <<  a << " > " << c << " > " << b << " dir." ;
    else if(b>a && b> c && a>c)
        cout <<"buyukten kucuge sirali hali = " <<  b << " > " << a << " > " << c << " dir." ;
    else if(b>a && b> c && c>a)
        cout <<"buyukten kucuge sirali hali = " <<  b << " > " << c << " > " << a << " dir." ;
    else if(c>a && c> b && a>b)
        cout <<"buyukten kucuge sirali hali = " <<  c << " > " << a << " > " << b << " dir." ;
    else if(c>a && c> b && b>a)
        cout <<"buyukten kucuge sirali hali = " <<  c << " > " << b << " > " << a << " dir." ;



    return 0;
}
