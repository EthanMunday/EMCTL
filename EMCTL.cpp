#include <iostream>
#include "CardData.h"
#include "CardTemplate.h"

int main()
{
    CardData x = CardData(0, 1, 15);
    std::cout << (int)x.GetType() << std::endl;
    std::cout << (int)x.GetSubtype() << std::endl;
    std::cout << (int)x.GetValue() << std::endl;

    CardTemplate y = CardTemplate(0, 1, 15);
    std::cout << (int)y.rules->GetRules() << std::endl;
    y.UpdateRules();
    std::cout << (int)y.rules->GetRules() << std::endl;
}