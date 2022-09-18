#ifndef FRONTEND_EMPLOYEE_H
#define FRONTEND_EMPLOYEE_H
#include "employees.h"
#pragma once

class frontEnd_employee : public employees //----------------the inheritance-----------------//
{
private:
    int html_hours;
    int css_hours;
    int js_hours;

public:
    //----------------the setters-----------------//

    //----------------html-----------------//
    void set_htmlhrs(int htmh);
    //----------------css-----------------//
    void set_csshrs(int cssh);
    //----------------JS-----------------//
    void set_jshrs(int jsh);
    //----------------the getters-----------------//

    //----------------html-----------------//
    int get_htmlhrs();
    //----------------css-----------------//
    int get_csshrs();
    //----------------JS-----------------//
    int get_jshrs();
    //----------------override-----------------//
    void show_info();

    //----------------default constructor-----------------//
    frontEnd_employee() {}
    //----------------para constructor-----------------//
    frontEnd_employee(string nm,
                      string add,
                      string mail,
                      string ph_num,
                      int i,
                      int w_hrs,
                      int ot_hrs,
                      int h1,
                      int htmlh, int cssh, int jsh);
    //---------------------------------//
    ~frontEnd_employee() {}
};

#endif