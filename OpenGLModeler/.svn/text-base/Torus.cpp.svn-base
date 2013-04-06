#include "StdAfx.h"
#include "Torus.h"
#include "glut.h"
CTorus::CTorus(void)
{
	type="torus";
	inR=0.25f;
	outR=1;
	iVer=16;
	iHor=32;
	//texture = new GLuint;
    //LoadTextureRaw();
}
void CTorus::draw() {	
	glLoadIdentity();
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_NORMALIZE);
	glTranslatef(this->x,this->y,this->z);//ini mempengaruhi langsung koordinat object
	glRotatef(this->sudut_rotasi_x,1,0,0);
	glRotatef(this->sudut_rotasi_y,0,1,0);
	glRotatef(this->sudut_rotasi_z,0,0,1);
	glScalef(this->x_scale,this->y_scale,this->z_scale);//skala no problem
	//glColor3f(0.0f,0.0f,1.0f);
	/*if(texture!=NULL && !filename->Equals(""))
	{
		glEnable(GL_TEXTURE_2D);
		pin_ptr<GLuint*> pt = &texture;	
		glBindTexture(GL_TEXTURE_2D,**pt);
	}*/
	
	glutSolidTorus(inR,outR,iVer,iHor);	
	glFlush();
    glDisable(GL_TEXTURE_2D);
 }