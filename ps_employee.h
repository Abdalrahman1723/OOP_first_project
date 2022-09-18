#ifndef PS_EMPLOYEE_H
#define PS_EMPLOYEE_H
#include "employees.h"
#pragma once
using namespace std;
class ps_employee : public employees
{
private:
    int ps_hours;
    int ills_hours;
    int premier_hours;

public:
    //----------------the setters-----------------//

    //----------------photoshop-----------------//
    void set_pshrs(int psmh);
    //----------------illustrator-----------------//
    void set_illshrs(int illsh);
    //----------------premier-----------------//
    void set_premierhrs(int premierh);
    //----------------the getters-----------------//

    //----------------photoshop-----------------//
    int get_pshrs();
    //----------------illustrator-----------------//
    int get_illshrs();
    //----------------premier-----------------//
    int get_premierhrs();
    //----------------override-----------------//
    void show_info();
    // ---------------------------------------------//
    ps_employee();
    //
    ps_employee(string nm0,
                string add0,
                string mail0,
                string ph_num0,
                int i_d0,
                int w_hrs0,
                int hr,
                int ot_hrs0,
                int htmlh,
                int cssh,
                int jsh);
    // destructor
    ~ps_employee();
};

#endif