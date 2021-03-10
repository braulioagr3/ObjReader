#include "CAnimator.h"

CAnimator::CAnimator(int argc, char** argv, CObjReader* reader)
{
    this->argc = argc;
    this->argv = argv;
    this->reader = reader;
}

void CAnimator::init(void)
{
/*  select clearing (background) color       */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);

}

void CAnimator::setUp()
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (250, 250); 
    glutInitWindowPosition (100, 100);
    glutCreateWindow(this->reader->getName().c_str());
}

void CAnimator::display()
{
/*  clear all pixels  */
    glClear (GL_COLOR_BUFFER_BIT);

/*  draw white polygon (rectangle) with corners at
 *  (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)  
 */
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i = 0 ; i < this->reader->getObjects().size() ; i++)
    {

    }
    glEnd();
    
    //glutSolidCube(0.5);

/*  don't wait!  
 *  start processing buffered OpenGL routines 
 */
    glFlush ();
}

void CAnimator::show()
{    
    this->init ();
    //glutDisplayFunc(display); 
    glutMainLoop();    
}