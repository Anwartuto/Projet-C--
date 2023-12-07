#include <iostream>
#include <string>

class Personne {
protected:
    std::string nom;
    std::string prenom;
    int age;

public:
    Personne() {
        std::cout << "Entrez le nom: ";
        std::cin >> nom;
        std::cout << "Entrez le prénom: ";
        std::cin >> prenom;
        std::cout << "Entrez l'âge: ";
        std::cin >> age;
    }

    void afficherDetails() const {
        std::cout << "Nom: " << nom << std::endl;
        std::cout << "Prénom: " << prenom << std::endl;
        std::cout << "Âge: " << age << " ans" << std::endl;
    }
};

class Client : public Personne {
private:
    int identifiantClient;

public:
    Client() {
        std::cout << "Entrez l'identifiant client: ";
        std::cin >> identifiantClient;
    }

    void afficherDetails() const {
        Personne::afficherDetails();
        std::cout << "Identifiant Client: " << identifiantClient << std::endl;
    }
};

class Employe : public Personne {
private:
    std::string poste;

public:
    Employe() {
        std::cout << "Entrez le poste: ";
        std::cin >> poste;
    }

    void afficherDetails() const {
        Personne::afficherDetails();
        std::cout << "Poste: " << poste << std::endl;
    }
};

class Produit {
private:
    std::string nomProduit;
    double prix;

public:
    Produit() {
        std::cout << "Entrez le nom du produit: ";
        std::cin >> nomProduit;
        std::cout << "Entrez le prix du produit: ";
        std::cin >> prix;
    }

    void afficherDetails() const {
        std::cout << "Nom du Produit: " << nomProduit << std::endl;
        std::cout << "Prix: " << prix << " euros" << std::endl;
    }
};

class Transaction {
private:
    Client client;
    Produit produit;
    int quantite;

public:
    Transaction() {
        std::cout << "Entrez la quantité de produits: ";
        std::cin >> quantite;
    }

    void afficherDetails() const {
        std::cout << "Détails de la Transaction:" << std::endl;
        client.afficherDetails();
        produit.afficherDetails();
        std::cout << "Quantité: " << quantite << std::endl;
    }
};

int main() {
    Client client1;
    Employe employe1;
    Produit produit1;
    Transaction transaction1;

    std::cout << "\nInformations du Client:" << std::endl;
    client1.afficherDetails();

    std::cout << "\nInformations de l'Employé:" << std::endl;
    employe1.afficherDetails();

    std::cout << "\nInformations du Produit:" << std::endl;
    produit1.afficherDetails();

    std::cout << "\nInformations de la Transaction:" << std::endl;
    transaction1.afficherDetails();

    return 0;
}
