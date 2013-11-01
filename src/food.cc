#include "food.hh"
using namespace std;

int Food::zeikomi(){
    return  price * 21 / 20;
}

int Food::value(){
    if (price < 100){
        return price;
    } else { 
        return (price - 100) * 2 + 100;
    }
}

std::string Food::eat(){
    return "Yummy";
}

