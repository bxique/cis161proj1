#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void setdata(string name, int days, string* add_name, int* add_days)
{
  *add_name = name;
  *add_days = days;

}

float getroom(int days,string roomtype) {
  float room = 0;
  while (room <= 0) {
    cout << "\nWhat room did you use? \n1- Single room - One bed\n2- Double room - Two beds\n3- Ward\nYou may enter 1,S,s or 2, D, d or 3, W, w\nEnter Choice: ";
    cin >> roomtype;
    if (roomtype == "1" || roomtype == "S" || roomtype == "s") {
      room = 725.0;
      roomtype = "Single room - one bed ";
    } else if (roomtype == "2" || roomtype == "D" || roomtype == "d"){
      room = 525.0;
      roomtype = "Double room - two beds ";
    } else if (roomtype == "3" || roomtype == "W" || roomtype == "w") {
      room = 1050.0;
      roomtype = "Ward";
    } else {
      cout << "Your input did not match with one of the options. Please retry! \n";

    }

  }

  return days * room;
}

float getphone(int days, string phonetype) {
  float phone = 0;
  while (phone <= 0) {
    cout << "\nDid you use the phone?: \n enter 'Y' for Yes or 'N' for No.\n Answer: ";
    cin >> phonetype;
    if (phonetype == "Y") {
      while (phone <= 0) {
        cout << "1- Shared\n2- Dedicated\nYou may enter 1, S, s for shared.\nYou may enter 2, D,d for dedicated.\nEnter choice: ";
        cin >> phonetype;
        if (phonetype == "1" || phonetype == "S" || phonetype == "s") {
          phone = 7.95;
          phonetype = "Shared";
        }else if (phonetype == "2" || phonetype == "D" || phonetype == "d") {
          phone = 10.95;
          phonetype = "Dedicated";
        }else {
          cout << "You typed in the wrong choice! Please retry.\n";
        }

      }
    }else if(phonetype == "N") {
      phone = 0.0;
      phonetype = "NONE";
      break;
    }else {
      cout << "You did not use the specified keywords 'Y' or 'N'. Please retry! ";
    }
  }
  return days * phone;
}



float gettv(int days, string tvtype) {
  float tv = 0;
  while (tv <= 0){
    cout << "\n Did you use the tv?\n Enter 'Y' for Yes or 'N' for No.\n Answer: ";
    cin >> tvtype;
    if (tvtype == "Y") {
      while (tv <= 0){
        cout << "1- Basic Channels\n2- Cable Channels\nYou may enter 1,B, b or 2, C, c\nEnter Choice: ";
        cin >> tvtype;
        if (tvtype == "1" || tvtype == "B" || tvtype == "b"){
          tv = 5.95;
          tvtype = "Basic channels";
        }else if (tvtype == "2" || tvtype == "C" || tvtype == "c") {
          tv = 9.95;
          tvtype = "Cable channels";
        }else {
          cout << "You typed in the wrong choice! Please retry.\n";
        }
      }
    }else if(tvtype == "N") {
      tv = 0.0;
      tvtype = "NONE";
      break;
    }else {
      cout << "You did not use the specified keywords 'Y' or 'N'. Please retry! ";
    }
  }
  return days * tv;
}



int main()
{
  string nameadd, name, roomtype, phonetype, tvtype;
  int days, daysadd;

  cout << "Patient Name: ";
  cin >> name;
  cout << "How many days in hospital ?: ";
  cin >> days;
  setdata(name,days,&nameadd, &daysadd);

  const float roomcharges = getroom(days, roomtype);
  const float phonecharges = getphone(days, phonetype);
  const float tvcharges = gettv(days, tvtype);
  cout << "\nSt.Josephs Hospital\n" << name << " Billing statement:" << "\nNumber of days in hospital: "<<  days << "\nRoom charges are : $" <<roomcharges << "\n Phone charges are : $"<< phonecharges << "\nTelevison charges are : $" << tvcharges << "\n" << roomtype << phonetype << tvtype;
  return 0;
}
