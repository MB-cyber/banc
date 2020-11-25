// Banque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include<iostream>
#include<string>
#include"Compte.h"

int main()
{
    std::cout << "Hello World!\n";

    Compte C1(50003, "Ahmed Amine", 8050.175);
    Compte C2(1, "entreprise", 10);
    C1.consulter();
    C1.retirerArgent(0.175);
    C1.consulter();
    C1.deposerArgent(10000000);
    C1.consulter();
    C2.consulter();
    C1.transferer(C2, 5);
    C1.consulter();
    C2.consulter();


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
