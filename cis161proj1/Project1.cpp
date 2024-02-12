#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;
string name; //declaration of the variables
string roomtype, phonetype, tvtype;
int days;
float roomcharges,phonecharges,tvcharges;

//function declaration
void setdata(string, int);
float getroom(int, string);
float getphone(int, string);
float gettv(int, string);


//main method
int main()
{
    setdata(name, days);
    roomcharges = getroom(days,roomtype);
    phonecharges = getphone(days,phonetype);
    tvcharges = gettv(days,tvtype);
    print(name,days,roomcharges,phonecharges,tvcharges, roomtype,phonetype,tvtype);
    return 0;
}



//function definition
void setdata(name, days)
{
    cout << "Enter patient name: ";
    cin >> name;
    cout << "Enter number of days in Hospital: ";
    cin >> days;
}
void getroom(days, roomtype)
{
    cout << "Room Used \n 1- Single room - One bed \n 2- Double room two beds \n 3- Ward \n You may enter 1, S, S or 2, D, d or 3, W, w \n Enter Choice: ";
    cin >> roomtype;
}
void getphone(days, phonetype)
{
    cout << "Phone Access (Y/N): ";

}