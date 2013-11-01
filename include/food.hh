#ifndef __recov4__food__
#define __recov4__food__

#include <iostream>
#include <string>

class Food{
private:
    int price;
public:
    void set_price(int myprice){
        price = myprice;
    }
    int get_price(){
        return price;
    }
    int zeikomi();
    int value();
    std::string eat();
};

#endif /* defined(__recov4__food__) */

