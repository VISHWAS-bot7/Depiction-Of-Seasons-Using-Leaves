#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <GL/glut.h>

using namespace std;

float curColor[3] = { 1, 1, 0 };

float weatherColor[3] = { 0, 1, 0 };
float perc = 1;

int leafCount = 7;
float leafy[100] = { 0, -100, 100, 200, 124, -212, -300 };
float leafx[100] = { 0, 20, 154, -200, 358, -52, 350 };
float leafsize[100] = { 1, 0.50, 0.55, 0.6, 0.7, 0.75, 0.8};
float leafangle[100] = { 0, 25, 50, 90, 251, 158, 0 };
float leafrotatespeed[100] = { 0.15, -0.2, 0.15, 0.1, -0.05, -0.07, 0.15 };

void spring() {

	perc = 0;
	weatherColor[0] = 0.1;
	weatherColor[1] = 0.8;
	weatherColor[2] = 0;

}

void summer() {

	perc = 0;
	weatherColor[0] = 1.0;
	weatherColor[1] = 0.8;
	weatherColor[2] = 0;

}

void winter(){

	perc = 0;
	weatherColor[0] = 0.6;
	weatherColor[1] = 0.4;
	weatherColor[2] = 0.12;

}

void fall() {

	perc = 0;
	weatherColor[0] = 0.9;
	weatherColor[1] = 0.2;
	weatherColor[2] = 0;

}

void leaf(int x, int y, float size, float angle) {

	glLoadIdentity();
	glTranslatef(x, y, 0);
	glRotatef(angle, 0, 0, 1);
	glScalef(size, size, size);
    //leaf1-----------------------------------------------------
	// Stem
	glColor3f(curColor[0]*0.6, curColor[1]*0.6, curColor[2]*0.6);
	glBegin(GL_POLYGON);
	glVertex2f(- 4, - 0);
	glVertex2f(- 4, -50);
	glVertex2f(+ 4, -50);
	glVertex2f(+ 4, - 0);
	glEnd();


	// Leaf
	glColor3f(curColor[0]*(100-(rand()%20))/100.0,
			  curColor[1]*(100-(rand()%20))/100.0,
			  curColor[2]*(100-(rand()%20))/100.0);
	glBegin(GL_POLYGON);
	glVertex2f(-  0, +  0);
	glVertex2f(- 65, - 10);
	glVertex2f(- 45, + 15);
	glVertex2f(-140, + 48);
	glVertex2f(-120, + 60);
	glVertex2f(-155, + 95);
	glVertex2f(-107, + 88);
	glVertex2f(-115, +120);
	glVertex2f(- 30, + 77);
	glVertex2f(- 45, +167);
	glVertex2f(- 20, +150);
	glVertex2f(+  0, +203);
	glVertex2f(+ 20, +150);
	glVertex2f(+ 45, +167);
	glVertex2f(+ 30, + 77);
	glVertex2f(+115, +120);
	glVertex2f(+107, + 88);
	glVertex2f(+155, + 95);
	glVertex2f(+120, + 60);
	glVertex2f(+140, + 48);
	glVertex2f(+ 45, + 15);
	glVertex2f(+ 65, - 10);
	glVertex2f(+  0, +  0);
	glEnd();

	//Veins
	glColor3f(curColor[0]*0.2, curColor[1]*0.2, curColor[2]*0.2);
	glBegin(GL_LINE_STRIP);
	glVertex2f(+0, +  0);
	glVertex2f(+3, + 50);
	glVertex2f(-2, +100);
	glVertex2f(+0, +200);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(+  3, + 50);
	glVertex2f(+ 20, + 30);
	glVertex2f(+120, + 75);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(+2.5, +30);
	glVertex2f(-20, +20);
	glVertex2f(-120, +75);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-2, +100);
	glVertex2f(+20, +120);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-2, +100);
	glVertex2f(-20, +115);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-1.5, + 80);
	glVertex2f(-15, +90);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f( 0, + 65);
	glVertex2f(+22,+ 75);
	glEnd();

	//LEAF2------------------------------------------------------------


	//stem
	glTranslatef(x+100.0,y+100.0,0.0);
	glScalef(1,1,0);
	glColor3f(curColor[0]*0.6, curColor[1]*0.6, curColor[2]*0.6);
	glBegin(GL_POLYGON);
	glVertex2f(- 4, - 0);
	glVertex2f(- 4, -50);
	glVertex2f(+ 4, -50);
	glVertex2f(+ 4, - 0);
	glEnd();


    //leaf
	glColor3f(curColor[0]*(100-(rand()%20))/100.0,
			  curColor[1]*(100-(rand()%20))/100.0,
			  curColor[2]*(100-(rand()%20))/100.0);
	glBegin(GL_POLYGON);
	glVertex2f(-  0, +  0);
	glVertex2f(- 25, + 70);
	glVertex2f(- 20, +150);
	glVertex2f(+  0, +203);
	glVertex2f(+ 20, +150);
	glVertex2f(+ 30, + 77);
	glVertex2f(+  0, +  0);
	glEnd();

	//Veins
	glColor3f(curColor[0]*0.2, curColor[1]*0.2, curColor[2]*0.2);
	glBegin(GL_LINE_STRIP);
	glVertex2f(+0, +  0);
	glVertex2f(+3, + 50);
	glVertex2f(-2, +100);
	glVertex2f(+0, +200);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-2, +100);
	glVertex2f(+20, +120);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-2, +100);
	glVertex2f(-20, +115);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-1.5, + 80);
	glVertex2f(-20, +90);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f( 0, + 65);
	glVertex2f(+22,+ 75);
	glEnd();



	//leaf3--------------------------------------------------------



      glTranslatef(x+200,y+200,0);
      glScalef(1,1,0);
	// Stem
	glColor3f(curColor[0]*0.6, curColor[1]*0.6, curColor[2]*0.6);
	glBegin(GL_POLYGON);
	glVertex2f(- 4, - 0);
	glVertex2f(- 4, -50);
	glVertex2f(+ 4, -50);
	glVertex2f(+ 4, - 0);
	glEnd();


	// Leaf
	glColor3f(curColor[0]*(100-(rand()%20))/100.0,
			  curColor[1]*(100-(rand()%20))/100.0,
			  curColor[2]*(100-(rand()%20))/100.0);
	glBegin(GL_POLYGON);
	glVertex2f(-  0, +  0);
	glVertex2f(- 45, + 15);
	glVertex2f(- 30, + 77);
	glVertex2f(+  0, +203);
	glVertex2f(+ 30, + 77);
	glVertex2f(+ 45, + 15);
	glVertex2f(+  0, +  0);
	glEnd();

	//Veins
	glColor3f(curColor[0]*0.2, curColor[1]*0.2, curColor[2]*0.2);
	glBegin(GL_LINE_STRIP);
	glVertex2f(+0, +  0);
	glVertex2f(+3, + 50);
	glVertex2f(-2, +100);
	glVertex2f(+0, +200);
	glEnd();

    glBegin(GL_LINE_STRIP);
	glVertex2f(-2, +100);
	glVertex2f(+20, +120);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-2, +100);
	glVertex2f(-20, +115);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-1.5, + 80);
	glVertex2f(-15, +90);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f( 0, + 65);
	glVertex2f(+22,+ 75);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(+4, +45);
	glVertex2f(+20, +50);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.01, +45);
	glVertex2f(-30, +60);
	glEnd();

	//leaf 4---------------------------------------------------------

    glTranslatef(x+400,y+400,0);
    glScalef(2.0,2.0,0);
	// Stem
	glColor3f(curColor[0]*0.6, curColor[1]*0.6, curColor[2]*0.6);
	glBegin(GL_POLYGON);
	glVertex2f(- 4, - 0);
	glVertex2f(- 4, -50);
	glVertex2f(+ 4, -50);
	glVertex2f(+ 4, - 0);
	glEnd();

    //leaf
	glColor3f(curColor[0]*(100-(rand()%20))/100.0,
			  curColor[1]*(100-(rand()%20))/100.0,
			  curColor[2]*(100-(rand()%20))/100.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,0);
	glVertex2f(-6,-10);
	glVertex2f(-10,-10);
	glVertex2f(-15,-16);
	glVertex2f(-20,-19);
	glVertex2f(-24,-17);
	glVertex2f(-30,-13);
	glVertex2f(-34,-10);
	glVertex2f(-38,-5);
	glVertex2f(-40,0);
	glVertex2f(-40,5);
	glVertex2f(-39,10);
	glVertex2f(-38,15);
	glVertex2f(-35,20);
	glVertex2f(-30,28);
	glVertex2f(-20,37);
	glVertex2f(-18,40);
	glVertex2f(-10,48);
	glVertex2f(-3,58);
	glVertex2f(-2,61);
	glVertex2f(-1,64);
	glVertex2f(0,65);
	glVertex2f(0,0);

	glVertex2f(6,-10);
	glVertex2f(10,-10);
	glVertex2f(15,-16);
	glVertex2f(20,-19);
	glVertex2f(24,-17);
	glVertex2f(30,-13);
	glVertex2f(34,-10);
	glVertex2f(38,-5);
	glVertex2f(40,0);
	glVertex2f(40,5);
	glVertex2f(39,10);
	glVertex2f(38,15);
	glVertex2f(35,20);
	glVertex2f(30,28);
	glVertex2f(20,37);
	glVertex2f(18,40);
	glVertex2f(10,48);
	glVertex2f(3,58);
	glVertex2f(2,61);
	glVertex2f(1,64);
	glVertex2f(0,65);
	glVertex2f(0,0);
    glEnd();

	//Veins
	glColor3f(curColor[0]*0.2, curColor[1]*0.2, curColor[2]*0.2);
    glBegin(GL_LINE_STRIP);
	glVertex2f(+0, +  0);
	glVertex2f(0,65);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0,0);
	glVertex2f(-25,10);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0,0);
	glVertex2f(25,10);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0, +10);
	glVertex2f(-20,20);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0, +10);
	glVertex2f(20,20);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0, +20);
	glVertex2f(-15,30);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0, +20);
	glVertex2f(15,30);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0, +30);
	glVertex2f(-12,40);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0, +30);
	glVertex2f(12,40);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0, +40);
	glVertex2f(-5,46);
    glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(0, +40);
	glVertex2f(5,46);
    glEnd();

}


void display(){

	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0, 0, 0, 0);
    glLoadIdentity();
    glColor3f(0, 1, 0);


	 for (int i = 0; i<leafCount; i++)
        {

		  leaf(leafx[i], leafy[i], leafsize[i], leafangle[i]);
		  leafy[i] -= 1*leafsize[i];
		  leafangle[i] += leafrotatespeed[i];

          if (leafy[i] < -300-200*leafsize[i])
           {
			leafy[i] = 400;
			leafx[i] = rand()%701 - 350;
		   }
        }

	 for (int i = 0; i<3; i++)
		curColor[i] = perc*weatherColor[i] + (1-perc)*curColor[i];


    if(perc < 1)
		perc += 0.00001;

    glFlush();
	Sleep(1);
	glutPostRedisplay();
}

void menu(int op)
{
	switch (op)
   {
	 case 1:
		spring();
		glutPostRedisplay();
		break;
	 case 2:
		summer();
		glutPostRedisplay();
		break;
	 case 3:
		winter();
		glutPostRedisplay();
		break;
	 case 4:
		fall();
		glutPostRedisplay();
		break;
	 case 5:
		exit(0);
	}

}

int main(int argc, char *argv[])
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutCreateWindow("SEASONS");

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-400, 400, -300, 300);
	glMatrixMode(GL_MODELVIEW);

	glutCreateMenu(menu);
	glutAddMenuEntry("spring", 1);
	glutAddMenuEntry("summer", 2);
	glutAddMenuEntry("winter", 3);
	glutAddMenuEntry("fall", 4);
	glutAddMenuEntry("Quit", 5);
	glutAttachMenu(GLUT_RIGHT_BUTTON);

	glutDisplayFunc(display);
	glutMainLoop();
}


