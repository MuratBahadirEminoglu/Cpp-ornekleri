#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    string ucgen;
    cout << "a, b, c uzunluklarini giriniz: ";
    cin>> a>> b>> c;

 if( (b+c<a && a<abs(b-c)) || (a+c<b && b<abs(a-c)) || (a+b<c && c<abs(a-b))){
   cout << "bu bir ücgen deðildir" ;
}
   else{
        cout << "bu bir ucgendir." << endl;
   if(a == b && b == c && c== b){
    ucgen = "eskenar ucgen ";
   }
    else if((a== b && a!= c && b!=c)||(a== c && b!= a &&  b!=c)||(b== c && b!= a &&  c!=a) ){
        ucgen = "ikizkenar ucgen ";
    }
    else{
        ucgen = "cesitkenar ucgen ";

    }
    cout << "bu ucgenin tipi: " << ucgen << endl;
   }

    return 0;
}
