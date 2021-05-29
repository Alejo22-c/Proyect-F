#pragma once
#include<iostream>
using namespace std;
class Persona
{
protected: string Nombres, Apellidos, Fecha_nacimiento; 
		int Telefono=0;

protected: 
	Persona() {
	}
	Persona(string nom, string ape, string fn, int tel) {
		Nombres = nom;
		Apellidos = ape;
		Fecha_nacimiento = fn;
		Telefono = tel;
	}
};