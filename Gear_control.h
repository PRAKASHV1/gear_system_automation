

#include<iostream>
using namespace std;
#include <unistd.h>
int static s;
static int gear;
class Gear_Control
{
    private:
        int speed;
        //static int gear;
    public:
        //constructor and destructor
        Gear_Control();
        ~Gear_Control();
        int test();
        int changeGear_increase(int current_gear);
        int changeGear_decrease(char current_gear);
};

