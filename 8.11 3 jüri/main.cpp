#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    float a1,b1,c1;
    float a2 ,b2,c2;
    float topa,topb,topc;
    cout << "1. Jurinin yarismaci puanlari: ";
    cin >> a>> b >> c;
      cout << "2. Jurinin yarismaci puanlari: ";
    cin >> a1>> b1 >> c1;
      cout << "3. Jurinin yarismaci puanlari: ";
    cin >> a2>> b2>> c2;

    topa = a+ a1 + a2;
    topb = b+ b1+ b2;
    topc = c+ c1 +c2;
    cout << "----------------------" << endl;
    if( topa > topb && topa > topc){
        cout << "en iyi 1.yarismacidir." << endl;
        cout << "ortalama puan: " << topa/3 << endl;
}
    else if( topb > topa && topb > topc){
        cout << "en iyi 2.yarismacidir." << endl;
        cout << "ortalama puan: " << topb/3 << endl;
}
    else if( topc > topb && topc > topb){
        cout << "en iyi 3.yarismacidir." << endl;
        cout << "ortalama puan: " << topc/3 << endl;}
   else if( topa == topb && topb ==  topc && topc = topa)
   {
        cout << "Puanlar esit, herhangi bir yarismaci secilsin." << endl;
        cout << "ortalama puan: " << (topa + topb + topc) / 9 << endl;
    }
    return 0;
}
