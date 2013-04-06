#pragma once
#include "drawobject.h"

ref class CTeaPot :
public CDrawObject
{
public:
	float size;
	CTeaPot(void);
	virtual void draw()  override;
};
