#include <iostream>
#include "fahrzeug.h"

int main() {
    // Parkplatz erstellen
    Parkplatz p;

    // Auto erstellen und parken
    Fahrzeug* v = new Auto("B:32123", 1);
    v->display_info();
    cout << "gebrauchte platz: " << v->getSize() << endl;
    p.parkeFahrzeug(v);

    // LKW erstellen und parken
    Fahrzeug* l = new LKW("E:Y233", 2);
    l->display_info();
    cout << "gebrauchte platz: " << l->getSize() << endl;
    p.parkeFahrzeug(l);

    // Motorrad erstellen und parken
    Fahrzeug* m = new Motorrad("Ro:Z123", 1);
    m->display_info();
    cout << "gebrauchte platz: " << m->getSize() << endl;
    p.parkeFahrzeug(m);

    // Parkplatz-Infos anzeigen
    p.display_parkplaetze_info();

    // Speicher aufräumen
    delete v;
    delete l;
    delete m;

    return 0;
}