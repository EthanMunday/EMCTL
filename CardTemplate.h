#pragma once
#include "CardData.h"
#include <string>
#include <memory>

class CardTemplate
{
	std::unique_ptr<CardData> data;
	std::unique_ptr<uint16_t> rules;
public:
	short GetRules();
	bool UpdateRule(uint16_t inRuleValue);
	bool UpdateRule(bool inRuleValue, uint8_t inRuleSlot);

	CardTemplate(uint8_t inType, uint8_t inSubType, uint8_t inValue);
};

