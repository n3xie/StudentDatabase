#include "DataBase.hpp"
#include <algorithm>
#include <typeinfo>
#include <typeindex>

void DataBase::addNewRecord(Record* r)
{
    dataBase.push_back(r);
}

void DataBase::displayRecordList()
{
    std::cout << "BAZA DANYCH:" << std::endl;
    for (int i = 0; i < dataBase.size(); ++i) {
        std::cout << i+1 << ". ";
        dataBase.at(i)->showAll();
    }
}

void DataBase::sortStudentsByIndex()
{
    std::vector<Student> students;
    std::vector<Employee> employees;
    std::vector<Record*> buffer;

    std::sort(dataBase.begin(), dataBase.end(), [](const Record* p1, const Record* p2) {
        return std::type_index(typeid(*p1)) < std::type_index(typeid(*p2));
    });

    int boundaryIndex = 0;  // od tego elementu zaczyna sie typ Employee
    for (int i = 0; i < dataBase.size(); ++i) {
        if (dataBase.at(i)->getId() == 1)
            boundaryIndex++;
        else
            break;
    }

  //  for (int i = 0; i < dataBase.size(); ++i) {
   //     if (dataBase.at(i)->getInfo() == 1)
      //      students.push_back(dataBase.at(i));
      //  else if (dataBase.at(i)->getInfo() == 2)
         //   employees.push_back((dataBase.at(i)));
  //  }

/*   std::sort(std::begin(students.getIndex()), std::end(students.getIndex()),
              [](const int& a, const int& b) {return a > b});

    for (int i = 0; i < students.size(); ++i) {
        buffer.at(i) = students.at(i);
    }
    for (int i = students.size(); i < dataBase.size(); ++i) {
        buffer.at(i)
    }

    for (int i = 1; i < studentBase.size(); ++i) {
        for (int j = studentBase.size()-1; j >= 1; j--) {
            if (studentBase.at(j).getIndex() < studentBase.at(j-1).getIndex()) {
                Student buff;
                buff = studentBase.at(j-1);
                studentBase.at(j-1) = studentBase.at(j);
                studentBase.at(j) = buff;
            }
        }
    }*/
}
/*
void DataBase::removeStudentByIndex(uint64_t idx)
{
    for (int i = 0; i < studentBase.size(); ++i) {
        if (idx == studentBase.at(i).getIndex()) {
            studentBase.erase(studentBase.begin() + i);
            break;
        }
    }
}

}*/
