#include <iostream>
#include <vector>

class Test {
private:
	int id;
public:
	Test(int id) : id(id)
	{
		std::cout
			<< "Construct: " << id
			<< " this=" << this
			<< '\n';
	}

	~Test()
	{
		std::cout
			<< "Destruct:  " << id
			<< " this=" << this
			<< '\n';
	}

	Test(const Test& other)
		: id(other.id)
	{
		std::cout
			<< "Copy: " << other.id
			<< " from=" << &other
			<< " to=" << this
			<< '\n';
	}
};

int main() {
	std::cout << "start of scope" << std::endl;

	{
		Test a(1);

		Test* p1 = new Test(2);

		Test* p2 = new Test[3]{ Test(3), Test(4), Test(5) };

		std::vector<Test> tests;
		Test b(6);
		Test c(7);
		Test d(8);
		tests.emplace_back(b);
		tests.emplace_back(c);
		tests.emplace_back(d);

		delete p1;
		std::cout << "after delete p1" << std::endl;

		delete[] p2;
		std::cout << "after delete[] p2" << std::endl;

	}

	std::cout << "scope is ended" << std::endl;



}