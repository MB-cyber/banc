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

		cout << "money in the bank action is done" << endl;
		this->solde -= X;
		(*this).consulter();
		cout << "thanks@retirerArgent" << endl;
		return true;
	}
	

	cout << "refill your stash the bank action failed " << endl;

	cout << "thanks@retirerArgent" << endl;
	return false;
}

void Compte::deposerArgent(double X)
{
	this->solde += X;
	cout << "thanks@deposerArgent" << endl;
}

void Compte::consulter() const
{
	string compt = "your account is ( id= " + to_string(this->num) + ",name= " + this->nome + ",money= " + to_string(this->solde) + ")@";

	cout << compt << endl;


}

Compte Compte::transferer(Compte& C, double x)
{
	cout << "@trancfer" << endl;
	double y;
	y = C.solde;
	C.retirerArgent(x);
	
	this->solde +=y-C.solde ;
	cout << "thanks@transfer" << endl;
	
	return *this;
}



