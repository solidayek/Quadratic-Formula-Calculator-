#include <cmath>
#include <complex>
#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {

  double a, b, c, solution1, solution2, discriminant;

  std::cout
      << "Quadratic Formula Calculator \nLong Beach City College\nAuthor: "
         "Soliday Ek\nNovember 4, 2022"
      << endl;
  cout << "===============================================" << endl;
  cout
      << "\nThis program will provide solutions for equation of the form of \n";
  cout << setw(35) << right << "A*x^2 + B*x + C = 0, \n"
       << endl
       << "Where A, B, and C are integers, and A is not equal to zero. \n"
       << endl;
  cout << "Enter A, B, and C: ";
  cin >> a >> b >> c;
  cout << endl;

  discriminant = (b * b) - (4 * a * c);

  if (a == 0) {
    cout << "No solutions will calculated for a leading coefficient of 0! ";
    
  } else if (discriminant > 0) {
    cout << scientific;

    solution2 = (-b - sqrt(discriminant)) / (2 * a);
    solution1 = (-b + sqrt(discriminant)) / (2 * a);

    cout << "The two real solutions are       x = " << solution1 << endl
         << setw(37) << "x = " << solution2 << endl;
  }

  else if (discriminant < 0) {
    cout << scientific;
    discriminant = discriminant * -1;
    double x1;
    double x2;

    x1 = -b / (2 * a);
    x2 = sqrt(discriminant) / (2 * a);

    solution1 = x1;
    solution2 = x2;

    cout << "The two imaginary solutions are x = " << setprecision(4)
         << solution1 << " + ( " << solution2 << ")*I and " << endl;
    cout << right << setw(30) << "x = " << solution1 << " - ( " << solution2
         << ") *I" << endl;

  }

  else if (discriminant == 0) {
    cout << scientific;
    solution1 = (-b + sqrt(discriminant)) / (2 * a);
    cout << "The one real solution is " << right << setw(10)
         << "x = " << solution1;
  }
}