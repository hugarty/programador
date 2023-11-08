
#include "Testando.h"
#include "Tipo1.h"

template <template <class> class ListaT>
Testando<ListaT>::Testando() {
    listaTipo1_.Interage();
}

template <template <class> class ListaT>
int Testando<ListaT>::Interage() {
    return listaTipo1_.Interage();
}