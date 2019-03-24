//
//  Person.cpp
//  Module3Lab
//
//  Created by William Couturiaux on 3/23/19.
//  Copyright © 2019 William Couturiaux. All rights reserved.
//

#include "Person.hpp"

Person::Person(){
}

Person::Person(std::string fName, int age, std::string lName, std::string phone){
    this->first_name=fName;
    this->age=age;
    this->last_name=lName;
    this->phone=phone;
}

Person::~Person(){
    
}

void Person::OutputAge(){
    std::cout<<"I am "<<age<<"years old"<<std::endl;
}
