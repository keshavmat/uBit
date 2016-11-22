/* This is the base class from which each element of the uBit Educational Game is derived */


#ifndef uBitGameCategory_h
#define uBitGameCategory_h

#include <iostream>
#include <string>
class uBitGameCategory
{
	private:
		std::string name;
		static int num_categories;

	public:
		uBitGameCategory();
		uBitGameCategory(const std::string );
		void set_name(const std::string);
		std::string get_name(void);
		
};
		
#endif 
