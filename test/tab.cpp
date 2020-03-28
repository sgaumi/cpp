#include <iostream>
#include <vector>

using namespace std;

void fonction_qui_copie_le_tableau(vector<int> t){}

void fonction_qui_copie_pas_le_tableau(vector<int> const& t){} //passage par reference mais le tableau ne peut pas etre modifie (const)

void fonction_qui_modifie_le_tableau(vector<int> & t){} //passage par reference et le tableau peut etre modifie dans la fonction

int main(){
	
	int const tailleTab1 = 3;
	vector<int> tab1(tailleTab1); //tableau dynamique de int de taille 3
	tab1[0]=0;
	tab1[1]=1;
	tab1[2]=2;
	tab1.push_back(3); //on rajoute un élément (3) à la fin du tab
	tab1.push_back(4);
	tab1.pop_back(); //on enlève le dernier élément du tableau

	for (unsigned int i=0;i<tab1.size();i++){
		cout << tab1[i] << endl;
	}

	return 0;
	

}
