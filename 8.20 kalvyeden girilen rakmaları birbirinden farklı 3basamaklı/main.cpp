#include <iostream>

using namespace std;

int main()
{     setlocale(LC_ALL, "Turkish");
    int a,b,c,sayi;

    cout << "Say�y� giriniz(3 basamakl�) = ";
    cin >> sayi;

     a = sayi/100;
     b = (sayi%100)/ 10;
     c = sayi %10;

    if( sayi >= 100 && sayi <=999){
            cout << " 3 basamakli sayi girdiniz" << endl;
        cout << "--------------------------" << endl;

     if( a > b && b > c && a > c)
        cout << "Say�n�n en k���k rakam� soldan 3. rakamd�r.";

     else if(b>a && b > c && c>a)
        cout << "say�n�n en k���k rakam� soldan 1. rakamd�r.";
    else if(a> b && a > c && c > b)
        cout << "say�n� en k���k rakam� soldan 2 .rakamd�r";

    }
    else{
        cout << "hatal� girdiniz. 3 basamakl� bir sayi giriniz.";
    }

    return 0;
}
