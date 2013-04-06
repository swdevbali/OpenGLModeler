#include "StdAfx.h"
#include "glut.h"
#include "Ball.h"
#include <gl\glu.h>	
CBall::CBall(void)
{
	type="ball";
	r=0.75f;
	//texture = new GLuint;
    //LoadTextureRaw("texture.png",1);
}

void CBall::draw(){
	glLoadIdentity();
	
	if(texture!=NULL && !filename->Equals(""))
	{
		glEnable(GL_TEXTURE_2D);
		pin_ptr<GLuint*> pt = &texture;	
		glBindTexture(GL_TEXTURE_2D,**pt);
	}

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
	//glColor3f(1.0f,0.0f,0.0f);
	//glutSolidSphere(r,360,360);	
	GLUquadricObj *q = gluNewQuadric();							// Create A New Quadratic
	gluQuadricNormals(q, GL_SMOOTH);					// Generate Smooth Normals For The Quad
	gluQuadricTexture(q, GL_TRUE);
	gluSphere(q, r, 32, 16);
	//glFlush();
    glDisable(GL_TEXTURE_2D);
 }