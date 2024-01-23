#include <iostream> //fonction d'affichage
#include <string>
//#include <cmath> 

using namespace std; //eviter de repeter l'espace de nommage avamt l'utilisation des fonctions dela bibliotheque (std::cout). std veut dire "standard".

int main()
{
    string str_in("\0");
    getline(cin, str_in);

    //transformation en majuscules.

    if (str_in != "\0")
        cout << str_in << endl;
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" << endl;
    return (0);
}
/*
type nom(valeur); ->declaration variable
type& reference(nom); -> declaration d'une reference (comme un alias). le type de la reference est la meme que l variable.
La reference est comme un pointeur sur la meme case memoire que la variable.
c-out = cout <<
c-in = cin >> , coupe la leture au premier espace ou retour a la ligne donc utiliser getline().
Quand on utilise getline() apres cin >> a, il faut utiliser cin.ignore(); entre deux sinon ca ne fonctionne pas.
and = &&
or = ||
not = !

*/