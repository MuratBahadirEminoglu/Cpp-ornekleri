#include <iostream>

using namespace std;

int main()
{
   int saat;
   string mesaj;
 cout << "Gunun  saatini giriniz:";
 cin >> saat;

    if(saat < 0 && saat > 24 )
        cout << "saat 0-24 arasindadir tekrar deneyiniz.";

  else{
   switch(saat){
    case 0 ... 5:
     mesaj = "iyi uykular";
     break;
    case 6 ... 10:
     mesaj = "günaydýn";
     break;
     case 11 ... 16:
     mesaj = "iyi gunler ";
     break;
     case 17 ... 21:
     mesaj = "iyi aksamlar";
     break;
     case 22 ... 24:
     mesaj = "iyi geceler";
     break;
     default:
        mesaj = "iyi geceler ";
        break;
     }
     cout << "---------------------" << endl;
     cout << mesaj ;
  }
    return 0;
}
