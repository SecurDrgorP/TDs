#include <iostream>
using namespace std;
using std::string;

class Date {
	//variables
	private:
		int hour_;
		int minutes_;
		int day_;
		int month_;
		int year_;
	
	public:
		//constructeur
		Date(
		     const int hour, 
		     const int minutes, 
		     const int day, 
		     const int month, 
		     const int year
		     ) {
		       	hour_ = hour; 
			minutes_ = minutes;
		       	day_ = day; 
			month_ = month; 
			year_ = year; 
                     }
		//methodes
		void print_date(){
			cout << "\tla date du Day: " 
			     << day_ 
			     << " Month: " 
			     << Month() 
			     << " Year: "
			     << year_ 
			     << " à " 
			     << hour_ 
			     << " h " 
			     << minutes_ 
			     << " . "
			     << endl ;
		}

		string Month() {
			if (month_ == 1) {
                            return "Janvier";
  } else if (month_ == 2) {
    return "Fevrier";
  } else if (month_ == 3) {
    return "Mars";
  } else if (month_ == 4) {
    return "Avril";
  } else if (month_ == 5) {
    return "Mai";
  } else if (month_ == 6) {
    return "Juin";
  } else if (month_ == 7) {
    return "Juillet";
  } else if (month_ == 8) {
    return "Aout";
  } else if (month_ == 9) {
    return "Septembre";
  } else if (month_ == 10) {
    return "Octobre";
  } else if (month_ == 11) {
    return "Novembre";
  } else if (month_ == 12) {
    return "Decembre";
  } else {
    return "Mois inconnu";
  }
		}
};

int main() {
	Date date(1,2,3,4,5);
	date.print_date();
}


