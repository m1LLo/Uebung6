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
#include "AutoTest.h"
using namespace std;

int main()
{
	int benutzerEingabe;
	cin >> benutzerEingabe;

	switch (benutzerEingabe)
	{
	case AUTO_TEST:
	{
		AutoTest autoTest;
		break;
	}
	case MANUELLER_TEST:
	{
		TestDialog dialog;
		dialog.hauptMenueAusgeben();
		break;
	}
	default:
	{
		cout << "FALSCHE EINGABE" << endl;
	}
	}

	//Erstellt Objekt
	//LinList liste1;

	//Fuegt Element an Ende an mit Inhalt "alpha"
	//liste1.push_back("alpha");

	//Fuegt Element an Ende an mit Inhalt "beta"
	//liste1.push_back("beta");
	//cout << liste1 << endl;
}

