#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		std::cout << '\n';
		Form	f0("F0-C67", 9, 5);
		std::cout << f0;

		std::cout << '\n';
		Bureaucrat b0("bob", 10);
		b0.incrementGrade();
		std::cout << b0;

		std::cout << '\n';
		b0.signForm(f0);

		std::cout << '\n';
		b0.decrementGrade();
		b0.decrementGrade();
		b0.signForm(f0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
