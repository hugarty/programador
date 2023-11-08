#include "gtest/gtest.h"

void* operator new[](size_t size, const char* pName, int flags, unsigned     debugFlags, const char* file, int line) 
{
    return new uint8_t[size];
}  

void* operator new[](size_t size, size_t alignment, size_t alignmentOffset, const char* pName, int flags, unsigned debugFlags, const char* file, int line) 
{
    return new uint8_t[size];
}  

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
