#include "frontEnd_employee.h"
#include <iostream>

//----------------the setters-----------------//

//----------------html-----------------//
void frontEnd_employee ::set_htmlhrs(int htmh)
{
    html_hours = htmh;
}
//----------------css-----------------//
void frontEnd_employee ::set_csshrs(int cssh)
{
    css_hours = cssh;
}
//----------------JS-----------------//
void frontEnd_employee ::set_jshrs(int jsh)
{
    js_hours = jsh;
}
//----------------the getters-----------------//

//----------------html-----------------//
int frontEnd_employee ::get_htmlhrs()
{
    return html_hours;
}
//----------------css-----------------//
int frontEnd_employee ::get_csshrs()
{
    return css_hours;
}
//----------------JS-----------------//
int frontEnd_employee ::get_jshrs()
{
    return js_hours;
}
//----------------override func-----------------//
void frontEnd_employee ::show_info()
{
    employees ::show_info();
    cout << "the HTML hours : " << html_hours << "\t the CSS hours : " << css_hours << "\t the JS hours : " << js_hours << endl;
}
frontEnd_employee::frontEnd_employee(string nm0,
                                     string add0,
                                     string mail0,
                                     string ph_num0,
                                     int i_d0,
                                     int w_hrs0,
                                     int hr0,
                                     int ot_hrs0,
                                     int htmlh,
                                     int cssh,
                                     int jsh)
    : employees(nm0, add0, mail0,
                ph_num0, i_d0,
                w_hrs0, hr0, ot_hrs0)
{
    html_hours = htmlh;
    css_hours = cssh;
    js_hours = jsh;
}