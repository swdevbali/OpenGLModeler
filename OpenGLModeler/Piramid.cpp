#include "StdAfx.h"
#include "Piramid.h"

CPiramid::CPiramid(void)
{
	
	type="pyramid";
	size=1;

}

 void CPiramid::draw() {

	glLoadIdentity();									// Reset the current modelview matrix
	
	glTranslatef(x,y,z);						// Move left 1.5 units and into the screen 6.0
	glRotatef(this->sudut_rotasi_x,1,0,0);
	glRotatef(this->sudut_rotasi_y,0,1,0);
	glRotatef(this->sudut_rotasi_z,0,0,1);
	glColor3f(200.0f,1.0f,1.0f);

	glBegin(GL_TRIANGLES);							// Begin drawing triangle sides
 
     glColor3f( 1.0f, 0.0f, 0.0f);						// Set colour to red
     glVertex3f( 0.0f, 1.0f, 1.0f);						// Top vertex
     glVertex3f(-1.0f,-1.0f, 0.0f);						// Bottom left vertex
     glVertex3f( 1.0f,-1.0f, 0.0f);						// Bottom right vertex
 
     glColor3f( 0.0f, 1.0f, 0.0f);						// Set colour to green
     glVertex3f( 0.0f, 1.0f, 1.0f);						// Top vertex
     glVertex3f(-1.0f,-1.0f, 2.0f);						// Bottom left vertex
     glVertex3f( -1.0f,-1.0f, 0.0f);						// Bottom right vertex
 
     glColor3f( 0.0f, 0.0f, 1.0f);						// Set colour to blue
     glVertex3f( 0.0f, 1.0f, 1.0f);						// Top vertex
     glVertex3f(-1.0f,-1.0f, 2.0f);						// Bottom left vertex
     glVertex3f( 1.0f,-1.0f, 2.0f);						// Bottom right vertex
 
     glColor3f( 0.5f, 0.0f, 0.5f);						// Set colour to purple
     glVertex3f( 0.0f, 1.0f, 1.0f);						// Top vertex
     glVertex3f( 1.0f,-1.0f, 0.0f);						// Bottom left vertex
     glVertex3f( 1.0f,-1.0f, 2.0f);						// Bottom right vertex

   glEnd();									// Finish drawing triangle sides

   glBegin(GL_QUADS);							// Begin drawing square bottom
 
     glColor3f( 1.0f, 1.0f, 0.0f);						// Set colour to yellow
     glVertex3f(-1.0f,-1.0f, 0.0f);						// Bottom left vertex
     glVertex3f(-1.0f,-1.0f, 2.0f);						// Top left vertex
     glVertex3f( 1.0f,-1.0f, 2.0f);						// Bottom right vertex
     glVertex3f( 1.0f,-1.0f, 0.0f);						// Top right vertex
 
   glEnd();									// Finish drawing square bottom

	
										
}

