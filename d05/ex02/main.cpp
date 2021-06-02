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
		Form	*f0 = new ShrubberyCreationForm("Home");
		std::cout << *f0;

		std::cout << '\n';
		Bureaucrat b0("bob", 136);
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
		Form	*f0 = new RobotomyRequestForm("Creg");
		std::cout << *f0;

		std::cout << '\n';
		Bureaucrat b0("jim", 46);
		b0.incrementGrade();
		std::cout << b0;

		std::cout << '\n';
		f0->beSigned(b0);

		std::cout << '\n';
		b0.executeForm(*f0);
		std::cout << '\n';
		b0.executeForm(*f0);
		std::cout << '\n';
		b0.executeForm(*f0);
		std::cout << '\n';
		b0.decrementGrade();
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
		Form	*f0 = new PresidentialPardonForm("john");
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
