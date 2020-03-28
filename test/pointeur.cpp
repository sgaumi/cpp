#include <iostream>


int main(){

	int * pointeur(0); //init pointeur qui pointe vers rien (mem 0)

	pointeur = new int; //alloc memoire

	*pointeur = 2;

	std::cout << pointeur << " : " << *pointeur << std::endl;

	delete pointeur; //free la memoire sur laquelle pointeur pointe

	std::cout << pointeur << " : " << *pointeur << " cette case memoire n'est plus à nous elle a été free" << std::endl;

	pointeur = 0; //pointe vers rien



}
