#pragma once
#include "drawobject.h"

ref class CBall :
public CDrawObject
{
public:
	float r;
	CBall(void);
	virtual void draw()  override;
};
