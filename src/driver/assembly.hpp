#pragma once
#include "stdint.hpp"

extern "C" {

void _sldt(uint16_t* ldtr);
void _ltr(uint16_t tr);
void _str(uint16_t* tr);
void __lgdt(void* gdtr);

void _sgdt(void*);

}