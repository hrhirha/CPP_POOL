#include <iostream>
#include <unistd.h>

class	Test
{
	public:
		int n;

		Test(void);
		~Test(void);

		void	fun(void);
};

Test::Test(void)
{
	std::cout << "Constructor Called" << std::endl;
}

Test::~Test(void)
{
	std::cout << "Destructor Called" << std::endl;
}

void	Test::fun(void)
{
	std::cout << "Test::fun(void) Called" << std::endl;
	std::cout << "this->n = " << this->n << std::endl;
}

int	main()
{
	Test t1;
	t1.n = 13;
	sleep(1);
	t1.fun();
	sleep(1);
	return (0);
}
