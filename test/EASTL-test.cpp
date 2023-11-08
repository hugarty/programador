#include "gtest/gtest.h"
#include <EASTL/vector.h>
#include <EASTL/fixed_vector.h>


TEST(EASTLTest, Simple_test) {
    eastl::fixed_vector<int,10,true> v ;
    int iarr[10]  ;
    for(int idx=0;idx<10;idx++){
        iarr[idx] = idx + 1 ;
        v.push_back( iarr[idx] ) ;
    }
}

