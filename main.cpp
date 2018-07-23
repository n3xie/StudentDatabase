#include <iostream>
#include <typeinfo>
#include <iterator>
#include <algorithm>
#include "DataBase.hpp"
#include <typeindex>
#include <fstream>
#include <cstdlib>
int main()
{
    DataBase base;

    Student s1("Adam", "Malysz", 234398);
    Student s2("Tadeusz", "Bocian", 225587);
    Student s3("Monika", "Czajkowska", 223509);

    Employee e1("Elzbieta", "Krol", 3740);
    Employee e2("Roman", "Czarny", 3565);

    base.addNewRecord(&s1);
    base.addNewRecord(&e2);
    base.addNewRecord(&s2);
    base.addNewRecord(&e1);
    base.addNewRecord(&s3);

    base.displayRecordList();

    base.removeStudentByIndex(225587);

    base.displayRecordList();

    base.sortStudentsByIndex();

    base.displayRecordList();
    
    base.saveToFile();

    base.loadFile();

    std::string a[] = {"Malysz","Bocian","Czajkowska","Krol","Kral"};//tutaj wpis wyrazy , 

    std::sort(std::begin(a), std::end(a), std::locale("en_US.utf8")); // sortowanie 
    for(auto& s: a) std::cout << s << ' ';
    return 0;
}
