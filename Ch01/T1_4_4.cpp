#include <iostream>
// ͳ��������ÿ��ֵ���������˼���
int main()
{
	// currVal����������ͳ�Ƶ��������ǽ��������ֵ����val
	int currVal = 0, val = 0;
	//��ȡ��һ��������ȷ��ȷʵ�����ݿ��Դ���
	if (std::cin >> currVal)
	{
		int cnt = 1;	//�����������ڴ���ĵ�ǰֵ�ĸ���
		while (std::cin >> val)	//��ȡʣ�����
		{
			if (currVal == val)
				++cnt;
			else 
			{
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
	
		}
		std::cout << currVal << " ocurrs " << cnt << " times" << std::endl;
	}
	return 0;
}