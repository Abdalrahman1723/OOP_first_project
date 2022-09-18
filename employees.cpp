#include "employees.h"
#include <iostream>
int employees::emp_count = 0;
//----------------------name
void employees::set_name(string nm)
{
    name = nm;
}

string employees::get_name()
{
    return name;
}
//----------------------address
void employees::set_address(string add)
{
    address = add;
}

string employees::get_address()
{
    return address;
}
//----------------------e-mail
void employees::set_email(string mail)
{
    e_mail = mail;
}

string employees::get_email()
{
    return e_mail;
}
//----------------------phone number
void employees::set_phone_num(string pn)
{
    phone_num = pn;
}

string employees::get_phone_num()
{
    return phone_num;
}
//----------------------id
void employees::set_id(int i_d)
{
    id = i_d;
}
int employees::get_id()
{
    return id;
}
//----------------------working hours
void employees::set_working_hours(int wh)
{
    working_hours = wh;
}

int employees::get_working_hours()
{
    return working_hours;
}
//----------------------hour rate
void employees::set_hour_rate(int hr)
{
    hour_rate = hr;
}

int employees::get_hour_rate()
{
    return hour_rate;
}
//----------------------over time
void employees::set_overtime_hours(int ot)
{
    overtime_hours = ot;
}

int employees::get_overtime_hours()
{
    return overtime_hours;
}
//-----------emp count 
int employees::employee_count()
{
    return emp_count;
}
//----------------------display
void employees::show_info()
{
    cout << "basic info for the employee\n";
    cout << "the name : " << name
         << "\t the address : " << address
         << "\t the e-mail : " << e_mail
         << "\t the phone number : " << phone_num
         << "\t the ID : " << id
         << "\t the working hours : " << working_hours
         << "\t overtime hours : " << overtime_hours
         << "\t the salary : " << hour_rate * (working_hours + overtime_hours) << endl;
}
//---------------------- default constr//
employees::employees()
{
    emp_count++;
}
//--------------------------------------------------------------------------//
employees::employees(string nm,
                     string add,
                     string mail,
                     string ph_num,
                     int i_d,
                     int w_hrs,
                     int hr,
                     int ot_hrs)
{
    name = nm;
    address = add;
    e_mail = mail;
    phone_num = ph_num;
    id = i_d;
    working_hours = w_hrs;
    hour_rate = hr;
    overtime_hours = ot_hrs;
    emp_count++;
}

employees::~employees()
{
    emp_count--;
}