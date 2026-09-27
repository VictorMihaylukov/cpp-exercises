#include "math.h"
#include <iostream>

int main() {
	//переменные
	int a = 100;
	int b = 50;

	//результаты
	int result_add = Add(a, b);
	int result_subtract = Subtract(a, b);
	int result_multiply = Multiply(a, b);
	int result_divide = Divide(a, b);

	//вывод результатов
	std::cout << "Add: " << result_add << std::endl;
	std::cout << "Subtract: " << result_subtract << std::endl;
	std::cout << "Multiply: " << result_multiply << std::endl;
	std::cout << "Divide: " << result_divide << std::endl;

	return 0;
}
