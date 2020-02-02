# include <iostream>
// 打印10~0之间的整数
int main()
{
	int val = 10;
	//只要val的值小于等于100，while循环就会持续进行
	while (val >= 0)
	{
		std::cout << val << std::endl;
		--val;
	}
	
	return 0;
}