//
// Created by utec on 13/11/19.
//

#ifndef RRIVASHERENCIA_COPERBINARIA_H
#define RRIVASHERENCIA_COPERBINARIA_H


class COperBinaria {
    typedef int TipoEntero;
protected:

    TipoEntero num1 = 0;
    TipoEntero num2 = 0;
public:
    COperBinaria(TipoEntero num1, TipoEntero num2);
    ~COperBinaria();
    virtual TipoEntero calcular();
};

class CSuma:public COperBinaria{
public:
    CSuma( TipoEntero num1, TipoEntero num2);
    TipoEntero calcular() override ;
};

class CResta:public COperBinaria{
public:
    CResta(TipoEntero num1, TipoEntero num2);
    TipoEntero calcular() override ;
};


#endif //RRIVASHERENCIA_COPERBINARIA_H
