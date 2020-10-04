//but:
/*Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission.Les
représentants reçoivent 250 $ par semaine plus 7.5 % de leurs ventes brutes par semaine.Par exemple, un
représentant qui vend pour 5000 $ de produits chimiques en une semaine, perçoit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme*/

//date:2020-10-02
//auteur:Matthew Ménard

#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	//variables
	float ventes;	//vente brut hebdomadaire 
	const float pourcent = 7.5; // pourcentage de la commission
	const float salair = 250;//prix salaire par semaine
	float paye = 0; // paye par semaine
	 int semaine = 2; // compteur de semaine
	 float cummul=0; //cummulatif de tout les semaine en $


	cout << "entrer la valeur des ventes de la semaine 1 : " << endl;
	cin >> ventes;

	while (ventes != -1) // ferme le menu a -1
	{
	

		paye = ((ventes * pourcent / 100) + salair); // calcul de la paye
		cummul = cummul + paye; // calcul du cummul
		cout << cummul << endl;
		
		cout << "entrer la valeur des ventes de la semaine" << semaine << ": " << endl;
		cin >> ventes;
		
		 semaine++; // changement de semaine

	}
	cout << "salaire total de tout les semaines: "<< cummul;


	return 0;
}/*
 plan test
 ventes               cummul
 0                     25
 5000                  625
 -1                              ferme le programme
 */