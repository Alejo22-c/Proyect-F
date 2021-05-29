#include<iostream>
#include"Cliente.h"
using namespace std;
int main() {
	
	cout << "-----------------------SISTEMA DE FACTURACION-----------------------\n\n\n";
	
	
	/*
	string Nombres, Apellidos, Nit, Genero, Bth_cliente, Correo_cliente, Fecha_ing_cliente;
	int Telefono;
	cout << "Ingrese Nombres:";
	getline(cin, Nombres);
	cout << "Ingrese Apellidos:";
	getline(cin, Apellidos);
	cout << "Ingrese Nit:";
	getline(cin, Nit);
	cout << "Ingrese su genereo 0.masculino 1.femenino:";
	cin >> Genero;
	cout << "Ingrese Telefono:";
	cin >> Telefono;
	cin.ignore();
	cout << "Ingrese el correo electronico:";
	getline(cin, Correo_cliente);
	cout << "Ingrese la fecha de hoy: ";
	cin >> Fecha_ing_cliente;
	cout << "Fecha Nacimiento:";
	cin >> Bth_cliente;
	
	Cliente c = Cliente(Nombres,Apellidos,Nit,Genero,Telefono,Correo_cliente,Fecha_ing_cliente,Bth_cliente);
	*/
	string Nit;

	cout << "Ingrese el Nit del cliente que desea consultar: ";
	cin >> Nit;
	Cliente c = Cliente();
	c.read_client();
	//c.create_client();
	

	system("pause");
	return 0;
}