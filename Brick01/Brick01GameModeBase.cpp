// Copyright Epic Games, Inc. All Rights Reserved.


#include "Brick01GameModeBase.h"
#include "Brick.h"
#include "Pila.h"

void ABrick01GameModeBase::BeginPlay()
{ 
	Super::BeginPlay();
	
	Pila<class ABrick*>  PilaLadrillo;
	PilaLadrillo.Insertar(Brick1);
	PilaLadrillo.Insertar(Brick2);
	PilaLadrillo.Insertar(Brick3);
	PilaLadrillo.Sacar();
   // ABrick * pilaClase= PilaLadrillo.Sacar();
	//UE_LOG(LogTemp, Warning, TEXT("el valor es  ", *nu)); // es agrego la clase dentro de nuestar pila de ese modo ya estaria hecho 
	                                                       // que unreal no puede mostrar con UE_LOG debido al tamano de macros dentro de nu


}
