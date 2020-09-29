#include "USER.h"
#include "CuentaComprador.h"


CuentaComprador::CuentaComprador(String^ idUsuario, String^ clave, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno,String^ correo,unsigned int nroCuenta,String^ direccionEnvio,double saldo)
: USER( idUsuario, clave, nombre, apellidoPaterno, apellidoMaterno, correo)
{
	this->nroCuenta=nroCuenta;
	this->direccionEnvio=direccionEnvio;
	this->	saldo=saldo;
	this->ListaTransacciones= gcnew List<Transacciones^>(); //Llamamos al constructor de esa funcion
}

