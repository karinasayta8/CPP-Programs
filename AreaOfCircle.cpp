#include <iostream>
#include <string>
using namespace std;

int main() {
  int rad;

  // take input from users
  cout << "Enter the radius: ";
  cin >> rad;

  double area = 3.14 * rad * rad;
  cout<<"Area of Circle is "<<area;
  return 0;
}