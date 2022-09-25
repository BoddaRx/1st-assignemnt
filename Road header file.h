//Part B _ Header file

#ifndef Road_h
#define Road_h

#include <string>
#include <iostream>

class Road
{
    //Private section
private:
    char Road_Type;
    int Speed_Limit;
    int countA, countB, countC;
    
    //Public section
public:
    Road ();
    
    Road (char road_type , int speed_limit);
   
    
    //A radar that checks the speed
    bool Radar(int speed);

    //test to see which road (A,B, or C)
    void allow(std::string Car_Type);
    
    //set and get road type
    void setRoad_Type(char r);
    char getRoad_Type () const;
    
    //set and get speed limit
    void setSpeed_Limit(int s);
    int getSpeed_Limit() const;
    
};


#endif /* Road_h */
