#include <iostream>

using namespace std;

int main()
{    setlocale(LC_ALL, "Turkish");
   int gun;
   string hafta[7] = {"pazartesi","sal�","�ar�amba","per�embe","Cuma","cumartesi","pazar"};
   cout << "g�n degerini giriniz(1-7)= ";
   cin >> gun;
   cout << "-----------------------------" << endl;
   switch(gun){
    case 1:
        cout <<"Girdi�iniz de�er " << hafta[0] << " ya aittir. " << endl;
        break;
    case 2:
        cout <<"Girdi�iniz de�er " << hafta[1] << " ya aittir. " << endl;
        break;
        case 3:
        cout <<"Girdi�iniz de�er " << hafta[2] << " ya aittir. " << endl;
        break;
        case 4:
        cout <<"Girdi�iniz de�er " << hafta[3] << " ye aittir. " << endl;
        break;
        case 5:
        cout <<"Girdi�iniz de�er " << hafta[4] << " ya aittir. " << endl;
        break;
        case 6:
        cout <<"Girdi�iniz de�er " << hafta[5] << " ye aittir. " << endl;
        break;
        case 7:
        cout <<"Girdi�iniz de�er " << hafta[6] << " a aittir. " << endl;
        break;

    default:
        cout << "yanl�� de�er ";}
    return 0;
}
