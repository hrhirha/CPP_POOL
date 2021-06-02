#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		std::cout << '\n';
		Form	*f0 = new ShrubberyCreationForm("SCF-0");
		std::cout << *f0;

		std::cout << '\n';
		Bureaucrat b0("bob", 150);
		b0.incrementGrade();
		std::cout << b0;

		std::cout << '\n';
		f0->beSigned(b0);

		std::cout << '\n';
		b0.executeForm(*f0);
		delete f0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------------------------" << std::endl;

	try
	{
		std::cout << '\n';
		Form	*f0 = new RobotomyRequestForm("RRF-0");
		std::cout << *f0;

		std::cout << '\n';
		Bureaucrat b0("jim", 60);
		b0.incrementGrade();
		std::cout << b0;

		std::cout << '\n';
		f0->beSigned(b0);

		std::cout << '\n';
		b0.executeForm(*f0);
		delete f0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------------------------" << std::endl;

	try
	{
		std::cout << '\n';
		Form	*f0 = new PresidentialPardonForm("PPF-0");
		std::cout << *f0;

		std::cout << '\n';
		Bureaucrat b0("tom", 5);
		b0.incrementGrade();
		std::cout << b0;

		std::cout << '\n';
		f0->beSigned(b0);

		std::cout << '\n';
		b0.executeForm(*f0);
		delete f0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
