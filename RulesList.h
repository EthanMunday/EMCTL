#pragma once
#include <memory>
class RulesList
{
	uint16_t data;

public:
	uint16_t GetRules();
	bool UpdateRule(uint16_t inRuleValue);
	bool UpdateRule(bool inRuleValue, uint8_t inRuleSlot);
	bool CompareRule(uint16_t inRuleValue);
	bool CompareRule(bool inRuleValue, uint8_t inRuleSlot);
};

