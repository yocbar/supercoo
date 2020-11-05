// prosit.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;




int main()
{
    Point A, B;
    double resultat;
    cout << " Point A " << endl;
    A.saisir();
    cout << " Point B " << endl;
    B.saisir();
    double estimation = 0;
    cout << "Estimation des distances "; cin >> estimation;


    resultat = A.calcul(B);
    if (resultat == estimation) {
        cout << "Ton estimation est bonne";
    }
    else {
        cout << "Ton estimation est fausse";
    }
    cout << "Le resultat était de " << resultat << " pour les point "<< endl;
    cout << " le point A :";
    A.affichage();
    cout << " le point B :";
    B.affichage();


    return 0;
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
