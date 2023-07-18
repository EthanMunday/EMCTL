#include "CardTemplate.h"

short CardTemplate::GetRules()
{
	return *rules >> 8;
}

bool CardTemplate::UpdateRule(uint16_t inRuleValue)
{
	*rules &= ~(65535);
	*rules |= inRuleValue;
	return true;
}

bool CardTemplate::UpdateRule(bool inRuleValue, uint8_t inRuleSlot)
{
	if (inRuleValue) *rules |= 1 << (inRuleSlot);
	else *rules &= ~(1 << (inRuleSlot));
	return true;
}

CardTemplate::CardTemplate(uint8_t inType, uint8_t inSubType, uint8_t inValue)
{
	data = std::make_unique<CardData>(inType, inSubType, inValue);
	rules = std::make_unique<uint16_t>();
	*rules = 0;
}
