#include <GL/glut.h>
#include <stdio.h>

int main(int argc, char** argv){

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Sample 3D image");
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho(-3.2, 3.4, -2.4, 2.4, 1, 50);

	glMatrixMode(GL_MODELVIEW);
	glLookAt(4, 4, 4, 0, 1, 0, 0, 1, 0);

	
}
