#include "StdAfx.h"
#include "glut.h"
#include "Box.h"



CBox::CBox(void)
{
	
	type="box";
	//texture = new GLuint;
    //LoadTextureRaw("texture.png",1);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_NORMALIZE);
	
	//System::Diagnostics::Debug::WriteLine(*texture);
	this->y=0.5f; // to make it in plane
	this->x=0.5f;
	this->z=-0.5f;
}

void CBox::draw() {	

    glEnable(GL_TEXTURE_2D);
	if(texture!=NULL){
		pin_ptr<GLuint*> pt = &texture;	
		glBindTexture(GL_TEXTURE_2D,**pt);
	}
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
   
	
	glTranslatef(this->x,this->y,this->z);
	glRotatef(this->sudut_rotasi_x,1,0,0);
	glRotatef(this->sudut_rotasi_y,0,1,0);
	glRotatef(this->sudut_rotasi_z,0,0,1);
	glScalef(this->x_scale,this->y_scale,this->z_scale);
	
	
	//pasangan sisi
	glBegin(GL_QUADS);
	glTexCoord2f(0,0);glVertex3f(x-1,y-1,z-1);
	glTexCoord2f(1,0);glVertex3f(x+1,y-1,z-1);
	glTexCoord2f(1,1);glVertex3f(x+1,y+1,z-1);
	glTexCoord2f(0,1);glVertex3f(x-1,y+1,z-1);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0,0);glVertex3f(x-1,y-1,z+1);
	glTexCoord2f(1,0);glVertex3f(x+1,y-1,z+1);
	glTexCoord2f(1,1);glVertex3f(x+1,y+1,z+1);
	glTexCoord2f(0,1);glVertex3f(x-1,y+1,z+1);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0,0);glVertex3f(x-1,y-1,z-1);
	glTexCoord2f(1,0);glVertex3f(x-1,y-1,z+1);
	glTexCoord2f(1,1);glVertex3f(x-1,y+1,z+1);
	glTexCoord2f(0,1);glVertex3f(x-1,y+1,z-1);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0,0);glVertex3f(x+1,y-1,z-1);
	glTexCoord2f(1,0);glVertex3f(x+1,y-1,z+1);
	glTexCoord2f(1,1);glVertex3f(x+1,y+1,z+1);
	glTexCoord2f(0,1);glVertex3f(x+1,y+1,z-1);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0,0);glVertex3f(x-1,y+1,z-1);
	glTexCoord2f(1,0);glVertex3f(x-1,y+1,z+1);
	glTexCoord2f(1,1);glVertex3f(x+1,y+1,z+1);
	glTexCoord2f(0,1);glVertex3f(x+1,y+1,z-1);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0,0);glVertex3f(x-1,y-1,z-1);
	glTexCoord2f(1,0);glVertex3f(x-1,y-1,z+1);
	glTexCoord2f(1,1);glVertex3f(x+1,y-1,z+1);
	glTexCoord2f(0,1);glVertex3f(x+1,y-1,z-1);
	glEnd();
	
    glFlush();
    glDisable(GL_TEXTURE_2D);
 }


