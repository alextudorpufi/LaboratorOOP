#include <iostream>
#include "Agenda.h"
#include "Coleg.h"
#include "Cunoscut.h"
#include "Prieten.h"

int main() {
    Agenda a;
    Prieten* Pufilan = new Prieten("Pufilan", "20 aprilie", "Strada 3 fantani, nr 4" , "0798989898");
    Prieten* Jamal = new Prieten("Jamal", "16 august", "Dubai mumbai", "0712345678");
    Cunoscut* Nigger = new Cunoscut("Nigger", "0769696969");
    a.Adauga(Pufilan);
    a.Adauga(Nigger);
    a.Adauga(Jamal);
    for (Contact* prieten : a.GetPrieteni()) {
        std::cout << (dynamic_cast<Prieten*>(prieten))->GetAdresa() << "\n";
    }
}