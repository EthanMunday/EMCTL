#pragma once
class CardData
{
	unsigned char id;
	unsigned short rules;

public:
	unsigned char GetType();
	unsigned char GetSubtype();
	unsigned char GetValue();
	unsigned short GetRule();
	void UpdateRule(unsigned char inRuleValue);
	void UpdateRule(bool inRuleValue, unsigned char inRuleSlot);
	CardData(unsigned char inType, unsigned char inSubType, unsigned char inValue);
};

