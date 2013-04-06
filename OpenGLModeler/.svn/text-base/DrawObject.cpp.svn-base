#include "StdAfx.h"
#include "DrawObject.h"
#include "glut.h"
#include <gl\glu.h>	

CDrawObject::CDrawObject(void)
{
	this->x=0.0f;
	this->y=0.0f;
	this->z=0.0f;
	this->x_scale=1;
	this->y_scale=1;
	this->z_scale=1;
	this->sudut_rotasi_x=0;
	this->sudut_rotasi_y=0;
	this->sudut_rotasi_z=0;
	filename = "";
	texture = NULL;
}
void CDrawObject::draw(){}
void CDrawObject::LoadTextureRaw()
{
	//GLuint texture;
	if(!filename) return;
	if(filename->Equals("")) return;
	texture = new GLuint;

	System::Drawing::Bitmap ^ bitmap = gcnew Bitmap(filename);	
	int h = bitmap->Height;
	int w = bitmap->Width;
	int s = w * h;
	dataTexture = new BYTE[s * 3];

	System::Drawing::Rectangle rect =  System::Drawing::Rectangle(0,0,w,h);
	System::Drawing::Imaging::BitmapData ^  bitmapData = 
		bitmap->LockBits(rect,System::Drawing::Imaging::ImageLockMode::ReadWrite , System::Drawing::Imaging::PixelFormat::Format24bppRgb);
	
	::memcpy(dataTexture,bitmapData->Scan0.ToPointer(),s*3);

	bitmap->UnlockBits(bitmapData);	
	pin_ptr<GLuint*> pt = &texture;//pin managed pointer, to be unmanaged... a must here :)
    glEnable(GL_TEXTURE_2D);
	glGenTextures(1,*pt);//not working
    glBindTexture(GL_TEXTURE_2D,**pt);
	gluBuild2DMipmaps(GL_TEXTURE_2D, GL_RGB, w,h,GL_BGR_EXT, GL_UNSIGNED_BYTE, dataTexture);
}