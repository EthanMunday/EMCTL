#include "CardData.h"

uint8_t CardData::GetID()
{
    return values & 255;
}

uint8_t CardData::GetType()
{
    return (values >> 6) & 3;
}

uint8_t CardData::GetSubtype()
{
    return (values >> 4) & 3;
}

uint8_t CardData::GetValue()
{
    return values & 15;
}
CardData::CardData(uint8_t inType, uint8_t inSubType, uint8_t inValue)
{
    values = 0;
    values |= (inType << 6);
    values |= (inSubType << 4);
    values |= (inValue);
}
