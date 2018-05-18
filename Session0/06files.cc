#include <iostream>
#include <fstream>


using namespace std;

int main() {
  ofstream f("test.dat");
  f << "hello" << 5 << 2+3 << '\n';

  return 0;
}
