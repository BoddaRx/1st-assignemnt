//Part B _ source file

#include "Road.h"
#include <string>
#include <iostream>

Road::Road ()
{
    Road_Type = ' ';
    Speed_Limit = 0;
    countA=0;
    countB=0;
    countC=0;
}

//constructor Road
Road::Road (char road_type , int speed_limit)
{
    while ( Road_Type != 'A' && Road_Type != 'B' && Road_Type != 'C')
    Road_Type = road_type;
    Speed_Limit = speed_limit;
}

//A radar that checks the speed
bool Road::Radar(int speed)
{
    bool check=false;
    if(speed > Speed_Limit)
    {
        check= true;
        std::cout << "This car will be fined" << std::endl;
    }
    else
        check = false;
    return check;
}

//allow function test to see which road (A,B, or C)
void Road::allow(std::string Car_Type)
{
    //Road A: Allow only Private and motorcycle vehicles.
    //Road B: Allow all vehicles
    //Road C: Allow only trucks.
    
        if ((Road_Type == 'A' || Road_Type == 'a')&&(Car_Type == "private" || Car_Type == "motorycle"))
        {
            std::cout << "Private and motorcycle vehicles are allowed" << std::endl;
            countA++;
        }
        else if (Road_Type == 'B' || Road_Type == 'b')
        {
            std::cout << "All vehicles are allowed" << std::endl;
            countB++;
        }
        else if ((Road_Type == 'C' || Road_Type == 'c')&&(Car_Type == "truck"))
        {
            std::cout << "Truck vehicles are only allowed" << std::endl;
            countC++;
        }
    
}

//set and get road type
void Road::setRoad_Type(char r)
{
    Road_Type = r;
}

char Road::getRoad_Type() const
{
    return Road_Type;
}

//set and get speed limti
void Road::setSpeed_Limit(int s)
{
    Speed_Limit = s;
}

int Road::getSpeed_Limit() const
{
    return Speed_Limit;
}

//calculate age function
int age(int Year_Model)
{
    return (2022 - Year_Model);
}
