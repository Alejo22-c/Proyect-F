#pragma once
#include<iostream>
#include "Persona.h"
#include"ConexionBD.h"
using namespace std;
class Empleado : Persona{

private : string Dpi; string Genero; string Bthday; string Puesto; 
	   string Inicio_labores;

public :
	Empleado(){
	}
	Empleado(string nom, string ape, string dir, int tel, string dpi, 
		string gen, string fne, string pto, string fil){
		Dpi = dpi;
		Genero = gen;
		Bthday = fne;
		Puesto = pto;
		Inicio_labores = fil;
	}

	void setNombres(string nom) { Nombres = nom; }
	void setApellidos(string ape) { Apellidos = ape; }
	void setTelefono(int tel) { Telefono = tel; }
	void setDpi(string dpi) { Dpi = dpi; }
	void setGenero(string gen) { Genero = gen; }
	void setBthday(string fne) { Bthday = fne; }
	void setPuesto(string pto) { Puesto = pto; }
	void setInicio_labores(string fil) { Inicio_labores = fil; }

	string getNombres() { return Nombres; }
	string getApellidos() { return Apellidos; }
	int getTelefono() { return Telefono; }
	string getDpi() { return Dpi; }
	string getGenero() { return Genero; }
	string getBthday() { return Bthday; }
	string getPuesto() { return Puesto; }
	string getInicio_labores() { return Inicio_labores; }

	void EmpleadoNuevo() {

	}
};

