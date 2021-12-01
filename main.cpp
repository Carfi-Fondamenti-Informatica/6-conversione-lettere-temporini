#include <iostream>
#include "lib.h"
using namespace std;


int main() {

    char a, lettera = 0;
    cin >> a;

    if ( conversionecarattere(a, lettera) == true ){
        cout << lettera << endl;
    }else{
        cout << "errore" << endl;
    }


    return 0;
}
