//Part A _ Header file

#ifndef Car_h
#define Car_h

#include <string>
#include <iostream>

//Class function
class Car
{
private:    //Private members
    std::string Car_Brand;
    std::string Car_Type;
    std::string Car_Plate;
    int year_model;
    int speed;
    
public:     //Public members
    Car ();
    
    //constructor
    Car (std::string Brand, int Max_Speed, int Year_Model, std::string Type, std::string Plate);
    
    //set and get speed
    void setspeed(int s);
    int getspeed() const;
    
    //set and get year model
    void setyear_model(int y);
    int getyear_Model() const;
    
    //set and get car type
    void setCar_Type(std::string t);
    std::string  getCar_Type() const;
    
    //set and get car plate
    void setCar_Plate(std::string p);
    std::string  getCar_Plate() const;
    
    //set and get car brand
    void setCar_Brand(std::string b);
    std::string getCar_Brand() const;
    
};

#endif /* Car_h */
