#pragma once
#include <iostream>
#include <string>
using namespace std;

// Basisklasse für Fahrzeuge
class Fahrzeug {
protected:
    string kennzeichen;
    int groesse; // Größe des Fahrzeugs

public:
    Fahrzeug(string k, int g) : kennzeichen(k), groesse(g) {}

    // Methode zur Anzeige von Infos
    virtual void display_info() {
        cout << "Fahrzeug: " << kennzeichen << endl;
    }

    // Methode zur Rückgabe der Größe
    virtual int getSize() {
        return groesse;
    }
    virtual ~Fahrzeug() {} // Destruktor
};

// Klasse Auto, erbt von Fahrzeug
class Auto : public Fahrzeug {
public:
    Auto(string k, int g) : Fahrzeug(k, g) {}
    void display_info() override {
        cout << "Auto Kennzeichen: " << kennzeichen << endl;
    }
    int getSize() override { return 1; } // Auto braucht 1 Platz
};

// Klasse LKW, erbt von Fahrzeug
class LKW : public Fahrzeug {
public:
    LKW(string k, int g) : Fahrzeug(k, g) {}
    void display_info() override {
        cout << "LKW Kennzeichen: " << kennzeichen << endl;
    }
    int getSize() override { return 2; }  // LKW braucht mehr Platz (z. B. 2 oder 3)
};

// Klasse Motorrad, erbt von Fahrzeug
class Motorrad : public Fahrzeug {
public:
    Motorrad(string k, int g) : Fahrzeug(k, g) {}
    void display_info() override {
        cout << "Motorrad Kennzeichen: " << kennzeichen << endl;
    }
    int getSize() override { return 1; }
};


// Klasse Parkplatz
class Parkplatz {
protected:
    int alle_parkplaetze = 100; // Gesamtanzahl der Parkplätze
    int belegte_plaetze = 0;    // Wie viele Plätze sind schon belegt?

public:
    // Fahrzeug parken
    void parkeFahrzeug(Fahrzeug* f) {
        belegte_plaetze += f->getSize();
    }
    
    // Anzeige der Parkplatz-Infos
    void display_parkplaetze_info() {
        cout << "*****************************" << endl;
        cout << "Alle Parkplätze: " << alle_parkplaetze << endl;
        cout << "Freie Parkplätze: " << (alle_parkplaetze - belegte_plaetze) << endl;
        cout << "*****************************" << endl;
    }
};