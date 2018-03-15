#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
GLdouble i = -5.0;
GLdouble j = 5.0;

void display(){
	printf("Display called\n");
	GLfloat x = 0.0;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	gluOrtho2D(i, j, -1.0, 1.0);
	//glViewport(0, 0, 640, 480);
	glBegin(GL_LINE_LOOP);
		glVertex2f(-5.0, -1.0);
		glVertex2f(-5.0,1.0);
		glVertex2f(5.0, 1.0); 
		glVertex2f(5.0, -1.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	for(x = -7.0; x < 7.0; x += 0.1)
		glVertex2f(x, sin(3.14159 * x)/(3.14159 * x));
	glEnd();	
	glFlush();
}

//void myMouse(int button, int state, int x, int y);
void myKeyboard(unsigned char key, int x, int y)
{
	
	if(key == 'w' && j > 1.0){
		i++;
		j--;
	}
	if(key == 's' && j < 7.0){
		i--;
		j++;
	}
	if(key == 'a' && i != -7.0){
		i++;
		j++;
		printf("Left key is pressed");
	}
	if(key == 'd' && j != 7.0){
		i--;
		j--;
		printf("Right Key is pressed");
	}
	printf("Key is %c and j is %f\n", key, double(j));
	glutPostRedisplay();
}


int main( int argc, char** argv) {
	
	glutInit(&argc, argv);
	glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB );
	glutInitWindowSize( 640, 480);
	glutInitWindowPosition( 100, 150);
	glMatrixMode(GL_PROJECTION);
	glutCreateWindow("Zoom Sample");
	glLoadIdentity();

	glutDisplayFunc(display);
	glutKeyboardFunc(myKeyboard);
	glutMainLoop();
}
