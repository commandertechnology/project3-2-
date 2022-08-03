#include <iostream>
#include "text-menu-app.hpp"
 
 void TextMenuApp::run() {
    //this is where we print
    std::cout<<"1. Print all grades \n";
    std::cout<<"2. Remove a Grade \n";
    std::cout<<"3. Update a grade \n";
    std::cout<<"4. End. \n";

    int userSelection = -1;

    std:: cout<<"Input value between 1 and 4";
    std:: cin>>userSelection;

    if(userSelection == 1){
        gradeBook.print();
        
    }
    if (userSelection == 2){
        std::string name;
        double g;
        std::cout<<"please input student name:";
        std::cin>>name;
        gradeBook.removeStudent(name);
    }
    if (userSelection == 3){
        std::string userName;
        std::cout<<"Put in student name";
        std::cin>>userName;
        gradeBook.updateStudent(userName);
    }
    if (userSelection != 4){
        run();
    }


 }