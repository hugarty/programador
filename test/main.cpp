#include "Unidade.h"
#include "Lista.hpp"
#include "Testando.hpp"
#include "Tipo1.h"

#include <iostream>


int main(int argc, char **argv) {
    Testando<Lista> brincou;
    std::cout << brincou.Interage() << "\n";
}
