#include <iostream>

using namespace std;

int main()
{
    int yatirim,yillikgetiri;
    int yatirim1,yillikgetiri1;
    int yatirim2,yillikgetiri2;

    cout << "1.sermayesi ve yillik getirisini: ";
    cin >> yatirim >> yillikgetiri;
    cout << "2.sermayesi ve yillik getirisini: ";
    cin >> yatirim1 >> yillikgetiri1;
    cout << "3.sermayesi ve yillik getirisini: ";
    cin >> yatirim2 >> yillikgetiri2;
    int toplamgetiri = 15*yillikgetiri;
    int toplamgetiri1 = 15*yillikgetiri1;
    int toplamgetiri2 = 15*yillikgetiri2;

    int netkar =  toplamgetiri - yatirim;
    int netkar1 = toplamgetiri1 - yatirim1;
    int netkar2 = toplamgetiri2 - yatirim2;
cout << "------------------------" << endl;

    if(netkar > netkar1 && netkar> netkar1){
        cout << "en karli yatirim 1.yatirimdir." << endl;
        cout << "15 yil sonundaki toplam getiri= " << toplamgetiri << ", net kar= " << toplamgetiri - yatirim ;
    }
    else if(netkar1 > netkar && netkar1> netkar2){
        cout << "en karli yatirim 2.yatirimdir." << endl;
        cout << "15 yil sonundaki toplam getiri= " << toplamgetiri1 << ", net kar= " << toplamgetiri1 - yatirim1 ;
    }
     else if(netkar2 > netkar && netkar2> netkar1){
        cout << "en karli yatirim 2.yatirimdir." << endl;
        cout << "15 yil sonundaki toplam getiri= " << toplamgetiri2 << ", net kar= " << toplamgetiri2 - yatirim2 ;
    }










    return 0;
}
