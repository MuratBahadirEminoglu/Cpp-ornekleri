#include <iostream>

using namespace std;

int main()
{
    string kur;
    int dogru , yanlis;
    cout << "dogru soru sayisini giriniz = ";
    cin >> dogru;
    cout << "yanlis soru sayisini giriniz = ";
    cin >> yanlis;

  while(yanlis >0){
    yanlis-=4;
    dogru--;
  }
  /*for( yanlis ; yanlis > 0 ; yanlis-=4) // bunu while ile yapmak istiyorum
    dogru--; */
int N = dogru;
    if( N < 10)
        kur = "beginner";
    else if (10 <= N && N < 30)
        kur = "Elemeantry";
    else if( 30 <= N && N < 50)
        kur = "preintermediate";
    else if(50<= N && N < 70)
        kur = "Intermediate";
    else{
        kur = "upper";
    }
    cout << "-----------------" << endl;
    cout << "net sayisi= "   << N << endl;
    cout << "kurunuz= " << kur << endl;
    return 0;
}
