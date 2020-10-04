//but:
/*
Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
L’utilisateur a un maximum de 5 chances.Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
nombre.
Défi : Le programme pourrait indiquer si la valeur à trouver est plus grande ou plus petite que la dernière proposition
que l'utilisateur a faite.*/
//date: 2020-10-02
//auteur:Matthew Ménard


#include<iostream>
#include<Windows.h>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	//déclaration des variables
	int nb;// Le nombre essayer pour trouvé le nombre prix au hasard
	int essai = 4;//Nombre d'essai
	int gagner = 0; // Si le joueur gagne la valeur de gagner monte à 1

	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

	cout << "essayer de deviner le nombre entre 0 et 100" << endl;
	cin >> nb;

	for (int compteur = 0; compteur < 4; compteur++) // boucle qui laisse 4 esssaie + c'elle juste en haut (donc 5)
	{
		if (nb >= 0 && nb < 101) // si le nobre est entre 0 et 100
		{
			if (nb == iRandom) // si le joueur trouve le nombre il gagne.
			{
				cout << "Vous Avez gagné!!";
				gagner = 1;// La valeur de gagner monte a un pour sortir de la boucle
			}
			else // si le joueur n'a pas gagner...
			{
				cout << "il vous reste " << essai << " essais  ";//indiquer le nombre d'essaie...
				if (nb < iRandom)// + indiquer si le chiffre est plus grand...
				{
					cout << "(le chiffre est plus grand)";
				}
				else //ou s'il est plus petit!
				{
					cout << "(le chiffre est plus petit)";
				}
			}
		}
		else { // si le chifffre n'est pas compris entre 0 et 100
			cout << nb << " n'est pas inclu entre 0 et 100 " << endl; //indiquer qu'il n'est pas inclu
			cout << "il vous reste " << essai << " essais"; // indiquer le nombre d'essaie restant
		}if (gagner == 1) // si le joueur a gagner...
		{
			compteur = 5; // mettre le compteur a 5 (comme s'il avait fait tt les essaie) pour fermer la boucle (5 car je crois avoir trouver un bug à 4)
		}
		else// si le chiffre n'est pas celui désiré
		{
			cout << " réassayer de deviner le nombre entre 0 et 100 " << endl; 
			cin >> nb;
			essai--; // baisser l'indicateur du nombre d'essai
		}
	}
	if (gagner !=1) //si après tout les essais le joueur ne gagne pas...
	{
		cout << "vous avez échoué.." << " La réponse était: " << iRandom ; //lui indiquer qu'il a perdu et la réponse recherchée. 
	}
	

	return 0;
 

/*
plan teste     irandom =17
nombre          résultat 
  5            plus grand/4 essai

  -1           nest pas entre 0 et 100 / 3 essai
  101          n'est pas entre 0 et 100 /2 essai
  50           le chiffre est plus petit/1 essai
  17 /// 15          vous avez gagné  ///  vous avez perdu le nombre était 17


*/




