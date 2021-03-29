#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include "Karina.hpp"
int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;


	//Sorcerer robert("Robert", "the Magnificent");
	//Victim jim("Jimmy");
	//Peon joe("Joe");
	//Karina kar("Karenovna");

	//std::cout << robert << jim << joe << kar;
	//robert.polymorph(jim);
	//robert.polymorph(joe);
	//robert.polymorph(kar);
	//return 0;
}
