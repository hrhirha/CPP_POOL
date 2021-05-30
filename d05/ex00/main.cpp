#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		std::cout << "\n";
		Bureaucrat b0("bob", 70);
		b0.incrementGrade();
		std::cout << b0;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// grade's too Low
	try
	{ 
		std::cout << "\n";
		Bureaucrat b1("jim", 151);
		std::cout << b1;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// grade's too High
	try
	{ 
		std::cout << "\n";
		Bureaucrat b2("kriss", 0);
		std::cout << b2;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n";
		Bureaucrat b3("john", 150);
		b3.decrementGrade();
		std::cout << b3;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n";
		Bureaucrat b4("tom", 1);
		std::cout << b4;
		b4.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
