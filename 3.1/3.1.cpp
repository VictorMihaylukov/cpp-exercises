#include <iostream>
#include <cstddef>

struct VertexA
{
	char type;
	float x, y, z;
	int id;
};

struct VertexB
{
	float x, y, z;
	int id;
	char type;
};

struct VertexC
{
	int id;
	char type;
	float x, y, z;
};

int main() {
	//sizeof
	std::cout << "Size VertexA = " << sizeof(VertexA) << std::endl; //20
	std::cout << "Size VertexB = " << sizeof(VertexB) << std::endl; //20
	std::cout << "Size VertexC = " << sizeof(VertexC) << std::endl; //20

	//alignof
	std::cout << "Align VertexA = " << alignof(VertexA) << std::endl; //4
	std::cout << "Align VertexB = " << alignof(VertexB) << std::endl; //4
	std::cout << "Align VertexC = " << alignof(VertexC) << std::endl; //4

	//offsetof
	std::cout << "Offset type = " << offsetof(VertexA, type) << std::endl; //0
	std::cout << "Offset x = " << offsetof(VertexA, x) << std::endl; //4
	std::cout << "Offset y = " << offsetof(VertexA, y) << std::endl; //8
	std::cout << "Offset z = " << offsetof(VertexA, z) << std::endl; //12
	std::cout << "Offset id = " << offsetof(VertexA, id) << std::endl; //16

	std::cout << "Offset x = " << offsetof(VertexB, x) << std::endl; //0
	std::cout << "Offset y = " << offsetof(VertexB, y) << std::endl; //4
	std::cout << "Offset z = " << offsetof(VertexB, z) << std::endl; //8
	std::cout << "Offset id = " << offsetof(VertexB, id) << std::endl; //12
	std::cout << "Offset type = " << offsetof(VertexB, type) << std::endl; //16

	std::cout << "Offset id = " << offsetof(VertexC, id) << std::endl; //0
	std::cout << "Offset type = " << offsetof(VertexC, type) << std::endl; //4
	std::cout << "Offset x = " << offsetof(VertexC, x) << std::endl; //8
	std::cout << "Offset y = " << offsetof(VertexC, y) << std::endl; //12
	std::cout << "Offset z = " << offsetof(VertexC, z) << std::endl; //16

	return EXIT_SUCCESS;
}