#include <GL/glut.h>
#include <stdio.h>

void display(){
	
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-3.2, 3.4, -2.4, 2.4, 1, 50);

	glMatrixMode(GL_MODELVIEW);
	gluLookAt(4, 0, 0, 0, 1, 0, 0, 1, 0);
	
	glColor3f(1.0, 1.0, 0.0);
	
	glPushMatrix();
	//glTranslated(0.5, 0.5, 0.5);
	
	glutSolidCube(1.0);
	glPopMatrix();
	glFlush();
}

int main(int argc, char** argv){

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Sample 3D image");
	
	glutDisplayFunc(display);
	
	
//	glClearColor(1.0, 1.0, 1.0, 0.0);
	glViewport(0, 0, 640, 480);
	glutMainLoop();
	
}	
