#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person
{
private:
    int studentId;
public:
    Student(string, int);
    ~Student();
    virtual void sayStatus() override;
};

#endif // STUDENT_H
