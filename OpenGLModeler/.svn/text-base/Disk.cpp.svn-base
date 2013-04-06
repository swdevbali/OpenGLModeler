#include "StdAfx.h"
#include "Disk.h"
#include "glut.h"

CDisk::CDisk(void)
{
	type="disk";
	innerR=0.5f, outerR =2.0f, slices=32, loops=32;
	//texture = new GLuint;
    //LoadTextureRaw("texture.png",1);
}
void CDisk::draw() {
	
	glLoadIdentity();
	
	if(texture!=NULL && !filename->Equals(""))
	{
		glEnable(GL_TEXTURE_2D);
		pin_ptr<GLuint*> pt = &texture;	
		glBindTexture(GL_TEXTURE_2D,**pt);
	}
	GLUquadric* qobj;
	qobj = gluNewQuadric();
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
	gluDisk(qobj, innerR, outerR, slices, loops);
	glFlush();
    glDisable(GL_TEXTURE_2D);
 }

