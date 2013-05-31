/**
 * Deklarationen zur Klasse LinList.
 * Verwaltet Elemente einer doppelt verketteten Liste mit Pointern auf das
 * Erste und das Letzte Element sowie der Anzahl der Elemente.
 * @file	LinListTst.cpp
 * @author	folz
 * @date	21.05.2012
 */
#include <iostream>
#include "LinList.h"
#include "TestDialog.h"
using namespace std;



int main()
{
	TestDialog dialog;
	dialog.hauptMenueAusgeben();
	//Erstellt Objekt
	LinList liste1;

	//Fuegt Element an Ende an mit Inhalt "alpha"
	liste1.push_back("alpha");

	//Fuegt Element an Ende an mit Inhalt "beta"
	liste1.push_back("beta");
	//cout << liste1 << endl;
}

