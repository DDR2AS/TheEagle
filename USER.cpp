#include "USER.h"
#include <iostream>
using namespace std;

USER::USER(String^ idUsuario, String^ clave, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno,String^ correo)
{
	this->idUsuario= idUsuario;
	this->clave=clave;
	this->nombre=nombre;
	this->apellidoPaterno=apellidoPaterno;
	this->apellidoMaterno=apellidoMaterno;
	this->correo=correo;
}
/*void Login::establecerUsuario(string  usuario) {
	if (usuario.size() <= 25) {
		idUsuario = usuario;
	}
	else {
		//establece nombre a los 25 primeros caracteres del parametro nombre
		idUsuario = usuario.substr(0, 25);//Empieza de 0 a 25
		//funcion cerr es para crear mensajes de advertencia.
		cerr << "El usuario ingresado \"" << usuario << "\" excede la longitud maxima (25).\n"
			"Se limito el nombreCurso a 25 caracteres.\n";
	}
}*/
