#include <iostream>
#include "Gear_control.h"
using namespace std;
int main()
{

    int choice;
    int gear_number;
    Gear_Control gear_obj;
    char down_gear;

    int acc_paddle,break_paddle,set_cruise_speed;
    bool cruise_ON_OFF;
    while(1)
    {
        cout<<endl<<endl;
        cout<<"   CAR CONTROL SYSTEM   "<<endl;
        cout<<"1.Gear UP"<<endl;
        cout<<"2.Gear DOWN"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter Your Choice:";
        cin>>choice;
        if(choice==4)   //if you press 7 option then it will out from the loop from here
        {
            break;
        }
        switch(choice)
        {
            case 1:
                //GEAR UP FOR SPEED
                {
                    cout<<"=======Enter Gear from 1 to 5======="<<endl;
                    cin>>gear_number;
                    gear_obj.changeGear_increase(gear_number); //call the function of Car_Control_System to increase the gear
                }
                break;

             case 2:
                {
                        cout<<"======= Gear DOWN(y=yes) ======="<<endl;
                        cin>>down_gear;
                        gear_obj.changeGear_decrease(down_gear);//call the function of Car_Control_System to Decrease the gear

                }
                break;
        }
    }    return 0;
}
