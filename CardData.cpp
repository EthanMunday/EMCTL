#include "CardData.h"

unsigned char CardData::GetType()
{
    return (id >> 6) & 3;
}

unsigned char CardData::GetSubtype()
{
    return (id >> 4) & 3;
}

unsigned char CardData::GetValue()
{
    return id & 15;
}

unsigned short CardData::GetRule()
{
    return rules;
}

void CardData::UpdateRule(unsigned char inRuleValue)
{
    rules = inRuleValue;
}

void CardData::UpdateRule(bool inRuleValue, unsigned char inRuleSlot)
{
    if (inRuleValue) rules |= 1 << inRuleSlot;
    else rules &= ~(1 << inRuleSlot);
}

CardData::CardData(unsigned char inType, unsigned char inSubType, unsigned char inValue)
{
    id = 0;
    rules = 0;
    id |= (inType << 6);
    id |= (inSubType << 4);
    id |= (inValue);
}
