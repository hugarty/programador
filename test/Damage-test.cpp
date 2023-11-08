#include "gtest/gtest.h"
#include "Unidade.h"
#include "Lista.h"
#include "Testando.h"
#include "Tipo1.h"

TEST(Unidade, Confirma_funcionamento) {
    //arrange
    //act
    Unidade a;
    //assert
    EXPECT_EQ (a.returnaUmDoisTres(), 123);
}

TEST(ZICA, Confirma_Funcionamento) {

    Testando<Lista> brincou;
    EXPECT_EQ (brincou.Interage(), 123);
}