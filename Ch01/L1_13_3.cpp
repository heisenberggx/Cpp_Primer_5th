# include <iostream>
// 打印给定两个数之间范围内的整数
int main()
{
	std::cout << "Enter two numbers: " << std::endl;
	int num1 = 0, num2 = 0, a = 0, b = 0;
	std::cin >> num1 >> num2;
	if (num1 >= num2)
	{
		a = num2;
		b = num1;
	}
	else
	{
		a = num1;
		b = num2;
	}
	//只要val的值小于等于100，while循环就会持续进行
	for (;b >= a; --b)
	{
		std::cout << b << std::endl;
		
	}

	return 0;
}