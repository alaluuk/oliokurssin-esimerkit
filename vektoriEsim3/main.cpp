#include <iostream>
#include <vector>
#include <memory>
#include "course.h"

using namespace std;

int main()
{
    //luodaan smartpointterilla vektori Course-olioille
    unique_ptr<vector<Course>> courseList = make_unique<vector<Course>>();
    //lisätään vektoriin Course-olioita
    courseList->emplace_back(101,"Olio-ohjelmointi",5);
    courseList->emplace_back(102,"Tietokannat",5);
    courseList->emplace_back(103,"Linux",5);

    //tulostetaan vektorin data
    for(Course &objCourse : *courseList){
        objCourse.printData();
    }

    //kysytään käyttäjältä kurssin id
    //ja tulostetaan kyseisen kurssin data
    int x;
    int check=0;
    cout<<"Anna kurssin id, niin tulostan sen tiedot :";
    cin>>x;
    for(Course &objCourse : *courseList){
        if(objCourse.getId()==x){
            objCourse.printData();
            check=1;
            break;//ei jatketa etsimistä, jos id löytyi
        }
    }
    if(check==0){
        cout<<"Annetulla id arvolla ei ole kurssia"<<endl;
    }
    return 0;
}
