#include <iostream>

using namespace std;

int main()
{    setlocale(LC_ALL, "Turkish");
   int gun;
   string hafta[7] = {"pazartesi","salý","çarþamba","perþembe","Cuma","cumartesi","pazar"};
   cout << "gün degerini giriniz(1-7)= ";
   cin >> gun;
   cout << "-----------------------------" << endl;
   switch(gun){
    case 1:
        cout <<"Girdiðiniz deðer " << hafta[0] << " ya aittir. " << endl;
        break;
    case 2:
        cout <<"Girdiðiniz deðer " << hafta[1] << " ya aittir. " << endl;
        break;
        case 3:
        cout <<"Girdiðiniz deðer " << hafta[2] << " ya aittir. " << endl;
        break;
        case 4:
        cout <<"Girdiðiniz deðer " << hafta[3] << " ye aittir. " << endl;
        break;
        case 5:
        cout <<"Girdiðiniz deðer " << hafta[4] << " ya aittir. " << endl;
        break;
        case 6:
        cout <<"Girdiðiniz deðer " << hafta[5] << " ye aittir. " << endl;
        break;
        case 7:
        cout <<"Girdiðiniz deðer " << hafta[6] << " a aittir. " << endl;
        break;

    default:
        cout << "yanlýþ deðer ";}
    return 0;
}
