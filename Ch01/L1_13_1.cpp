# include <iostream>
// 50~100	���
int main()
{
	int sum = 0;
	//��1�ӵ�10
	for (int val = 50; val <= 100; ++val)
		sum += val;
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

	return 0;
}