#include <iostream>

using namespace std;

int main()
{  int alespuan, yabancidilnotu, mezuniyetortnot;
        cout <<" ales puaninizi giriniz:";
    cin >> alespuan;
        cout <<"yabanci dil notunu giriniz:";
    cin >>  yabancidilnotu;
        cout <<"mezuniyet not ortalamasini giriniz:";
    cin >> mezuniyetortnot;

    int siralamapuani = ((50*alespuan)+(25*yabancidilnotu)+(25*mezuniyetortnot))/100;
	cout << "-----------------------------------------" << endl;
    cout << "siralama puaniniz: " << siralamapuani << endl;
    if(siralamapuani<60)
        cout << "siralamaya giremedez.";
    else{
        cout << "siralamaya girebilir";
    }

    return 0;
}
