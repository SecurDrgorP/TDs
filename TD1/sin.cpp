//sin(x) = som{n=0,&}(((-1)^n/(2*n+1)!)*x^(2*n+1))
#include <iostream>
using namespace std;

//function prototype
int sign(int);
int facto(int);
float mult(float, int);


int main() {
    int n, i, v;
    float x , result=0;

    cout << "input n: "; 
    cin >> n;
    cout << "input x: "; 
    cin >> x;

    float pi = 3.14159265*x;
    for(i=0; i<=n; i++) {
       v = 2*i+1;
       result += (sign(i)*mult(pi, v))/facto(v);
    }

    cout<< "\nsin(" << x << ") = " << result << endl;

    

    return 0;
}

int sign(int n) {
   if(n%2 == 0) {
      return 1;
   } else {
      return -1;
   }
}

int facto(int v) {
   if (v > 1) {
      return (v * facto(v-1));
   } else {
      return 1;
   }
}

float mult(float x, int v) {
   if (v > 0) {
      return (x * mult(x, v-1));
   }else {
      return 1;
   }
}
