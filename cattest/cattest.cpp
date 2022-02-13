#include "catlib/catlib.h"

#include <gtest/gtest.h>

TEST(CatTest, Catlib)
{
    Cat cat{"Dandilo"};
    EXPECT_EQ(cat.Name(), "Dandilo");
}