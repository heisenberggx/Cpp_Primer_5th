# include <iostream>
// 求50~100的和
int main()
{
	int sum = 0, val = 50;
	//只要val的值小于等于100，while循环就会持续进行
	while (val <= 100)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
	return 0;
}