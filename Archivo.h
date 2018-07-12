#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<string>
#include<fstream>

using namespace std;

class Archivo
{
	private:
	int tamano;
	char* relleno2;
	string titulo;
	string relleno;
	string title;
	int maxCarac;
	public:
		Archivo();
		void escribir();
	//	void leer();
	//	void leer(char* texto);
		void imprimir();
	
	protected:
};

#endif
