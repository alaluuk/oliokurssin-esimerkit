#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"

class Teacher : public Person
{
private:
    int departmentId;
public:
    Teacher(string, int id);
    ~Teacher();
    virtual void sayStatus();
};

#endif // TEACHER_H
