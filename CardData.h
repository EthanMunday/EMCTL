#pragma once
#include <algorithm>

class CardData
{
	uint8_t values;
public:
	uint8_t GetID();
	uint8_t GetType();
	uint8_t GetSubtype();
	uint8_t GetValue();
	CardData(uint8_t inType, uint8_t inSubType, uint8_t inValue);
};

