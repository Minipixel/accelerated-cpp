#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;

int main()
{
  cout << "Please enter your name: ";
  string name;
  cin >> name;
  cout << "Hello, " << name << "!" << endl;

  cout << "Please enter your midterm and final exam grades: ";
  double midterm_grade, final_grade;
  cin >> midterm_grade >> final_grade;

  cout << "Enter all your homework grades, "
          "followed by end-of-file: ";

  // the number and sum of grades read so far
  int count = 0;
  double sum = 0;

  // a varaible into which to read
  double x;

  // invariant:
  // we have read count grades so far, and
  // sum is the sum of the first count grades
  while(cin >> x)
  {
    ++count;
    sum += x;
  }

  streamsize prec = cout.precision();
  cout  << "Your final grade is " << setprecision(3)
        << 0.2 * midterm_grade + 0.4 * final_grade + 0.4 * sum / count
        << setprecision(prec) << endl;

  return 0;

}
