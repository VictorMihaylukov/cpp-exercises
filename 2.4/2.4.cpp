#include <iostream>
#include <vector>

struct Vertex
{
	float x, y, z;
};

int main() {
	std::vector<Vertex> vertices(4);

	//заполняем значениями
	for (int i = 0; i < vertices.size(); i++)
	{
		vertices[i] = { i * 1.0f, i * 2.0f, i * 3.0f };
	}

	vertices.reserve(5);

	std::cout << "Size of vertex = " << sizeof(Vertex) << std::endl;
	std::cout << "Size of vertices = " << vertices.size() << std::endl;
	std::cout << "Capacity of vertices = " << vertices.capacity() << std::endl;
	std::cout << "Address of first element = " << vertices.data() << std::endl;
	std::cout << "Address of vertices = " << &vertices << std::endl;

	for (int i = 0; i < vertices.size(); i++)
	{
		std::cout << "Index of element = " << i << std::endl;
		std::cout << "Address of element = " << &vertices[i] << std::endl;

		if (i == 0) {
			std::cout << "Address of .data() = " << vertices.data() << std::endl;
		}
		else
		{
			std::cout << "Distance between 2 elemnets in elements = " << &vertices[i] - &vertices[i - 1] << std::endl;
			std::cout << "Distance between 2 elements in bytes = " << reinterpret_cast<const char*>(&vertices[i]) - reinterpret_cast<const char*>(&vertices[i-1])
				<< std::endl;
		}
		

	}
	
	std::cout << std::endl;

	std::vector<int> reallocationVector;
	reallocationVector.reserve(2);

	for (int i = 0; i < 3; i++)
	{
		std::cout << "For " << i << " index:\n";

		reallocationVector.push_back(i);

		std::cout << reallocationVector.size() << std::endl;
		std::cout << reallocationVector.capacity() << std::endl;
		std::cout << reallocationVector.data() << std::endl;
	}

	return EXIT_SUCCESS;
}