#include "lib1.h"
#include <gtest/gtest.h>

#include <cstdint>

TEST(Lib1, lib1)
{
    ASSERT_EQ(0, foo(-1,1));
}
