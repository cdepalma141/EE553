#include <iostream>

using namespace std;

int x = 0; //global variables are always initiallized to binary 0

int main() {
  float f = 1.5f; // accurate to 7 digits (1.500000)
  double d = 1.5; // accurate to 15 digits (1.50000000000000)
  long double e = 1.5L; // depends on implementation, varies depending on machines

  double Na = 6.022e+23; // exponential notation

  double d1 = 1 + 1.5; // type promote 1 --> double (1.0)
  double d2 = 3/2; // first compute integer 3/2 (1) then convert to 1.0
  double d3 = 1.5f * 3; // promotes 3 --> float (3.0f) -> convert to double

  cout << d1 << '\n' << d2 << '\n' << d3 << '\n' ;

}
