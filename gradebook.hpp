#ifndef GRADEBOOK_HPP
#define GRADEBOOK_HPP

#include "grade.hpp"
#include <string>

class GradeBook {
  std::string courseName;
  Grade grades[40];  // hold 40 grades at most, assuming it is enough
  int count = 0;
 public:
  // default constructor
  GradeBook();

  //parameterized constructor to set the initial values of
  //   all instance variables
  GradeBook(const std::string &courseName);

  // getter of the count of students
  int getCount() const;
  void updateStudent(std::string);
  // getter of the course name
  std::string getName() const;
  void removeStudent(std::string name);
  // add a new grade
  // do not worry about the size limit
  void addGrade(const std::string &name, double grade);

  // search the grade by student's name
  // return -1 if not found
  int searchStudent(const std::string &name) const;

  // print the student's info providing a valid index
  // assuming that the index is valid (get from the search)
  // ask the Grade object to print
  void printStudent(int studentIndex) const;

  // print a summary of the course like:
    // Gradebook of course COP 3014
    // Name: John Smith | Grade: 90.0
    // Name: Laura Johnson | Grade: 83.0
    // Name: Josh Brown | Grade: 77.0

  // ask each Grade object to print itself
  void print() const;
};

#endif // GRADEBOOK_HPP
