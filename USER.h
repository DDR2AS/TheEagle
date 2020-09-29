#pragma once
//#include <string>
//#include <cstdlib>
//#include <conio.h> //getch
//#include <vector>


using namespace System;
public ref class USER
{
public:
	USER(String^ idUsuario, String^ clave, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno,String^ correo);
	
private:
	String^ idUsuario;
	String^ clave;
	String^ nombre;
	String^ apellidoPaterno;
	String^ apellidoMaterno;
	String^ correo;
};

/*int main() {
	

	string usuario, password;
	int contador = 0; //intentos maximos
	bool ingresa = false;


	do {
		system("cls");//Clear the screen
		cout << "\t\t\tLOGIN DE USUARIO" << endl
			<< "\t\t\t----------------" << endl
			<< "\n\tUsuario: ";
		getline(cin, usuario);

		//Para la contraseña
		cout << "\tPassword: ";

		password = "";//Tengo que darle un valor inicial
		char caracter;
		caracter = getch();
		//Diferente de enter
		while (caracter != ENTER) {
			//push_back me permite agregar un caracter al 
			//final de la cadena aumentando su longitud
			if (caracter != BACKSPACE) {//caracter de retroceso
				password.push_back(caracter);
				cout << "*";
			}
			else {
				//Que ocurre si apretamos la tecla de borrado
				if (password.length() > 0) {
					cout << "\b \b";
					password = password.substr(0, password.length() - 1);
				}
			}
			caracter = getch();
		}

		for (int i = 0; i < usuarios.size(); i++) {
			if (usuarios[i] == usuario && claves[i] == password) {
				ingresa = true;
				break;
			}
		}

		if (!ingresa) {
			cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
			cin.get();
			contador++;
		}

	} while (!ingresa);
	cout << endl << "Bienvenido al sistema" << endl;
	cin.get();
}
*/
