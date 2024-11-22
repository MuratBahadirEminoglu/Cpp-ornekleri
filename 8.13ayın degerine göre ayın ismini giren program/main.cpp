#include <iostream>

using namespace std;

int main(){


 string dizi[100] = {"ocak","subat","mart","nisan","mayis","haziran","temmuz","agustos","eylul","ekim","kasim","aralik"};
 int ay;
 cout << " Ay degerini giriniz(1-12): ";
 cin >> ay;
 cout <<"--------------------------"<< endl;
 switch(ay){
    case 1:{
     cout << "girdiginiz deger " << dizi[0] <<" ayidir.";
        break;}
     case 2:{
     cout << "girdiginiz deger " << dizi[1] <<" ayidir.";
        break;}
     case 3:{
     cout << "girdiginiz deger " << dizi[2] <<" ayidir.";
        break;}
     case 4:{
     cout << "girdiginiz deger " << dizi[3] <<" ayidir.";
        break;}
     case 5:{
     cout << "girdiginiz deger " << dizi[4] <<" ayidir.";
        break;}
     case 6:{
     cout << "girdiginiz deger " << dizi[5] <<" ayidir.";
        break;}
     case 7:{
     cout << "girdiginiz deger " << dizi[6] <<" ayidir.";
        break;}
     case 8:{
     cout << "girdiginiz deger " << dizi[7] <<" ayidir.";
        break;}
     case 9:{
     cout << "girdiginiz deger " << dizi[8] <<" ayidir.";
        break;}
     case 10:{
     cout << "girdiginiz deger " << dizi[9] <<" ayidir.";
        break;}
     case 11:{
     cout << "girdiginiz deger " << dizi[10] <<" ayidir.";
        break;}
     case 12:{
     cout << "girdiginiz deger " << dizi[11] <<" ayidir.";
        break;}

    default: {
     cout << "yanlis giris";
     }
    return 0;
}
}
