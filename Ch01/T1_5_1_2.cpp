#include <iostream>
#include "Sales_item.h"
//Sales_item对象的加法
//这个程序说item1和item2没有定义
int main()
{
	Sales_item item1，item2;
	std::cin >> item1 >> item2; //读取一对交易记录
	std::cout << item1 + item2 << std::cout;

	return 0;
}