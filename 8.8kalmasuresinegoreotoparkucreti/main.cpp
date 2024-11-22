#include <iostream>

using namespace std;

int main()
{
    float sure;
    float ucret;

    cout << "sureyi giriniz(saat): ";
    cin >> sure;

    if(sure < 1)
        ucret = 0.5;
    else if(1 <= sure && sure < 5)
        ucret = 2;
    else if(5 <= sure && sure < 10)
        ucret = 4;
    else if(sure > 10)
        ucret = 6.5 + sure*0.5;


    cout << "-----------------" << endl;
    cout << "Borcunuz = " << ucret <<"TL"<<  endl;

    return 0;
}
