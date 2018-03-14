#include <GL/glut.h>
#include <math.h>
GLfloat i = 5.0f;

void display(){

	GLfloat x = 0.0f;
	gluOrtho2D(-5.0, 5.0, -1.0, 1.0);
	glViewport(0, 0, 640, 480);

	glBegin(GL_LINE_STRIP);
	for(x = -4.0; x < 4.0; x += 0.1)
		glVertex2f(x, sin(3.14159 * x)/(3.14159 * x));
	glEnd();	
}

//void myMouse(int button, int state, int x, int y);
void myKeyboard(unsigned char key, int x, int y)
{
	if(key == '+' && i < 5.0f){
		i++;
	}
	if(key == '-' && i > 1.0f){
		i--;
	}
}


int main( int argc, char** argv) {
	
	glutInit(&argc, argv);
	glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB );
	glutInitWindowSize( 640, 480);
	glutInitWindowPosition( 100, 150);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glutDisplayFunc(display);
//	glutKeyboardFunc(myKeyboard);
	glutMainLoop();
}
