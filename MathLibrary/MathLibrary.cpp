// MathLibrary.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include "CustomMathLib.h"

int main()
{
	
    std::cout << Math::Math::Random(0.0f, 10.0f, 2) << " / " << Math::Math::Random(0.0f, 10.0f, 2) << "\n";
	std::cout << Math::Math::Random(0, 10, 43) << " / " << Math::Math::Random(0, 10, 42) << "\n";
}