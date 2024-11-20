#include"SequenceList.cpp"
#include"LinkList.cpp"


class Test
{
private:
	int a, b, c;
public:
	Test() :a(0), b(0), c(0) {}
	Test(int a, int b, int c) :a(a), b(b), c(c){}
	friend std::ostream& operator<<(std::ostream& os, const Test& abc);
};

std::ostream& operator<<(std::ostream& os, const Test& abc)
{
	os << '(' <<abc. a << ',' << abc.b << ',' << abc.c << ')';
	return os;
}
int main()
{
	Test array1[5] = { Test(1,2,3),Test(4,5,6),Test(7,8,9),Test(10,11,12),Test(12,13,14)};
	double array2[7] = {1.7,2.3,3.7,4.0,1.0,0.0,3.3};  
	SequenceList<Test> List1(5, array1);
	SequenceList<double> List2(7, array2);
	LinkList<int> List3;
	LinkList<Test> List4;
	List3.append(1);
	List3.append(2);
	List3.append(3);
	List3.append(4);
	List3.append(5);
	List4.append(Test(1, 2, 3));
	List4.append(Test(4, 5, 6));
	List4.append(Test(7, 8, 9));
	List4.append(Test(10, 11, 12));
	List4.append(Test(12, 13, 14));
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