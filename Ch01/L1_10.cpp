# include <iostream>
// ��ӡ10~0֮�������
int main()
{
	int val = 10;
	//ֻҪval��ֵС�ڵ���100��whileѭ���ͻ��������
	while (val >= 0)
	{
		std::cout << val << std::endl;
		--val;
	}
	
	return 0;
}