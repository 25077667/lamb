#include <iostream>
#include"designer.cpp"
using namespace std;

int main()
{
	GradeBook gradeBook1("CC10 123 1th");
	GradeBook gradeBook2("CC10 1234 2th");
	cout<<"gradeBook1 create for course:"<<gradeBook1.getCourseName()<<endl;
	cout<<"gradeBook2 create for course:"<<gradeBook2.getCourseName()<<endl;
	
	return 0;
}

