#include <iostream>
#include "Sales_item.h"
//统计每本书有几条销售记录
int main()
{
	Sales_item total, trans;
	if (std::cin >> total)
	{
		int cnt = 1;
		while (std::cin >> trans)
		{
			

			if (trans.isbn() == total.isbn())
			{
				
				++cnt;
			}
			else
			{
				std::cout << total << " occurs " << cnt << " times" << std::endl;
				total = trans;
				cnt = 1;


			}
			
		}
		std::cout << total << " occurs " << cnt << " times" << std::endl;
	}

	
	return 0;
}