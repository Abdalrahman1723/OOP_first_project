#include <iostream>
#include <string>
#include "employees.h"
#include "frontEnd_employee.h"
#include "ps_employee.h"
#include "frontEnd_employee.cpp"
#include "ps_employee.cpp"
#include "employees.cpp"
using namespace std;
int main()
{
    string data[4];
    cout << "<<<<<<<<<<<<<<<<welcome to my first independent project>>>>>>>>>>>>>>>\n";
    frontEnd_employee feo1("Abdalrahman", "zahraa nasr city", "aa@gmail.com", "01091098865", 202050, 5, 100, 2, 1, 2, 2);
    cout << "the front-end employee data :-" << endl;
    feo1.show_info();
    ps_employee pso1("Tarek", "10th dis.", "ty@gmail.com", "01091056675", 202070, 3, 60, 0, 1, 1, 1);
    cout << "the photoshop employee data :-" << endl;
    pso1.show_info();
    cout << "the front-end developer HTML + CSS hours --> " << feo1.get_htmlhrs() + feo1.get_csshrs() << endl;
    cout << "the photoshop designer PhotoShop + illustrator hours --> " << pso1.get_pshrs() + pso1.get_illshrs() << endl;
    //------------------------------------------new employee----------------------------------------//
    frontEnd_employee feo2;
    cout << endl
         << "enter the name,address,e-mail and phone number of the new front-end employee : \n";
    //-----------get the values-------------//
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            cout << "NAME : ";
            break;
        case 1:
            cout << "ADDRESS : ";
            break;
        case 2:
            cout << "E-MAIL : ";
            break;
        case 3:
            cout << "PHONE NUMBER : ";
            break;

        default:
            cout << "<<<<<<<<<<<<unexpected error>>>>>>>>>>>>> \n";
            break;
        }
        cin >> data[i];
    }
    //---------assign the values to the object-----------//
    feo2.set_name(data[0]);
    feo2.set_address(data[1]);
    feo2.set_email(data[2]);
    feo2.set_phone_num(data[3]);
    //-----------------get the values---------------//
    cout << "    //---------------------------------------------------------------------// \n";
    cout << "the new employee name is..." << feo2.get_name() << endl;
    cout << "the new employee address is..." << feo2.get_address() << endl;
    cout << "the new employee e-mail is..." << feo2.get_email() << endl;
    cout << "the new employee phone number is..." << feo2.get_phone_num() << endl;
    //------------------------the number of the employees -----------------------------//
    cout << endl
         << "the total number of the employees is : " << pso1.employee_count() << endl;
    return 0;
}