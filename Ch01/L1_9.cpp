# include <iostream>
// ��50~100�ĺ�
int main()
{
	int sum = 0, val = 50;
	//ֻҪval��ֵС�ڵ���100��whileѭ���ͻ��������
	while (val <= 100)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
	return 0;
}