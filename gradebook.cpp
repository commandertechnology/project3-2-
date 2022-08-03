#include <iostream>
#include "gradebook.hpp"
#include <iomanip>


//class GradeBook {
//  std::string courseName;
//  Grade grades[40];  // hold 40 grades at most, assuming it is enough
//  int count = 0;
  GradeBook::GradeBook(){
    courseName = ""; 
  }

  GradeBook::GradeBook(const std::string &courseName){
    this -> courseName = courseName;
  } 

  // getter of the count of students
  int GradeBook::getCount() const{
    return count; 
  }

  // getter of the course name
  std::string GradeBook::getName() const{
    return courseName;
  }

  // add a new grade
  // do not worry about the size limit
  void GradeBook::addGrade(const std::string &name, double grade){
    grades [count] = Grade(name, grade);
    count++;
  }
  // search the grade by student's name
  // return -1 if not found
  int GradeBook::searchStudent(const std::string &name) const{
    for (int i = 0 ; i < 40 ; i ++){
        if (name == grades [i].getName()){
            return i;
        }
    } return -1;
  } 

  // print the student's info providing a valid index
  // assuming that the index is valid (get from the search)
  // ask the Grade object to print
  void GradeBook::printStudent(int studentIndex) const{
    grades[studentIndex].print();
  }
  void GradeBook::updateStudent(std::string name){
      int index=searchStudent(name);
        std::string s;
        double g;
        std::cout<<"Please input Student name:";
        std::cin>>s;
        std::cout<<"Please input Student grade:";
        std::cin>>g;
        grades[index]= Grade(s, g);
}
void GradeBook::removeStudent(std::string name){
      int index=searchStudent(name);
        grades [index] = Grade("\0", 0.0);
}
  // print a summary of the course like:
    // Gradebook of course COP 3014
    // Name: John Smith | Grade: 90.0
    // Name: Laura Johnson | Grade: 83.0
    // Name: Josh Brown | Grade: 77.0

  // ask each Grade object to print itself
  void GradeBook::print() const{
    std::cout << "Gradebook of course " << courseName;
    for (int i = 0; i < count; i++){
      std::cout<<std::endl;
        printStudent (i);
    }
  }

