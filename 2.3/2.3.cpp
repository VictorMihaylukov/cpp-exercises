#include <iostream>

struct Vertex
{
	float x;
	float y;
	float z;
};

void ByValue(Vertex v)
{
	v.x = 10;

	std::cout << "By value address: " << & v << std::endl;
}

void ByReference(Vertex& v)
{
	v.x = 20;

	std::cout << "By reference address: " << &v << std::endl;
}

void ByConstReference(const Vertex& v)
{
	std::cout << v.x << std::endl;

	std::cout << "By const reference address: " << &v << std::endl;
}
void ByPointer(Vertex* v)
{
	if (v != nullptr) v->x = 30;

	std::cout << "By pointer address: " << &v << std::endl;
}

int main() {
	Vertex vertex{ 1.0f, 2.0f, 3.0f };

	std::cout << "original address: " << &vertex << std::endl;

	ByValue(vertex);
	std::cout << vertex.x << std::endl;

	ByReference(vertex);
	std::cout << vertex.x << std::endl;

	ByConstReference(vertex);
	std::cout << vertex.x << std::endl;

	Vertex* ptr = &vertex;
	ByPointer(ptr);
	std::cout << vertex.x << std::endl;

	return 0;
}