#include"Stack.hpp"
#include"Queue.hpp"
#include<iostream>

int main()
{
	#ifdef DS_DEBUG
	std::cout << "请输入队列的最大长度:";
	#endif
	int size;
	std::cin >> size;
	Queue test(size);
	while (true)
	{

		std::cout << "请选择操作:"<<std::endl;
		std::cout << "1.元素入队" << std::endl;
		std::cout << "2.元素出队" << std::endl;
		std::cout << "3.队列判空" << std::endl;
		std::cout << "0.操作结束" << std::endl;
		int key;
		bool flag = false;
		std::cin >> key;
		switch (key)
		{
		case 1: {
			std::cout << "请输入要入队的元素:";
			int data;
			std::cin >> data;
			test.push(data);
			break; }
		case 2: {
			try{
				std::cout << "弹出元素为:" << test.pop() << std::endl;
			}catch(const std::out_of_range& e){
				std::cout << "Range Error:" << e.what() << std::endl;
			}
			break; }
		case 3: {
			if (test.IsEmpty() == true)
			{
				std::cout << "队列为空" << std::endl;
			}
			else
			{
				std::cout << "队列非空" << std::endl;

			}
			break;
		}
		default: flag=true;
		}
		if (flag == true)
		{
			break;
		}

	}

	return 0;
}