#include <iostream>

using namespace std;	// quel lot de fonctionnalite utiliser/quel espace de nom

int main(){
	
	cout << "Affichage avec retour a la ligne" << endl;
	cout<<"Affichage avec retour a la ligne"<<endl;
	cout << "Affichage sans retour a la ligne";
	cout << "Affichage 1" << endl << "Affichage 2" << endl;
	cout << endl;
	//cout;		//sert a rien
	//endl;		//MARCHE PAS 
	//<< endl;	//MARCHE PAS
	cout << "\"" << endl; //afficher guillemet
	cout << "\\" << endl; //afficher backslash
	cout << "\n" << endl; //backslash n = saut de ligne aussi
	return 0;

}
