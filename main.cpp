#include <iostream>
#include "lib.h"
using namespace std;


int main() {

    char x, lettera = 0;
    cin >> x;

    if ( conversionecarattere(x, lettera) == true ){
        cout << lettera << endl;
    }else{
        cout << "errore" << endl;
    }


    return 0;
}
