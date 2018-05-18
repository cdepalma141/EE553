#include <iostream>

using namespace std;

int x = 0; //global variables are always initiallized to binary 0

int main() {
  for (int i = 1; i <= 10; i++) {
    cout << i;
  }
    cout << '\n';
    for (float x = 0.0; x <= 10.0f; x += .1f)
      cout << x << ' ';
    cout << '\n';  // with too many steps roundoff error can affect answer with floating point
    // float is 32 bit and double is 64 bit
    // int is 32 bit and long and long long are 64 bit
    /*
      1/2 = 0.5
      1/4 = .25
      1/10 = 0.1
      1/3 = 0.3333333333 <-- "bad"

      for a computer, stored in base 2
      1/10 = 1/16 + 1/64 + 1/256 ...

      in binary 1/10 = 0.00010101010101010101.......



    */


}
