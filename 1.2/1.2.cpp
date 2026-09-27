#include <string>
#include <iostream>

class Tracer {
private:
	std::string name;
public:
	Tracer(std::string name_) :name(name_) {
		std::cout << name << " construct, address: " << this << std::endl;
	}

	~Tracer() {
		std::cout << name << " destroy, address: " << this << std::endl;
	}
};

void TestFunction() {
	Tracer test1("first");
	Tracer test2("second");
}

void TestBlocks() {
	Tracer test_outside1("test_outside1");

	{
		Tracer test_inside1("test_inside1");
		Tracer test_inside2("test_inside2");
	}

	Tracer test_outside2("test_outside2");
}

void TestNestedBlocks() {
	Tracer test_outside("test_outside");

	{
		Tracer test_block1("test_block1");
		{
			Tracer test_block2("test_block2");
			{
				Tracer test_block3("test_block3");
			}
		}
	}
}

void TestStatic() {
	int x = 0;
	static int y = 0;

	std::cout << "address x: " << &x << std::endl;
	std::cout << "address y: " << &y << std::endl;
}

void TestConditionalStatic(bool create) {
	if (create) { static int z = 0; std::cout << "address z: " << &z << std::endl; }
}

void Test() {
	int x = 0;
	
	{
		int y = 0;
		static int w = 0;
	}

	int x2 = 0;
}

int main() {
	TestFunction();
	TestFunction();

	TestBlocks();

	TestNestedBlocks();
	TestNestedBlocks();
	TestNestedBlocks();

	TestStatic();
	TestStatic();
	TestStatic();

	TestConditionalStatic(false);
	TestConditionalStatic(true);
	TestConditionalStatic(false);
	TestConditionalStatic(true);

	Test();
	Test();

	return 0;
}