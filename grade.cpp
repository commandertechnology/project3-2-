#include <iostream>
#include <iomanip>
#include "grade.hpp"

using namespace std;
 // default constructor
  Grade::Grade(){
    studentName = "";
    grade = 0.0;
  }

  // parameterized constructor to set the initial values of
  //   all instance variables
  Grade::Grade(const std::string &name, double grade){
    studentName = name;
    this ->grade = grade;
  }

  // getter of the student's name
  std::string Grade::getName() const {
    return studentName;
  }

  // getter of the grade
  double Grade::getGrade() const{
    return grade;
  }
  // print the grade info in the format like:
  //   Name: Jerry Williams | Grade: 78.0
  // should display one decimal place
  void Grade::print() const{
    std::cout<<"Name: "<<getName();
    std::cout<<"| Grade: " << std::fixed << std::setprecision(1) << getGrade()<<endl;

  }