#pragma once
#include <GL/gl.h>
#include <GL/glu.h>
using namespace System;
public ref class CDrawObject
{
protected:
	BYTE * dataTexture;
	GLuint * texture;
	int wrap;

public:
	String ^ filename;
	String ^ type;
	float x, y, z;
	float sudut_rotasi_x, sudut_rotasi_y, sudut_rotasi_z;
	float x_scale,y_scale,z_scale;
	CDrawObject(void);
	virtual void draw();
	void LoadTextureRaw();
};
