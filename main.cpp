#include <iostream>
#include <windows.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {

	// Your OpenGL code here
	if (!glfwInit()) {
		std::cerr << "Failed to initialize GLFW" << std::endl;
		return -1;
	}

	glfwCreateWindow(800, 600, "OpenGL Window", NULL, NULL);

	Sleep(5000);

	return 0;
}
