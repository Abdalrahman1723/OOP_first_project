#include "ps_employee.h"
#include <iostream>
//----------------the setters-----------------//

//----------------ps-----------------//
void ps_employee::set_pshrs(int psh)
{
    ps_hours = psh;
}
//----------------ills-----------------//
void ps_employee::set_illshrs(int illsh)
{
    ills_hours = illsh;
}
//----------------premier-----------------//
void ps_employee::set_premierhrs(int premierh)
{
    premier_hours = premierh;
}
//----------------the getters-----------------//

//----------------ps-----------------//
int ps_employee::get_pshrs()
{
    return ps_hours;
}
//----------------ills-----------------//
int ps_employee::get_illshrs()
{
    return ills_hours;
}
//----------------premier-----------------//
int ps_employee::get_premierhrs()
{
    return premier_hours;
}
//----------------override func-----------------//
void ps_employee::show_info()
{
    employees::show_info();
    cout << "the ps hours : " << ps_hours << "\t the ills hours : " << ills_hours << "\t the premier hours : " << premier_hours << endl;
}
//------------------constr-----------------------//
// default
ps_employee::ps_employee()
{
}
// para constructor
ps_employee::ps_employee(string nm1,
                         string add1,
                         string mail1,
                         string ph_num1,
                         int i_d1,
                         int w_hrs1,
                         int hr1,
                         int ot_hrs1,
                         int psh,
                         int illsh,
                         int prh)
    : employees(nm1, add1, mail1,
                ph_num1, i_d1,
                w_hrs1, hr1, ot_hrs1)
{
    ps_hours = psh;
    ills_hours = illsh;
    premier_hours = prh;
}

ps_employee::~ps_employee()
{
}