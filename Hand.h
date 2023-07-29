#pragma once
#include "CardTemplate.h"
template <typename T>
class Hand 
{
    static_assert(std::is_same<T, CardTemplate>::value, "Template argument must be of type CardTemplate");

public:
    std::unique_ptr<std::vector<CardTemplate>> cards;

    Hand() 
    {
        cards = std::make_unique<std::vector<CardTemplate>>();
    }

    void UpdateCardRules()
    {
        for (CardTemplate card : cards) card.UpdateRules;
    }
};
