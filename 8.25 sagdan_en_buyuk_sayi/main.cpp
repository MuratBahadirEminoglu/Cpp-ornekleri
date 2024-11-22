#include <iostream>

using namespace std;

int main()
{
    int a,b,c,sayi;
    cout << "sayiyi giriniz:";
    cin >> sayi;
    a = sayi/100;
    b = (sayi/10)%10;
    c= sayi%10;
    cout << "---------------------"  << endl;

    if(c > a && c > b)
        cout << "sayinin en buyuk rakami sagdan 1.rakamdır.";
    else if(b > c && b > a)
        cout << "sayinin en buyuk rakami sagdan 2.rakamdir.";
    else {
        cout << "sayinin en buyuk rakami sagdan 3.rakamdir.";
    }

    return 0;
}
