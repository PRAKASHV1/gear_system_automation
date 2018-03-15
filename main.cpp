#include <iostream>
#include "Gear_control.h"
using namespace std;
Gear_Control::Gear_Control()
{
            //constructor
}
Gear_Control::~Gear_Control()
{
            //destructor
}
int Gear_Control::test()
{
    return s;
}
int  Gear_Control::changeGear_increase(int current_gear)
{
    int speed = 0;
    if((current_gear==2&&s==0)||(current_gear==3&&s==0)||(current_gear==4&&s==0)||(current_gear==5&&s==0))
    {
                //car is stop bcz you can't start car at gear 2 to 5
        cout<<"Car is stop\n";
        cout<<"please start your car using 1st gear\n";
        return 0;
    }
    gear=1;
    if(current_gear >= gear)
    {
        gear = current_gear;
        if(gear == 1)
        {
            cout<<"Gear number is :"<<gear<<endl;
            for(speed=0;s<=20;s=s+2)
            {
                cout<<"speed is:"<<s<<endl;
                usleep(400000);
            }
                    //return s;
        }
        else if(gear == 2)
        {
            cout<<"Gear number is :"<<gear<<endl;
            for(speed=0;s<=40;s=s+2)
            {
                cout<<"speed is :"<<s<<endl;
                usleep(400000);
            }
        }
        else if(gear == 3)
        {
            cout<<"Gear number is :" <<gear<<endl;
            for(speed=0;s<=80;s=s+2)
            {
                cout<<"speed is :"<<s<<endl;
                usleep(400000);// return s;
            }
        }
        else if(gear == 4)
        {
            cout<< "Gear number is :"<<gear<<endl;
            for(speed=0;s<=120;s=s+2)
            {
                cout<<"speed is :"<<s<<endl;
                usleep(400000);
                //return s;
            }
        }
        else if(gear == 5)
        {
            cout<<"Gear number is :"<<gear<<endl;
            for(speed=0;s<=160;s=s+2)
            {
                cout<<"speed is :"<<s<<"\n";
                usleep(400000);
                    //return s;
            }
        }
        return s-2;
    }

}
int  Gear_Control::changeGear_decrease(char current_gear)
{
        gear--;
        if(gear == 4 )
        {
            cout<<"Gear no is :"<<gear<<endl;
            for (;s>=110;s=s-2)
            {
                cout<<"speed is :"<<s<<endl;
                usleep(400000);
            }
            gear--;
        }

        else if(gear == 3 )
        {
            cout<<"Gear no is :"<<gear<<endl;
            for (;s>=80;s=s-2)
            {
                cout<<"speed is :"<<s<<endl;
                usleep(400000);
            }
            gear--;
        }

        else if(gear == 2 )
        {
            cout<<"Gear no is :"<<gear<<endl;
            for(;s>=40;s=s-2)
            {
                cout<<"speed is :"<<s<<endl;
                usleep(400000);
            }
            gear--;
        }

        else if(gear == 1 )
        {
            cout<<"Gear no is :"<<gear<<endl;
            for (;s>20;s=s-2)
            {
                cout<<"speed is :"<<s<<endl;
                usleep(400000);
            }
            gear--;
        }
         return s-2;
    }
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
