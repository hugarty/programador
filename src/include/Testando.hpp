#ifndef TEST_H
#define TEST_H

#include "Tipo1.h"

template <template <class> class ListaT>
class Testando {

    ListaT<Tipo1> listaTipo1_;

public:
    Testando()
    {
        listaTipo1_.Interage();
    }

    int Interage ()
    {
        return listaTipo1_.Interage();
    }
};

#endif