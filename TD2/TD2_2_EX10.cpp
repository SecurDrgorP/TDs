#include <iostream>
using namespace std;

class Date {
	private:
		int year_;
		int month_;
		int day_;
	
	public:
		//Constructeur
		Date (const int year, const int month, const int day) {
			year_ = year;
			month_ = month;
			day_ = day;
		}

		//Methode
		void date () {
			cout << "Date de naissance : " << day_ << "/" << month_ << "/" << year_ << endl;
		}
};


class Personne : public Date {
 private:
  //attributs
  string nom_;
  string prenom_;
  Date date_naissance_;

 public:
  // Constructeur
  Personne(string nom, string prenom, Date date_naissance) {
    nom_ = nom;
    prenom_ = prenom;
    date_naissance_ = date_naissance;
  }

  //Methode
  virtual void Afficher() {
    cout << "Nom : " << nom_ << endl;
    cout << "Prénom : " << prenom_ << endl;
    date_naissance_.date();
  }
};

class Employe : public Personne {
    private:
      //attributs
      double salaire_;

    public:
      //Constructeur
      Employe(string nom, string prenom, Date date_naissance, double salaire)
          : Personne(nom, prenom, date_naissance) {
        salaire_ = salaire;
      }

      //Methode
      void Afficher() override {
        Personne::Afficher();
        cout << "Salaire : " << salaire_ << endl;
      }
};

class Chef : public Employe {
      private:
	      // Variable privée
	      string service_;

      public:
	      //Constructeur
	      Chef(string nom, string prenom, Date date_naissance, double salaire, string service)
               : Employe(nom, prenom, date_naissance, salaire) {
                 service_ = service;
              }

              //Methode
              void Afficher() override {
                Employe::Afficher();
                cout << "Service : " << service_ << endl;
              }
};

class Directeur : public Chef {
      private:
         string societe_;

      public:
         // Constructeur
         Directeur(string nom, string prenom, Date date_naissance, double salaire, string service, string societe)
            : Chef(nom, prenom, date_naissance, salaire, service) {
            societe_ = societe;
         }

         //Methode
         void Afficher() override {
           Chef::Afficher();
           cout << "Société : " << societe_ << endl;
         }
};

int main() {
  //objet Personne
  Personne personne("Dupont", "Jean", Date(1980, 1, 1));

  //objet Employé
  Employe employe("Martin", "Pierre", Date(1990, 2, 2), 2000);

  //objet Chef
  Chef chef("Dupont", "Paul", Date(1970, 3, 3), 3000, "Informatique");

  //objet Directeur
  Directeur directeur("Durand", "Marie", Date(1960, 4, 4), 4000, "Informatique", "Google");

  //Affiche 
  personne.Afficher();
  employe.Afficher();
  chef.Afficher();
  directeur.Afficher();

  return 0;
}

