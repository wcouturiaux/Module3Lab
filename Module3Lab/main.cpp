//
//  main.cpp
//  Module3Lab
//
//  Created by William Couturiaux on 3/23/19.
//  Copyright © 2019 William Couturiaux. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
#include "Student.hpp"
#include "Teacher.hpp"

int main(int argc, const char * argv[]) {
    
    Student Student1("John", 31, "Smith", "555-142-1234");
    
    Student1.OutputAge();
    Student1.OutputIdentity();
    
    Teacher *Teacher1 = new Teacher("Joh", 35, "Smit", "555-142-1235");
    
    Teacher1->OutputAge();
    Teacher1->OutputIdentity();
    
    delete Teacher1;
    return 0;
}
