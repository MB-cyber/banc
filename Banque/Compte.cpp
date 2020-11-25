#include "Compte.h"

Compte::Compte()
{
	this->num = 0;
	this->nome = "null";
	this->solde = 0.0;


}

Compte::Compte(int id, string name, double Soul)
{
	this->num = id;
	this->nome = name;
	this->solde = Soul;

}

Compte::Compte(const Compte& C)
{
	this->num = C.num;
	this->nome=C.nome;
	this->solde = C.solde;
}

bool Compte::retirerArgent(double X)
{


	if (this->solde > X) {

		cout << "money in the bank" << endl;
		this->solde -= X;
	
		return true;
	}
	
	return false;
}

void Compte::deposerArgent(double X)
{
	this->solde += X;
	 
}

void Compte::consulter()
{
	string compt = "( id= " + to_string(this->num) + ",name= " + this->nome + ",money= " + to_string(this->solde) + ")@";

	cout << compt << endl;

}

Compte Compte::transferer(Compte& C, double x)
{
	C.retirerArgent(x);
	
	this->solde += C.solde;

	
	return *this;
}



