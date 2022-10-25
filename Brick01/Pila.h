// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
template<typename T>class Pila;

template<class T>class Pila
{
private:
	T* Datos;
	//vector<T> datos;
	int Cima;
	const int numeroElementos=5;
public:
	Pila()  {
		;
		Datos = new T [numeroElementos];
		Cima = -1;
	}
	~Pila() { delete[] Datos; }
	
	void Insertar(T c);
	// funcion Pop
	T Sacar();
	bool Vacia();
	bool Llena();//
};

template<class T>
void Pila<T>::Insertar(T elementoInsertar) {
	if (!Llena()) {
		Cima++;
		Datos[Cima] = elementoInsertar;

		UE_LOG(LogTemp,Warning,TEXT( "Se insertado satisfactoriamente"));
	}
	else {
		UE_LOG(LogTemp, Warning,TEXT("No se pudo ingresar el elemento en la pila"));
	}
}

template<class T>
T Pila<T>::Sacar() {
	if (!Vacia()) {
		T elementoSacar = Datos[Cima];
		Cima--;
		return elementoSacar;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No se pudo sacar el elemento de la pila"));
	}
}

template<class T>
bool Pila<T>::Vacia() {
	if (Cima < 0) {
		return true;
	}
	else
		return false;
}

template<class T>
bool Pila<T>::Llena() {
	if (Cima < numeroElementos - 1) {
		return false;
	}
	else {
		return true;
	}

}