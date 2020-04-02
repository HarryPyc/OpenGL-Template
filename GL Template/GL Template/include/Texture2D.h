#pragma once
#include <string>
#include <gl/glew.h>
#include <LoadTexture.h>
#include <glm/glm.hpp>

class Texture2D
{
public:
	GLuint texture_id;
	std::string texture_name;
	Texture2D(const std::string name, const std::string path);
	Texture2D(const std::string name, int w, int h);
	Texture2D();

	void activate(GLuint program, GLuint textureLoc);

	static Texture2D* Default() {
		return new Texture2D("tex",64,64);
	}
private:
	int width, height;
};

