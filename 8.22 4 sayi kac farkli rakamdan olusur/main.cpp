#include <iostream>

using namespace std;

int main()
{
    int sayi,a,b,c,d;
    cout << "sayiyi giriniz: ";
    cin >> sayi;

    a = sayi/1000;
    b = (sayi/100)%10;
    c= (sayi%100)/10;
    d = sayi%10;


cout << "--------------------------------" << endl;

    if(a == b && b == c && c == d ){
        cout << "girilen sayi icerisinde 0 farkli tam sayi vardir" ;}

    else if( (a==b && b!=c && b!= d) ||(a!=b && b==c && b!= d) || (a!=b && b!=c && b== d)){
        cout << "girilen sayi icerisinde 2 farkli sayi vardir";
}
    /* bu tamam */ else if( (a!= b && b == c && c == d && b==c) || (a== d && b != c && c == d && a==c) || (a== b && b == d && c != d && a==d) || (a== b && a == c && c == b && d!=c ) )
        cout << "girilen sayi icerisinde 1 farkli sayi vardir";
    else{
        cout << "girilen sayi içerisinde 4 farkli sayi girdiniz.";
    }

        return 0;
}

