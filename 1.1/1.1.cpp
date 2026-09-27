#include <iostream>
#include <cstdint>
#include <limits>

int main() {
	//вывод размеров типов данных
	std::cout << "bool: " << sizeof(bool) << " bytes\n";
	std::cout << "char: " << sizeof(char) << " bytes\n";
	std::cout << "short: " << sizeof(short) << " bytes\n";
	std::cout << "int: " << sizeof(int) << " bytes\n";
	std::cout << "long: " << sizeof(long) << " bytes\n";
	std::cout << "long long: " << sizeof(long long) << " bytes\n";

	std::cout << "float: " << sizeof(float) << " bytes\n";
	std::cout << "double: " << sizeof(double) << " bytes\n";

	std::cout << "std::int32_t: " << sizeof(std::int32_t) << " bytes\n";
	std::cout << "std::uint32_t: " << sizeof(std::uint32_t) << " bytes\n";
	std::cout << "std::size_t: " << sizeof(std::size_t) << " bytes\n";

	std::cout << std::endl;

	//лимиты типов данных
	/*int
	unsigned int
	std::int32_t
	std::uint32_t
	float
	double*/

	std::cout << "int: min = " << std::numeric_limits<int>::min() << "; max = " << std::numeric_limits<int>::max() << std::endl;
	std::cout << "unsigned int: min = " << std::numeric_limits<unsigned int>::min() << "; max = " << std::numeric_limits<unsigned int>::max() << std::endl;
	std::cout << "std::int32_t: min = " << std::numeric_limits<std::int32_t>::min() << "; max = " << std::numeric_limits<std::int32_t>::max() << std::endl;
	std::cout << "std::uint32_t: min = " << std::numeric_limits<std::uint32_t>::min() << "; max = " << std::numeric_limits<std::uint32_t>::max() << std::endl;

	std::cout << "float: min = " << std::numeric_limits<float>::min() << "; max = " << std::numeric_limits<float>::max() << "; lowest = " << std::numeric_limits<float>::lowest() << std::endl;
	std::cout << "double: min = " << std::numeric_limits<double>::min() << "; max = " << std::numeric_limits<double>::max() << "; lowest = " << std::numeric_limits<double>::lowest() << std::endl;

	std::cout << std::endl;

	//преобразования
	unsigned int a = -1;
	unsigned int b = -2;
	unsigned int c = 0;

	std::cout << "c-- = " << c-- << std::endl;

	int d = -1;
	unsigned int e = d;

	std::cout << "e = " << e << std::endl;

	//доп
	int x = -1;
	unsigned int y = 1;

	std::cout << "x < y: " << (x < y) << std::endl;

    return 0;
}