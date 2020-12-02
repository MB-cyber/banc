#pragma once
#include<iostream>
#include<string>
using namespace std;
class Compte
{
private:

	int	num;
	string nome;
	double solde;

public:
	Compte();
	Compte(int, string, double);
	Compte(const Compte&) ;
	bool retirerArgent(double);
	void deposerArgent(double);
	void consulter() const;

	Compte  transferer(Compte&, double);


};

