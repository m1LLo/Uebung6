/**
 * TODO
 *	
 * @file:		Tools.cpp
 * @date: 		05.06.2013
 * @author:	 	Markus Leitz (3543994)
 */

#include "Tools.h"

//Abstand des Inhalts zum Rand
const int Tools::ABSTAND_ZUM_RAND = 2;
const char* Tools::ECK_ZEICHEN = "+";
const char* Tools::TRENN_ZEICHEN = "-";
const char* Tools::PFEIL_FORM_RECHTS = "-->";
const char* Tools::PFEIL_FORM_LINKS = "<--";

string Tools::listeAlsGuiAusgeben(int inhaltsBreite)
{
	ostringstream o;
	/*
	 //1. Reihe Ausenkannte
	 for (int i = 1; i <= anzahlElemente; ++i)
	 {
	 static ListElement *aktuell = this->first;
	 int tempInhaltsLaenge = inhaltsLaengeAusgeben(aktuell->inhalt);

	 o << Tools::ausenKantenZeichnen(tempInhaltsLaenge);

	 //gehe zu nŠchstem Element
	 aktuell = aktuell->next;
	 }
	 o << endl;
	 */

	/*
	 //3. Reihe Trennlinie
	 for (int i = 1; i <= anzahlElemente; ++i)
	 {
	 static ListElement *aktuell = this->first;
	 int tempInhaltsLaenge = inhaltsLaengeAusgeben(aktuell->inhalt);

	 o << Tools::trennLinieZeichnen(tempInhaltsLaenge);

	 aktuell = aktuell->next;
	 }
	 o << endl;

	 //4. Reihe PREVIOUS
	 for (int i = 1; i <= anzahlElemente; ++i)
	 {
	 static ListElement *aktuell = this->first;
	 int tempInhaltsLaenge = inhaltsLaengeAusgeben(aktuell->inhalt);

	 o << Tools::previousZeichnen(tempInhaltsLaenge);

	 aktuell = aktuell->next;
	 }
	 o << endl;

	 //5. Reihe Trennzeichen
	 for (int i = 1; i <= anzahlElemente; ++i)
	 {
	 o << Tools::trennLinieZeichnen(4);
	 }
	 o << endl;

	 //6. Reihe NEXT
	 for (int i = 1; i <= anzahlElemente; ++i)
	 {
	 static ListElement *aktuell = this->first;
	 int tempInhaltsLaenge = inhaltsLaengeAusgeben(aktuell->inhalt);

	 o << Tools::nextZeichnen(tempInhaltsLaenge);

	 aktuell = aktuell->next;
	 }
	 o << endl;

	 for (int i = 1; i <= anzahlElemente; ++i)
	 {
	 o << Tools::ausenKantenZeichnen(4);
	 }
	 o << endl << endl;
	 */

	return o.str();
}

string Tools::trennLinieZeichnen(int inhaltsBreite)
{
	if (inhaltsBreite <= 8)
	{
		inhaltsBreite = 8;
	}
	ostringstream o;

	o << "   "; 			//3 Whitespaces zwischen den Listenelementen
	o << "|";				//Fuegt linken Spaltenrand ein

	//Trennlinie Skaliert mit
	for (int i = 1; i <= (inhaltsBreite + (ABSTAND_ZUM_RAND * 2)); ++i)
	{
		o << TRENN_ZEICHEN;
	}

	o << "|";

	return o.str();
}

string Tools::ausenKantenZeichnen(int inhaltsBreite)
{
	//8 ist gro§e von PREVIOUS
	if (inhaltsBreite <= 8)
	{
		inhaltsBreite = 8;
	}
	ostringstream o;

	o << "   "; 			//3 Whitespaces
	o << ECK_ZEICHEN;
	for (int i = 1; i <= (inhaltsBreite + ((ABSTAND_ZUM_RAND) * 2)); ++i)
	{
		o << TRENN_ZEICHEN;		//12 Striche
	}
	o << ECK_ZEICHEN;

	return o.str();
}

string Tools::previousZeichnen(int inhaltsBreite)
{

	ostringstream o;

	o << PFEIL_FORM_LINKS;
	o << "|";

	if (inhaltsBreite <= 8)
	{
		o << "  ";		//Whitespace

		o << "PREVIOUS";
		o << "  ";
	}

	else
	{
		for (int i = 1; i <= (inhaltsBreite / 2) + ABSTAND_ZUM_RAND; ++i)
		{
			o << " ";
		}
	}
	o << "|";
	return o.str();
}

string Tools::nextZeichnen(int inhaltsBreite)
{
	ostringstream o;

	o << PFEIL_FORM_LINKS;
	o << "|";

	if (inhaltsBreite <= 8)
	{
		o << "  ";		//Whitespace

		o << "NEXT";
		o << "  ";
	}

	else
	{
		for (int i = 1; i <= (8 / 2) + ABSTAND_ZUM_RAND; ++i)
		{
			o << " ";
		}
	}
	o << "|";
	return o.str();
}
