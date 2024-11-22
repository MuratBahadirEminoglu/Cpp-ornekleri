// buyuk-kucuk harf cevirme.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
void kucuk(char* a);
void buyuk(char* a);
void donustur();
int main()
{
    donustur();
}

void kucuk(char* a) {
    *a += 32;
}
void buyuk(char* a) {
    *a += 32;
}
void donustur() {
    char x;
    cout << "harf gir: " << endl;
    cin >> x;
    if (x >= 'A' && x <= 'Z') {
        kucuk(&x);
    }
    else {
        buyuk(&x);
    }
    cout << x << endl;
}

