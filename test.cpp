#include "grade.hpp"
#include "gradebook.hpp"
#include <cassert>
#include <iostream>
#include <cmath>

using namespace std;

bool isClose(double v1, double v2) {
  double epsilon = 1e-4;
  return fabs(v1 - v2) < epsilon;
}

void testGrade() {
  cout << "Testing grade class" << endl;
  Grade grade;
  assert(grade.getName().empty());
  Grade grade1("new name", 90);
  assert(grade1.getName() == "new name");
  assert(isClose(grade1.getGrade(), 90));
  grade1.print();
  grade.setGrade(80);
  assert(isClose(grade.getGrade(), 80));
}

void testGradeBook() {
  cout << "Testing grade book class" << endl;
  GradeBook gradeBook("COP3014", 40);
  gradeBook.addGrade("John Smith", 90);
  gradeBook.addGrade("Laura Johnson", 83);
  gradeBook.addGrade("Josh Brown", 77);
  assert(gradeBook.searchStudent("invalid student") == -1);
  assert(gradeBook.searchStudent("John Smith") == 0);
  assert(gradeBook.getCount() == 3);
  gradeBook.removeStudent(1); // remove Laura
  assert(gradeBook.getCount() == 2);
  assert(gradeBook.searchStudent("Laura Johnson") == -1);  // removed
  gradeBook.updateGrade(1, 50);
  gradeBook.print();
  cout << "You should see the last grade as 50\n";
}

int main() {
  testGrade();
  testGradeBook();

  cout << "All test passed!" << endl;

  return EXIT_SUCCESS;
}
