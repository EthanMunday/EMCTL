#include "CardTemplate.h"


void CardTemplate::BindFunction(std::function<bool()> function, uint8_t index)
{
	ruleFunctions[index] = function;
}

void CardTemplate::UpdateRules()
{
	for (uint8_t x = 0; x < 10; x++)
	{
		if (ruleFunctions[x])
		{
			rules->UpdateRule(ruleFunctions[x](), x);
		}
	}
}

bool CardTemplate::TestFunction()
{
	return true;
}

CardTemplate::CardTemplate(uint8_t inType, uint8_t inSubType, uint8_t inValue)
{
	data = std::make_unique<CardData>(inType, inSubType, inValue);
	rules = std::make_unique<RulesList>();
	rules->UpdateRule(0);
	ruleFunctions = std::make_unique<std::function<bool()>[]>(10);
	BindFunction(std::bind(&CardTemplate::TestFunction, this), 1);
}
