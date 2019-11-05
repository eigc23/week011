  //
  //  main.cpp
  //  week10
  //
  //  Created by Eira Isabel Cuartero on 11/4/19.
  //  Copyright © 2019 Isabelle. All rights reserved.
  //  Laboratory Exercise 009 Week 010

//****************dog******************

//#include <iostream>
//#include <stdlib.h>
//#include "dog.h"

//using namespace std;

//int main () {
  //Dog pet(4, "Soft", true);
  //pet.setBreed("Shih Tzu");
  //pet.setSize("Small");
  //pet.setIsRegister(false);
  //cout << "Dog Details \n" << endl << pet.getMammal();
  //cout << "Breed: " << pet.getBreed() << endl;
  //cout << "Size: " << pet.getSize() << endl;
  //cout << "Is Registered: " << pet.getIsRegister() << endl;
  //cout << endl;

//return EXIT_SUCCESS;

//}
//****************end******************


//**************student****************

#include <cstdlib>
#include <iostream>
#include "student.h"

using namespace std;

int main ()
{
  Student pers("Eira Isabel Cuartero", "Manila, Philippines", "Female", 23, "Student");
  pers.setAcadProg("BS Information Technology");
  pers.setCollegeYear(1);
  pers.setUniversity("AMA University");
  cout << "Student Details \n" << endl << pers.getPerson();
  cout << "Academic Program: " << pers.getAcadProg() << endl;
  cout << "Year in College: " << pers.getCollegeYear() << endl;
  cout << "University: " << pers.getUniversity() << endl;
  cout << endl;


return EXIT_SUCCESS;

}
