#include <iostream>

using namespace std;

int main()
{
    char harfnotu[5] = {'A','B','C','F','\0'};
    setlocale(LC_ALL, "Turkish");
    int basarinotu;
    float sinifortalamasi, standartsapma;

    cout << "Baþarý notu , sýnýf ortalamasý ve standart sapmayý giriniz: ";
    cin >> basarinotu >> sinifortalamasi >> standartsapma;
    float standartnot= (basarinotu-sinifortalamasi)/standartsapma;

    cout << "--------------------------------------" << endl;

    if(standartnot >= 2 ){

        cout << "standart not = " << standartnot << endl;
        cout << "harf notu = " << harfnotu[0];}
    else if( standartnot >= 1 && standartnot < 2 ){
        cout << "standart not = " << standartnot << endl;
        cout << "harf notu = " << harfnotu[1];}
    else if(standartnot >=  0 && standartnot < 1){
        cout << "standart not = " << standartnot << endl;
        cout << "harf notu = " << harfnotu[2];}
    else if ( standartnot < 0){
        cout << "standart not = " << standartnot << endl;
        cout << "harf notu = " << harfnotu[3];}


  return 0;
    }


