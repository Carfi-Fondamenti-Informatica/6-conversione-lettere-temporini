#include"lib.h"

int conversionecarattere(char c, char &risultato){
    bool carattere;

    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
        carattere = true;

        if(c >= 'A' && c <= 'Z'){
            risultato = c +32;
        }
        if(c >= 'a' && c <= 'z'){
            risultato= c -32;
        }

    }else{
        carattere = false;
    }
    return carattere;
}
