#include "Gear_Control.h"
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





