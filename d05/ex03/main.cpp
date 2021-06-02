#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Intern  someRandomIntern;
	try
	{
		std::cout << '\n';
		Form	*scf = someRandomIntern.makeForm("shrubbery creation", "Home");
		if (scf)
		{
			std::cout << *scf;

			std::cout << '\n';
			Bureaucrat b0("bob", 150);
			b0.incrementGrade();
			std::cout << b0;

			std::cout << '\n';
			scf->beSigned(b0);

			std::cout << '\n';
			b0.executeForm(*scf);
			delete scf;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------------------------" << std::endl;

	try
	{
		std::cout << '\n';
		Form	*rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf)
		{
			std::cout << *rrf;

			std::cout << '\n';
			Bureaucrat b0("jim", 60);
			b0.incrementGrade();
			std::cout << b0;

			std::cout << '\n';
			rrf->beSigned(b0);

			std::cout << '\n';
			b0.executeForm(*rrf);
			delete rrf;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------------------------------------------------" << std::endl;

	try
	{
		std::cout << '\n';
		Form	*f0 = someRandomIntern.makeForm("unknown", "Sam");
		if (f0)
		{
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
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
