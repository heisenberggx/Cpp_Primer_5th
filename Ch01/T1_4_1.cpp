# include <iostream>
// 求1~10的和
int main()
{
	int sum = 0, val = 1;
	//只要val的值小于等于10，while循环就会持续进行
	while (val <= 10)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}