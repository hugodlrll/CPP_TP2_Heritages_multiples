#include <iostream>
#include "Vehicule.hpp"
#include "Voiture.hpp"
#include "Bateau.hpp"
#include "VoitureAmphibie.hpp"
#include <cstdlib> // Pour utiliser rand()
#include <ctime>   // Pour initialiser le générateur de nombre aléatoire

int main() {
    srand(static_cast<unsigned int>(time(0))); // Initialisation du générateur aléatoire
    double random = rand() % 100 / 100.0;

    // Création d'un véhicule avec une vitesse max de 150, 5 places et 2 occupants
    Vehicule v(150, 5, 2);
    Voiture voit;
    Bateau bat;
    VoitureAmphibie va;
    std::cout << v << std::endl;

    // Essai de démarrage
    try {
        std::cout << "1 - Démarrage du véhicule..." << std::endl;
        v.demarrer();
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur lors du démarrage : " << e.what() << std::endl;
    }

    try {
        std::cout << "2 - Démarrage du véhicule..." << std::endl;
        v.demarrer();
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur lors du démarrage : " << e.what() << std::endl;
    }

    // Essai de l'arrêt
    try {
        std::cout << "1 - Arrêt du véhicule..." << std::endl;
        v.arreter();
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur lors de l'arrêt : " << e.what() << std::endl;
    }

    try {
        std::cout << "2 - Arrêt du véhicule..." << std::endl;
        v.arreter();
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur lors de l'arrêt : " << e.what() << std::endl;
    }

    // Essai de l'accélération
    try {
        std::cout << "1 - Accélération du véhicule..." << std::endl;
        v.accelerer(10);
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur lors de l'accélération : " << e.what() << std::endl;
    }

    v.demarrer(); //démarrage du véhicule
    try {
        std::cout << "2 - Accélération du véhicule..." << std::endl;
        v.accelerer(10);
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur lors de l'accélération : " << e.what() << std::endl;
    }

    // Essai du freinage
    try {
        std::cout << "1 - Freinage du véhicule..." << std::endl;
        v.freiner(10);
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur lors du freinage : " << e.what() << std::endl;
    }

    try {
        std::cout << "2 - Freinage du véhicule..." << std::endl;
        v.freiner(10);
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur lors du freinage : " << e.what() << std::endl;
    }

    // Essai monter dans le véhicule
    try {
        std::cout << "1 - Monter dans le véhicule..." << std::endl;
        v.monter(2);
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur pour monter dans le véhicule : " << e.what() << std::endl;
    }

    v.arreter();
    try {
        std::cout << "2 - Monter dans le véhicule..." << std::endl;
        v.monter(2);
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur pour monter dans le véhicule : " << e.what() << std::endl;
    }

    try {
        std::cout << "3 - Monter dans le véhicule..." << std::endl;
        v.monter(10);
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur pour monter dans le véhicule : " << e.what() << std::endl;
    }

    // Essai descendre du véhicule
    try {
        std::cout << "1 - descendre du véhicule..." << std::endl;
        v.descendre(2);
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur pour descendre du véhicule : " << e.what() << std::endl;
    }

    try {
        std::cout << "2 - descendre du véhicule..." << std::endl;
        v.descendre(10);
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur pour descendre du véhicule : " << e.what() << std::endl;
    }

    v.demarrer();
    try {
        std::cout << "3 - Monter dans le véhicule..." << std::endl;
        v.monter(2);
        std::cout << v << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur pour monter dans le véhicule : " << e.what() << std::endl;
    }

    // mettre la voiture en panne
    cout << v;
    v.mettreEnPanne(random);
    cout << v;

    // démarrer et arrêter la voiture
    cout << "Test de la voiture" << endl;
    voit.demarrer();
    voit.arreter();

    // démarrer et arrêter le bateau
    cout << "Test du bateau" << endl;
    bat.demarrer();
    bat.arreter();

    //démarrer et arrêter le véhicule amphibie
    cout << "Test du véhicule amphibie" << endl;
    va.Voiture::demarrer();
    va.Bateau::demarrer();
    va.Bateau::arreter();
    va.Voiture::arreter();
    
    return 0;
}