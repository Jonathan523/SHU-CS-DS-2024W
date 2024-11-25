#include"SequenceList.cpp"
#include"LinkList.cpp"


class test
{
private:
	int a, b, c;  
public:
	test() :a(0), b(0), c(0) {}
	test(int a, int b, int c) :a(a), b(b), c(c){}
	friend std::ostream& operator<<(std::ostream& os, const test& abc);
};

std::ostream& operator<<(std::ostream& os, const test& abc)
{
	os << '(' <<abc. a << ',' << abc.b << ',' << abc.c << ')';
	return os;
}


int main()
{
	test array1[5] = { test(1,2,3),test(4,5,6),test(7,8,9),test(10,11,12),test(12,13,14)};
	double array2[7] = {1.7,2.3,3.7,4.0,1.0,0.0,3.3};  
	SequenceList<test> List1(5, array1);
	SequenceList<double> List2(7, array2);
	LinkList<int> List3;
	LinkList<test> List4;
	#ifdef DS_DEBUG
	std::cout << "请输入List3(无头结点单链表)的元素个数:" << std::endl;
	#endif
	int size; std::cin >> size;
	#ifdef DS_DEBUG
	std::cout << "请输入List3(无头结点单链表)的元素:" << std::endl;
	#endif
	int cnt = 0;
	while(cnt<size)
	{	
		int a; std::cin >> a;
		List3.append(a);
		cnt++;
	}
	List4.append(test(1, 2, 3));
	List4.append(test(4, 5, 6));
	List4.append(test(7, 8, 9));
	List4.append(test(10, 11, 12));
	List4.append(test(12, 13, 14));
	std::cout <<"List1:"<< List1 <<'\n';
	std::cout <<"List2:"<< List2 <<'\n';
	std::cout <<"List3:"<< List3 <<'\n';
	std::cout <<"List4:"<< List4 <<'\n';
	reverse(List1);
	reverse(List2);
	reverse(List3);   
	reverse(List4);
	std::cout << "逆置前\n";
	std::cout <<"-------------------------------------------------------------\n";
	std::cout << "逆置后\n";
	std::cout << "List1:" << List1 << '\n';
	std::cout << "List2:" << List2 << '\n';
	std::cout << "List3:" << List3 << '\n';
	std::cout << "List4:" << List4 << '\n';
	return 0;
}