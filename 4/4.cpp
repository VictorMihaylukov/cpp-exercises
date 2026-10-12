#include <iostream>
#include <functional>

std::function<void(int, int)> OnResize;
std::function<void(int)> OnKeyPressed;
std::function<void(int, int)> OnMouseMove;

void RegisterResizeCallback(std::function<void(int, int)> callback)
{
	OnResize = callback;
}

void RegisterKeyPressedCallback(std::function<void(int)> callback)
{
	OnKeyPressed = callback;
}

void RegisterMouseMoveCallback(std::function<void(int, int)> callback)
{
	OnMouseMove = callback;
}

void SimulateWindowResize(int width, int height)
{
	if (OnResize) OnResize(width, height);
}

void SimulateKeyPressed(int key)
{
	if (OnKeyPressed) OnKeyPressed(key);
}

void SimulateMouseMove(int x, int y)
{
	if (OnMouseMove) OnMouseMove(x, y);
}

void HandleResize(int width, int height)
{
	std::cout << "Window resized: " << width << "x" << height << std::endl;
}

void HandleKeyPressed(int key)
{
	std::cout << "Key pressed: " << key << std::endl;
}

void HandleMouseMove(int x, int y)
{
	std::cout << "Mouse move to: " << x << " " << y << std::endl;
}

int main() {
	RegisterResizeCallback(HandleResize);
	RegisterKeyPressedCallback(HandleKeyPressed);
	RegisterMouseMoveCallback(HandleMouseMove);

	SimulateWindowResize(1920, 1080);
	SimulateKeyPressed(67);
	SimulateMouseMove(100, 200);
}