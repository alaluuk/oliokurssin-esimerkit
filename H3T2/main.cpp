#include <iostream>
#include <vector>
#include "person.h"
#include "student.h"
#include "teacher.h"


using namespace std;

int main()
{
    Person objPerson("Ville");
    Student objStudent("Maija",501);
    Teacher objTeacher("Liisa",313);

    //luodaan vektori
    vector<Person*> lista;
    //lisätään olioiden osoitteet
    lista.push_back(&objPerson);
    lista.push_back(&objStudent);
    lista.push_back(&objTeacher);

    for(auto a: lista){
        a->sayStatus();
    }

    // objPerson.sayStatus();
    // objStudent.sayStatus();
    // objTeacher.sayStatus();
    cout << "LOPPU!" << endl;
    return 0;
}
