#include "Unidade.h"

int Unidade::returnaUmDoisTres () {
    return 123;
}

int Unidade::returnValor () {
    return valor_;
}

Unidade::Unidade () {
    valor_ = 555;
}

Unidade::Unidade (const int& value) {
    valor_ = value;
}