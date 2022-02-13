#include "doglib/doglib.h"

#include <gtest/gtest.h>

TEST(DogTest, Doglib)
{
    const std::string expected = "Woof, woof!";
    EXPECT_EQ(expected, Bark());
}
