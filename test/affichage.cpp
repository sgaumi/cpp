#include <iostream>
#include <string>

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


	//affichage variables
	int	a(2);
	string b("abcd");
	cout << a;
	cout << b;
	cout << "a=" << a << " b=" << b << endl;


	return 0;

}
