#include <string>	//obligé pour utiliser string

using namespace std; //oblige en utilisant un include

int main(){

	bool a=true;
	bool a2(false);	//2 syntaxes possibles pour init une variable

	int b=1;
	int b2(2);

	char c='c';
	char c2('c');

	double d=0.1;
	double d2(0.2);

	string e="abcde";
	string e2("abcde");

	int f(2), g=3, h=4, i(5), j(6); //on peut declarer plusieurs var a la fois

	int k;
	k=7;
	k(8);

	int l(9);
	int& l2(l); //reference à l. est modifie si l est modifie (fonctionne avec pointeur)
	int l3(l); //prend la valeur de l mais est pas modifie si l est modifie (pas comme reference)
}
