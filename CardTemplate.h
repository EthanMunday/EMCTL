#pragma once
#include "CardData.h"
#include "RulesList.h"
#include <functional>

class CardTemplate
{
	std::unique_ptr<std::function<bool()>[]> ruleFunctions;

public:
	std::unique_ptr<CardData> data;
	std::unique_ptr<RulesList> rules;
	void BindFunction(std::function<bool()> function, uint8_t index);
	void UpdateRules();
	bool TestFunction();
	CardTemplate(uint8_t inType, uint8_t inSubType, uint8_t inValue);
};

