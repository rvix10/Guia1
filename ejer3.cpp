#include <GL/gl.h>
#include <GL/glut.h>

void display (void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (1.0f, 1.0f, 1.0f);
	
	
	glBegin (GL_QUADS);
		
	glColor3f (0.0f, 0.0f, 1.0f);
	glVertex3f (-0.4f, 0.2f, 0.0f);
	glVertex3f (0.4f, 0.2f, 0.0f);
	glVertex3f (0.4f, -0.2f, 0.0f);
	glVertex3f (-0.4f, -0.2f, 0.0f);
	
	glEnd ();
	
	glBegin (GL_TRIANGLES); //triangulo superior
	glColor3f (0.0f, 1.0f, 0.0f);	
	glVertex3f (-0.2f, 0.2f, 0.0f);
	glVertex3f (0.f, 0.4f, 0.0f);
	glVertex3f (0.2f, 0.2f, 0.0f);
	
	//triangulo derecho
	glColor3f (1.0f, 0.0f, 0.0f);	
	glVertex3f (0.4f, 0.25f, 0.0f);
	glVertex3f (0.7f, 0.0f, 0.0f);
	glVertex3f (0.4f, -0.25f, 0.0f);
	
	
	
	//triangulo inferior
	glColor3f (0.0f, 1.0f, 1.0f);	
	glVertex3f (-0.2f, -0.2f, 0.0f);
	glVertex3f (0.2f, -0.2f, 0.0f);
	glVertex3f (0.0f, -0.4f, 0.0f);
	
	//segundo triangulo superior
	glColor3f (0.0f, 1.0f, 1.0f);	
	glVertex3f (-0.2f, 0.2f, 0.0f);
	glVertex3f (-0.4f, 0.4f, 0.0f);
	glVertex3f (0.0f, 0.4f, 0.0f);
	
	//segundo triangulo inferior
	glColor3f (0.0f, 1.0f, 0.0f);	
	glVertex3f (-0.2f, -0.2f, 0.0f);
	glVertex3f (-0.4f, -0.4f, 0.0f);
	glVertex3f (0.0f, -0.4f, 0.0f);
		
	glEnd ();
	glFlush ();
	
	}
	
	void init (void)
	{
		glMatrixMode (GL_PROJECTION);
		glLoadIdentity ();
		glOrtho (-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
		
		}
		
		int main (int argc, char** argv)
		{
			glutInit (&argc, argv);
			glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
			glutInitWindowSize (800, 450);
			glutInitWindowPosition (100, 100);
			glutCreateWindow ("Ejer 3");
			init ();
			glutDisplayFunc(display);
			glutMainLoop();
			return 0;
			
			}

