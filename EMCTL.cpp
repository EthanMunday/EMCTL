#include <iostream>
#include "CardData.h"

int main()
{
    CardData x = CardData(0, 1, 15);

    std::cout << (int)x.GetType() << std::endl;
    std::cout << (int)x.GetSubtype() << std::endl;
    std::cout << (int)x.GetValue() << std::endl;
}