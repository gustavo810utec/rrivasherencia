//
// Created by utec on 13/11/19.
//

#include "COperBinaria.h"


COperBinaria::TipoEntero COperBinaria::calcular() {
    return 0;
}

COperBinaria::COperBinaria(COperBinaria::TipoEntero num1,
        COperBinaria::TipoEntero num2):
        num1{num1},num2{num2}{

}


CSuma::CSuma(TipoEntero num1,
                TipoEntero num2):
               COperBinaria(num1,num2){

}

COperBinaria::TipoEntero CSuma::calcular() {
    return num1+num2;
}

CResta::CResta(TipoEntero num1,
             TipoEntero num2):
        COperBinaria(num1,num2){

}

COperBinaria::TipoEntero CResta::calcular() {
    return num1-num2;
}

