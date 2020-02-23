#include "GradeBook.h"
#include <iostream>

using namespace std;

GradeBook::GradeBook(string name) { setCourseName(name); }
void GradeBook::setCourseName(string name) { courseName = name; }
string GradeBook::getCourseName() { return courseName; }
void GradeBook::displayMessage() {
  cout << "welcome to grade Book for\n" << getCourseName() << endl;
}
