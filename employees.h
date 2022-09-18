#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#pragma once
#include <string>
using namespace std;
// base class//
class employees
{
private:
    // main info//
    string name;
    string address;
    string e_mail;
    string phone_num;
    int id;
    int working_hours;
    int hour_rate;
    int overtime_hours;
    // employee count//
    static int emp_count;

public:
    // name setter
    void set_name(string nm);
    // name getter
    string get_name();
    // address setter
    void set_address(string add);
    // address getter
    string get_address();
    // e-mail setter
    void set_email(string mail);
    // e-mail getter
    string get_email();
    // phone number setter
    void set_phone_num(string pn);
    // phone number getter
    string get_phone_num();
    // id setter
    void set_id(int i_d);
    // id getter
    int get_id();
    // working_hours setter
    void set_working_hours(int wh);
    // working_hours getter
    int get_working_hours();
    // overtime_hours setter
    void set_overtime_hours(int ot);
    // overtime_hours getter
    int get_overtime_hours();
    // setter
    void set_hour_rate(int hr);
    // hour rate getter
    int get_hour_rate();
    //the count of emp.
    int employee_count();
    // virtual func//
    virtual void show_info();
    // default constructor//
    employees();
    // initial constructor//
    employees(string nm,
              string add,
              string mail,
              string ph_num,
              int i_d,
              int w_hrs,
              int h_r,
              int ot_hrs);

    ~employees();
};

#endif