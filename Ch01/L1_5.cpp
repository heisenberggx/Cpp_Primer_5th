# include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The product of " << std::endl;
	std::cout << v1 << std::endl;
	std::cout << " and " << std::endl;
	std::cout << v2 << std::endl;
	std::cout << " is " << std::endl;
	std::cout << v1 * v2 << std::endl;
	return 0;
}