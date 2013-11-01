#include <iostream>
#include <gtest/gtest.h>
#include <food.hh>
using namespace std; 

TEST(FoodTest, zeikomi){
    Food myfood;
    myfood.set_price(200);

    EXPECT_EQ(210, myfood.zeikomi());
    EXPECT_EQ(300, myfood.value());
}

