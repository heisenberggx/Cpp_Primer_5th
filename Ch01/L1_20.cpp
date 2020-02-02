#include <iostream>
#include "Sales_item.h"
//读取销售记录，打印到标准输出
int main()
{
	Sales_item item;
	while (std::cin >> item)
	{
		std::cout << item << std::endl;
	}
	

	return 0;
}