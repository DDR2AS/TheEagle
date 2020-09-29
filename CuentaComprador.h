#pragma once
#include "Transacciones.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class CuentaComprador : public USER
{
public:
	CuentaComprador(String^ idUsuario, String^ clave, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno,String^ correo,unsigned int nroCuenta,String^ direccionEnvio,double saldo);
	
private:
	unsigned int nroCuenta;
	String^ direccionEnvio;
	List<Transacciones^>^ ListaTransacciones;
	double saldo;
};


