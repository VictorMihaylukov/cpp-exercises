#include <iostream>

enum class BufferUsage : uint8_t {
	Vertex = 1,
	Index = 1 << 1,
	Constant = 1 << 2,
};

bool HasFlag(uint8_t usage, BufferUsage flag) {
	return (usage & static_cast<uint8_t>(flag)) != 0;
}

int main() {
	uint8_t usage = static_cast<uint8_t>(BufferUsage::Vertex) | static_cast<uint8_t>(BufferUsage::Index); // Vertex and Index
	
	//out usage
	std::cout << "Usage" << std::endl;
	std::cout << "Vertex: " << HasFlag(usage, BufferUsage::Vertex) << std::endl;
	std::cout << "Index: " << HasFlag(usage, BufferUsage::Index) << std::endl;
	std::cout << "Constant: " << HasFlag(usage, BufferUsage::Constant) << std::endl;
	std::cout << std::endl;

	uint8_t usage2 = static_cast<uint8_t>(BufferUsage::Vertex) | static_cast<uint8_t>(BufferUsage::Constant); // Vertex and Constant

	//out usage2
	std::cout << "Usage2" << std::endl;
	std::cout << "Vertex: " << HasFlag(usage2, BufferUsage::Vertex) << std::endl;
	std::cout << "Index: " << HasFlag(usage2, BufferUsage::Index) << std::endl;
	std::cout << "Constant: " << HasFlag(usage2, BufferUsage::Constant) << std::endl;

	return 0;
}