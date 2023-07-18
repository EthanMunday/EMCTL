#include "RulesList.h"

short RulesList::GetRules()
{
	return data;
}

bool RulesList::UpdateRule(uint16_t inRuleValue)
{
	data &= ~(65535);
	data |= inRuleValue;
	return true;
}

bool RulesList::UpdateRule(bool inRuleValue, uint8_t inRuleSlot)
{
	if (inRuleValue) data |= 1 << (inRuleSlot);
	else data &= ~(1 << (inRuleSlot));
	return true;
}

bool RulesList::CompareRule(uint16_t inRuleValue)
{
	return (data == inRuleValue);
}

bool RulesList::CompareRule(bool inRuleValue, uint8_t inRuleSlot)
{
	return (data >> inRuleSlot & 1) == inRuleValue;
}
