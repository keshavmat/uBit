
#include <iostream>
#include <string>

#include "uBitGameCategory.h"

uBitGameCategory::uBitGameCategory(const std::string  _name)
{
	name = _name;
}

uBitGameCategory::uBitGameCategory(void)
{
	name = "Null";
}

void uBitGameCategory::set_name(std::string _name)
{
	name = _name;
} 

std::string uBitGameCategory::get_name(void)
{
	return name;
}

