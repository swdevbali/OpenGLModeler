#pragma once
#include "drawobject.h"
#include <GL/gl.h>
#include <GL/glu.h>
ref class CBox :
public CDrawObject
{
private:
	GLfloat	rquad;	
public:
	
	CBox(void);
	virtual void draw()  override;
	
};
