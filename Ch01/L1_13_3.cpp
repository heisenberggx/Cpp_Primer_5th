# include <iostream>
// ��ӡ����������֮�䷶Χ�ڵ�����
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
	//ֻҪval��ֵС�ڵ���100��whileѭ���ͻ��������
	for (;b >= a; --b)
	{
		std::cout << b << std::endl;
		
	}

	return 0;
}