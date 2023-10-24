#include <iostream>
using namespace std;
 
class Pile {
 
   private:
   vector<char> vect_;

   public:
   void push(char cha) {
      vect_.push_back(cha);
   }

   char pop() {
      char val = vect_.back();
      vect_.pop_back();
      return val;
   }

};

int main() {
   Pile pile;

   pile.push('C');
   pile.push('h');
   pile.push('a');
   pile.push('r');
   pile.push('r');
   pile.push('a');
   pile.push('j');
   pile.push(' ');
   pile.push('Z');
   pile.push('a');
   pile.push('k');
   pile.push('a');
   pile.push('r');
   pile.push('i');
   pile.push('a');
   pile.push('a');
   pile.push('\n');



   while (!pile.empty()) {
      cout << "\n" << pile.pop() ;
   }

   return 0;
}

