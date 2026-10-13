#include <vector>
#include <iostream>

struct Vertex
{
	float x;
	float y;
	float z;
};

class Mesh
{
public:
	Mesh() = default;

	Mesh(const std::vector<Vertex>& vertices, const std::vector<uint32_t>& indices)
		: vertices_(vertices), indices_(indices)
	{}

	void AddVertex(const Vertex& vertex) {
		vertices_.push_back(vertex);
	}

	bool AddTriangle(uint32_t a, uint32_t b, uint32_t c) {
		if (a < vertices_.size() && b < vertices_.size() && c < vertices_.size())
		{
			indices_.push_back(a);
			indices_.push_back(b);
			indices_.push_back(c);

			return true;
		}

		else return false;
	}

	void Translate(float dx, float dy, float dz)
	{
		for (Vertex& vertex : vertices_)
		{
			vertex.x += dx;
			vertex.y += dy;
			vertex.z += dz;
		}
	}

	void Clear()
	{
		vertices_.clear();
		indices_.clear();
	}

	size_t GetVertexCount() const { return vertices_.size(); }
	size_t GetTriangleCount() const { return indices_.size()/3; }
	const Vertex& GetVertex(size_t index) const { return vertices_[index]; }

private:
	std::vector<Vertex> vertices_;
	std::vector<uint32_t> indices_;
};

//проверка что класс работает
int main()
{
	Mesh mesh;

	mesh.AddVertex({ 0.0f, 1.0f, 0.0f });
	mesh.AddVertex({ -1.0f, -1.0f, 0.0f });
	mesh.AddVertex({ 1.0f, -1.0f, 0.0f });

	mesh.AddTriangle(0, 1, 2);

	std::cout << mesh.GetVertexCount() << '\n';
	std::cout << mesh.GetTriangleCount() << '\n';

	mesh.Translate(1.0f, 2.0f, 3.0f);

	const Vertex& vertex = mesh.GetVertex(0);

	std::cout << vertex.x << " "
		<< vertex.y << " "
		<< vertex.z << '\n';

	bool result = mesh.AddTriangle(0, 1, 100);

	std::cout << std::boolalpha << result << '\n';

	mesh.Clear();

	std::cout << mesh.GetVertexCount() << '\n';
}