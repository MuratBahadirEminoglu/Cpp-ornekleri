#include <iostream>

using namespace std;

int main()
{
    int a,b,c,sayi;
    int yenisayi;
    cout << "sayiyi giriniz( en fazla 3 basamak): ";
    cin >> sayi;
     /*cout << "------------------------------------" << endl;
     if( sayi <100 && sayi >999){
        cout << "3basamakli sayi girdiniz." << endl; */
    a = sayi/100;
    b = (sayi/10)%10;
    c= sayi%10;






    if( a > b && b > c && a > c){
        cout <<" bu sayidan elde edilebilecek en kucuk sayi: "<<  c*100 + b*10 + a;
    }
    else if( b > a && b > c && a > c){
        cout <<" bu sayidan elde edilebilecek en kucuk sayi: "<<  c*100 + a*10 + b;
    }
    else if( b > c && c > a && b > c){
        cout <<" bu sayidan elde edilebilecek en kucuk sayi: "<<  c*100 + b*10 + a;
    }
    else if( c > a && b > a && c > b){
        cout <<" bu sayidan elde edilebilecek en kucuk sayi: "<<  a*100 + b*10 + c;
    }
    else if( a > c && c > b && a > b){
        cout <<" bu sayidan elde edilebilecek en kucuk sayi: "<<  b*100 + c*10 + a;
    }





        else if(( a== 0 )&& ( b > c)){
            cout <<" bu sayidan elde edilebilecek en kucuk sayi: "<< c*100 +b ;}
        else if(( a== 0 )&& ( c > b)){
            cout <<" bu sayidan elde edilebilecek en kucuk sayi: "<< b*100 +c ;}
        else if(( b== 0 )&& ( a > c)){
            cout <<" bu sayidan elde edilebilecek en kucuk sayi: "<< c*100 +a ;}
        else if(( b== 0 )&& ( c > a)){
            cout <<" bu sayidan elde edilebilecek en kucuk sayi: "<< a*100 +c ;}
        else if(( c== 0 )&& ( a > b)){
            cout <<" bu sayidan elde edilebilecek en kucuk sayi: "<< b*100 +a ;}
        else if(( c== 0 )&& ( b > a)){
            cout <<" bu sayidan elde edilebilecek en kucuk sayi: "<< a*100 +b ;}

   return 0; }

    /*else{
        cout << "3 basamakli sayi girmediniz tekrar deneyiniz.";
    }
*/






