#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Girl.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
//	std::cout << "--------------------------------\n\n" << std::endl;
//	Girl girl("Mila");
//	robert.polymorph(girl);
//	std::cout << girl << std::endl;	
}
