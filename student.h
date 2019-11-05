//
//  student.h
//  week10
//
//  Created by Eira Isabel Cuartero on 11/5/19.
//  Copyright © 2019 Isabelle. All rights reserved.
//  Week 011 Laboratory Exercise 10

#include <string>
#include <sstream>
#include "person.h"

using namespace std;

class Student : public Person {
  private:
   string _acadprog, _university;
   short _collegeyear;

  public:
   Student(string name, string address, string gender, short age, string occupation)
    :Person(name, address, gender, age, occupation) {

   }
   
   void setAcadProg(string acadprog) {
     this->_acadprog = acadprog;
   }

   string getAcadProg() {
     return _acadprog;
   }

   void setCollegeYear(short collegeyear) {
     this->_collegeyear = collegeyear;
   }

   short getCollegeYear() {
     return _collegeyear;
   }

   void setUniversity(string university) {
     this->_university = university;
   }

   string getUniversity() {
     return _university;
   }
};
