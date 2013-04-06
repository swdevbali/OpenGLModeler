#pragma once
#include "drawobject.h"

ref class CCone :
public CDrawObject
{
public:
	float base,  height, top;
	int slices,  stacks;
	CCone(void);
	virtual void draw()  override;
};
