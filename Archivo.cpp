#include<iostream>
#include<stdlib.h>
#include<fstream>//librería para mi archivo
using namespace std;
void escribir();

int main (){
	escribir();
	return 0;
}
void escribir(){
	ofstream archivo;
	string nombreArchivo,tipo,tamanio,fecha;
	
	
	cout << "Nombre del archivo:";
	getline(cin,nombreArchivo);
	
	
	archivo.open(nombreArchivo.c_str(),ios::out);//Abre mi archivo
	
	if(archivo.fail()){
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	
	cout <<"\nDigite el tipo del archivo:" ;
	getline(cin,tipo);
	archivo<<tipo;
	
	cout <<"\nDigite el tamanio del archivo:" ;
	getline(cin,tamanio);
	archivo<<tamanio;
	
	cout <<"\nFecha de creacion:" ;
	getline(cin,fecha);
	archivo<<fecha;
	
	archivo.close(); //cerrar el archivo
	
}
