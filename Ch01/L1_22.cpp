#include <iostream>
#include "Sales_item.h"
//读多个相同ISBN的对象，并输出他们的和
int main()
{
	Sales_item total, trans;
	if (std::cin >> total)
	{
		while (std::cin >> trans)
		{
			if (total.isbn() == trans.isbn())
			{
				total += trans;
			}
			else
			{
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
	}
	else
	{
		std::cerr << "That is all" << std::endl;
		return -1;
	}

	return 0;
}