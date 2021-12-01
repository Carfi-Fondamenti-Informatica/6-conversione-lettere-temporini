#include <iostream>
#include "lib.h"
using namespace std;


int main() {

    char q, lettera = 0;
    cin >> q;

    if ( conversionecarattere(q, lettera) == true ){
        cout << lettera << endl;
    }else{
        cout << "errore" << endl;
    }


    return 0;
}
