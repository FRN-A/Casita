// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
/*#include <conio.h>*/

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <iostream>

using namespace std;


void dibujarCirculo() {
	glBegin(GL_POLYGON);
	//el 0.2 es la amplitudy se multiplca  x y  , y le sumas para moverlo
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2f* cos((double)i*3.14159f / 180) + 0.4f, 0.2f * sin((double)i*3.14159f / 180) - 0.2f, 0);

	}
	glEnd();
}
void casita() {
	glBegin(GL_POLYGON);
	//Cesped
	glColor3f(0.478f, 0.768f, 0.168f);
	glVertex3f(-1, -1, 0);
	glVertex3f(-1, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(1, -1, 0);
	glEnd();

	//arbol
	glBegin(GL_POLYGON);
	glColor3f(0.521f, 0.349f, 0.203f);
	glVertex3f(-0.7f, -0.5f, 0);
	glVertex3f(-0.6f, -0.5f, 0);
	glVertex3f(-0.6f, 0, 0);
	glVertex3f(-0.7f, 0, 0);
	glEnd();
	//Hojas
	glBegin(GL_POLYGON);
	
	glColor3f(0.168f, 0.537f, 0.066f);
	for (int i = 0; i < 360; i++) {
		glVertex3f(-0.1f* cos((double)i*3.14159f / 180) - 0.76f, -0.1f * sin((double)i*3.14159f / 180) - 0.1f, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.168f, 0.537f, 0.066f);
	for (int i = 0; i < 360; i++) {
		glVertex3f(-0.1f* cos((double)i*3.14159f / 180) - 0.55f, -0.1f * sin((double)i*3.14159f / 180) - 0.1f, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);
	
	glColor3f(0.168f, 0.537f, 0.066f);
	for (int i = 0; i < 360; i++) {
		glVertex3f(-0.1f* cos((double)i*3.14159f / 180) - 0.76f, -0.1f * sin((double)i*3.14159f / 180) + 0.1f, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);
	
	glColor3f(0.168f, 0.537f, 0.066f);
	for (int i = 0; i < 360; i++) {
		glVertex3f(-0.1f* cos((double)i*3.14159f / 180) - 0.55f, -0.1f * sin((double)i*3.14159f / 180) + 0.1f, 0);

	}
	glEnd();

	glBegin(GL_POLYGON);
	
	glColor3f(0.168f, 0.537f, 0.066f);
	for (int i = 0; i < 360; i++) {
		glVertex3f(-0.1f* cos((double)i*3.14159f / 180) - 0.65f, -0.1f * sin((double)i*3.14159f / 180) + 0.2f, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);
	
	glColor3f(0.168f, 0.537f, 0.066f);
	for (int i = 0; i < 360; i++) {
		glVertex3f(-0.1f* cos((double)i*3.14159f / 180) - 0.65f, -0.1f * sin((double)i*3.14159f / 180) - 0.2f, 0);

	}
	glEnd();

	glBegin(GL_POLYGON);
	
	glColor3f(0.168f, 0.537f, 0.066f);
	for (int i = 0; i < 360; i++) {
		glVertex3f(-0.1f* cos((double)i*3.14159f / 180) - 0.8f, -0.1f * sin((double)i*3.14159f / 180) - 0.01f, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);
	
	glColor3f(0.168f, 0.537f, 0.066f);
	for (int i = 0; i < 360; i++) {
		glVertex3f(-0.1f* cos((double)i*3.14159f / 180) - 0.5f, -0.1f * sin((double)i*3.14159f / 180) - 0.01f, 0);

	}
	glEnd();

	glBegin(GL_POLYGON);
	
	glColor3f(0.168f, 0.537f, 0.066f);
	for (int i = 0; i < 360; i++) {
		glVertex3f(-0.15f* cos((double)i*3.14159f / 180) - 0.67f, -0.15f * sin((double)i*3.14159f / 180) + 0.0199f, 0);

	}
	glEnd();


	//Casa
	glBegin(GL_POLYGON);
	glColor3f(0.992f, 0.7f, 0.3f);
	glVertex3f(0.3f, -0.2f, 0);
	glVertex3f(0.9f, -0.2f, 0);
	glVertex3f(0.9f, 0.4f, 0);
	glVertex3f(0.3f, 0.4f, 0);
	glEnd();

	
	glBegin(GL_POLYGON);
	glColor3f(0.2f, 0.2f, 0.6f);
	glVertex3f(0.25f, 0.4f, 0);
	glVertex3f(0.95f, 0.4f, 0);
	glVertex3f(0.615f, 0.7f, 0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.647f, 0.917f, 0.941f);
	glVertex3f(0.35f, 0.125f, 0);
	glVertex3f(0.50f, 0.125f, 0);
	glVertex3f(0.50f, 0.275f, 0);
	glVertex3f(0.35f, 0.275f, 0);
	glEnd();
	

	glBegin(GL_POLYGON);
	glColor3f(0.647f, 0.917f, 0.941f);
	glVertex3f(0.70f, 0.125f, 0);
	glVertex3f(0.85f, 0.125f, 0);
	glVertex3f(0.85f, 0.275f, 0);
	glVertex3f(0.70f, 0.275f, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.521f, 0.349f, 0.203f);
	glVertex3f(0.55f, -0.2f, 0);
	glVertex3f(0.65f, -0.2f, 0);
	glVertex3f(0.65f, 0.05f, 0);
	glVertex3f(0.55f, 0.05f, 0);
	glEnd();

	//sol
	glBegin(GL_POLYGON);

	glColor3f(0.9f, 0.8f, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.15f* cos((double)i*3.14159f / 180) - 0.7f, 0.16f * sin((double)i*3.14159f / 180) + 0.7, 0);

	}
	glEnd();

	//nubes

	glBegin(GL_POLYGON);
	
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) - 0.3f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);
	
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) - 0.25f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) - 0.2f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();

	glBegin(GL_POLYGON);
	
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) - 0.25f, 0.08f * sin((double)i*3.14159f / 180) + 0.85, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) - 0.25f, 0.08f * sin((double)i*3.14159f / 180) + 0.75, 0);

	}
	glEnd();






	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.3f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);
	
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.25f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.2f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.25f, 0.08f * sin((double)i*3.14159f / 180) + 0.85, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.25f, 0.08f * sin((double)i*3.14159f / 180) + 0.75, 0);

	}
	glEnd();




	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.4f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.35f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.3f, 0.08f * sin((double)i*3.14159f / 180) + 0.8, 0);

	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.35f, 0.08f * sin((double)i*3.14159f / 180) + 0.85, 0);

	}
	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.08f* cos((double)i*3.14159f / 180) + 0.35f, 0.08f * sin((double)i*3.14159f / 180) + 0.75, 0);

	}
	glEnd();




}

void dibujar() {
	casita();
}

void actualizar() {

}
int main()
{
	/*Crear un contexto
	°Un contexto es una ventana de un sistema operativo
	°OpenGL no gestiona el iso de ventanas*/

	//Declaramos un apuntador de ventana.

	GLFWwindow *window;
	// Si no se pudo iniciar glfw terminamos ejecución
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}

	window =
		glfwCreateWindow(800, 700, "Ventana", NULL, NULL);
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto, activamos funciones modernas(trabajar con GPU/CPU)
	glewExperimental = true;
	GLenum  errorGlew = glewInit();

	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//Ciclo de dibujo(draw loop)
	while (!glfwWindowShouldClose(window)) {
		glViewport(0, 0, 800, 700);
		//Establece el color de borrado
		glClearColor(0.156f, 0.682f, 0.858f, 1);
		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar Buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();




	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}