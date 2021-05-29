#pragma once
#include<mysql.h>
#include<iostream>
#include<string>
#include "Persona.h"
#include"ConexionBD.h"
using namespace std;
class Cliente : Persona {

private: string Nit; string Genero; string Correo_cliente; string Fecha_ing_cliente; string Bth_cliente;

public:
	Cliente() {
	}
	Cliente(string nom, string ape, string n, string gen, int tel, string ce, string fic, string fnc) {
		Nombres = nom;
		Apellidos = ape;
		Nit = n;
		Genero = gen;
		Telefono = tel;
		Correo_cliente = ce;
		Fecha_ing_cliente = fic;
		Bth_cliente = fnc;
	}

	void setNombres(string nom) { Nombres = nom; }
	void setApellidos(string ape) { Apellidos = ape; }
	void setNit(string n) { Nit = n; }
	void setGenero(string gen) { Genero = gen; }
	void setTelefono(int tel) { Telefono = tel; }
	void setCorreo_cliente(string ce) { Correo_cliente = ce; }
	void setFecha_ing_cliente(string fic) { Fecha_ing_cliente = fic; }
	void setBth_cliente(string fnc) { Bth_cliente = fnc; }

	string getNombres() { return Nombres; }
	string getApellidos() { return Apellidos; }
	string getNit() { return Nit; }
	string getGenero() { return Genero; }
	int getTelefono() { return Telefono; }
	string getCorreo_cliente() { return Correo_cliente; }
	string getFecha_ing_cliente() { return Fecha_ing_cliente; }
	string getBth_cliente() { return Bth_cliente; }


	void create_client() {
		int q_estado;
		ConexionBD cn = ConexionBD();

		cn.abrir_conexion();
		string t = to_string(Telefono);
		if (cn.getConectar()) {
			string  insertar = "INSERT INTO clientes(Nombres,Apellidos,Nit,Genero,Telefono,Correo_cliente,Fecha_ing_cliente,Bth_cliente) VALUES ('" + Nombres + "','" + Apellidos + "','" + Nit + "','" + Genero + "'," + t + ",'" + Correo_cliente + "','" + Fecha_ing_cliente + "','" + Bth_cliente + "')";
			const char* i = insertar.c_str();

			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << "Ingreso Exitoso ..." << endl;
			}
			else {
				cout << " xxx Error al Ingresar 2 xxx" << endl;
			}
		}
		else {
			cout << " xxx Error en la Conexion 1 xxxx" << endl;
		}
		cn.cerrar_conexion();
	}
	
	void read_client() {

		int q_estado;
		

		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			
			string consulta = "select * from clientes ";
			
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if(!q_estado){
				resultado = mysql_store_result(cn.getConectar());

				while(fila=mysql_fetch_row(resultado)){
					cout << fila[1] << ", "<<fila[2]<<","<<fila[3] << endl;

				}
			}
		}
		else {
			cout << " xxx Error en la Conexion 1 xxxx" << endl;
		}
		cn.cerrar_conexion();
	}
	

};