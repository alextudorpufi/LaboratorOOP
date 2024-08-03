#include <iostream>
#include "Biblioteca.h"
#include "Roman.h"
#include "Revista.h"
using namespace std;
int main()
{
	Biblioteca b;
	(b += new Roman("DON QUIJOTE", "MIGUEL DE CERVANTES")) += new Revista("Journal of Artificial Intelligence", 100);
	b += new Roman("MACBETH", "WILLIAM SHAKESPEARE");
	for (auto x : b)
	{
		std::cout << x->GetInfo() << std::endl;
	}
	std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;
	std::cout << "Lista doar cu romane:" << std::endl;

	b.PrintFilter([](Carte* c)->bool {
		// adaugati codul care de verifica daca o carte este roman
		string temp = c->GetInfo();
		if (temp[1] == 'o') // pentru rOman, avem litera 'o', iar pentru rEvista, avem litera 'e'
			return 1;
		else
			return 0;
		});

	return 0;
}
