#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"

int	main(void)
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	Peasant kriss("Kriss");

	std::cout << robert << jim << joe << kriss;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(kriss);
	
	// this Throws an Error if Victim class has a non-virtual destructor

	// std::cout << "\n";
	// Victim *victim = new Peasant("peasant_victim");
	// std::cout << *victim;
	// robert.polymorph(*victim);
	// delete victim;
	// std::cout << "\n";

	return (0);
}