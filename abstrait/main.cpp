#include "Vehicule.hpp"
#include "Moto.hpp"
#include "Auto.hpp"

int main()
{
	Moto moto = Moto();
	Auto aut = Auto();

	moto.conduire();
	aut.conduire();

	return (0);
}
