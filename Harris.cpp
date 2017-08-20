#include <iostream>
#include <fstream>
#include <string>
#include <glut.h>





void myDisplay(void)
{
	
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0F,0.5F,0.2F,0.0);
	glColor3f(0, 0, 0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 20, 0, 20);
	
	glBegin(GL_POLYGON);
		glVertex2f(2.0, 1.0);
		glVertex2f(12.0, 1.0);
		glVertex2f(14.0, 3.0);
		glVertex2f(1.0, 3.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex2f(2.0, 4.0);
	
		glVertex2f(6.0, 4.0);
		glColor3f(0, 1, 0);
		glVertex2f(6.0, 9.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glVertex2f(12.0, 4.0);	
		glVertex2f(7.0, 4.0);
		glVertex2f(7.0, 12.0);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(5.0, 1.5);
		glVertex2f(5.5, 1.5);
		glVertex2f(5.5, 2.75);
		glVertex2f(5.0, 2.75);
	glEnd();






	glBegin(GL_LINES);
	glVertex2f(5.0,5.0);
glVertex2f(5.0,10.0);

	glColor3f(0, 0,1);
		
	glEnd();
	// firstline parrelel
		glBegin(GL_LINES);
	glVertex2f(4.5,5.0);
glVertex2f(4.5,10.0);

	glColor3f(0, 0,1);
		
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(7.0,5.0);
glVertex2f(7.0,10.0);

	glColor3f(1, 0,0);
		
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(5.0,7.0);
glVertex2f(7.0,7.0);

	glColor3f(0, 0,1);
		
	glEnd();
	


	//firstPolygon

	glFlush();

}

int screenWidth = 360;
int screenHeight = 480;

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(30, 30);
	glutCreateWindow("HT First OGL Program");

	glutDisplayFunc(myDisplay);
//	PlayBackgroundSound("shoot.wav");
	glutMainLoop();

	return 0;

}
