#include "grade.hpp"
#include "gradebook.hpp"
#include "text-menu-app.hpp"

int main() {

  // create initial data of a sample gradebook
  GradeBook gradeBook("COP 3014", 40);
  gradeBook.addGrade("John Smith", 90);
  gradeBook.addGrade("Laura Johnson", 83);
  gradeBook.addGrade("Josh Brown", 77);

  // create and run the text menu based app
  TextMenuApp menu(gradeBook);
  menu.run();

  return EXIT_SUCCESS;
}
