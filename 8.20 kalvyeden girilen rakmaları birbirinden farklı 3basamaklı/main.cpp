#include <iostream>

using namespace std;

int main()
{     setlocale(LC_ALL, "Turkish");
    int a,b,c,sayi;

    cout << "Sayýyý giriniz(3 basamaklý) = ";
    cin >> sayi;

     a = sayi/100;
     b = (sayi%100)/ 10;
     c = sayi %10;

    if( sayi >= 100 && sayi <=999){
            cout << " 3 basamakli sayi girdiniz" << endl;
        cout << "--------------------------" << endl;

     if( a > b && b > c && a > c)
        cout << "Sayýnýn en küçük rakamý soldan 3. rakamdýr.";

     else if(b>a && b > c && c>a)
        cout << "sayýnýn en küçük rakamý soldan 1. rakamdýr.";
    else if(a> b && a > c && c > b)
        cout << "sayýný en küçük rakamý soldan 2 .rakamdýr";

    }
    else{
        cout << "hatalý girdiniz. 3 basamaklý bir sayi giriniz.";
    }

    return 0;
}
