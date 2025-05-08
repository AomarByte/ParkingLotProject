# Parkplatz-Verwaltung (C++)

Ein einfaches C++-Projekt zur Verwaltung eines Parkplatzes. Fahrzeuge wie Autos, LKWs und Motorräder können hinzugefügt werden. Das System berechnet automatisch die belegten und freien Parkplätze.

## Funktionen

- Fahrzeuge anlegen (Auto, LKW, Motorrad)
- Fahrzeuginformationen anzeigen
- Parkplätze verwalten
- Dynamische Berechnung freier Plätze

## Installation & Ausführung

```bash
g++ -std=c++11 main.cpp -o parkplatz
./parkplatz


## BeispielausgabeAuto 
Kennzeichen: B:32123
gebrauchte platz: 1
LKW Kennzeichen: E:Y233
gebrauchte platz: 2
Motorrad Kennzeichen: Ro:Z123
gebrauchte platz: 1
*****************************
Alle Parkplätze: 100
Freie Parkplätze: 96
*****************************

##Geplante Erweiterungen

- Fahrzeuge entfernen

- Speichern/Laden von Daten

-Benutzerrollen (z. B. Admin, Nutzer)

-GUI mit Qt oder Web-Frontend


