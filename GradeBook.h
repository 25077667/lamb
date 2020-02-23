#ifndef GRADEBOOH_H
#define GRADEBOOH_H
#include <string>

using namespace std;

class GradeBook {
public:
  GradeBook(string);
  void setCourseName(string);
  string getCourseName();
  void displayMessage();

private:
  string courseName;
};

#endif