//Part A _ source file

#include "Car.h"
#include <string>
#include <iostream>

    Car::Car ()
    {
        Car_Type = " ";
        Car_Brand = " ";
        Car_Plate = " ";
        year_model = 0;
        speed = 0;
    }

    //constructor
    Car::Car (std::string Brand, int Max_Speed, int Year_Model, std::string Type, std::string Plate)
    {
        Car_Brand = Brand;
        speed = Max_Speed;
        year_model = Year_Model;
        
        while (Type != "Bus" && Type != "Motorcycle" && Type != "Private" && Type != "Truck")
        {
            std::cout << "Wrong type input" << std::endl;
            std::cin >> Type;
        }
        Car_Type=Type;
        
        
        while(Plate.length()!=6)
        {
            std::cout<<"wrong plate input";
            std::cin>>Plate;
        }
        Car_Plate = Plate;
    }

//set and get speed
    void Car::setspeed(int s)
    {
        speed = s;
    }
    
    int Car::getspeed() const
    {
        return speed;
    }
    
//set and get year model
    void Car::setyear_model(int y)
    {
        year_model = y;
    }
    
    int Car::getyear_Model() const
    {
        return year_model;
    }

//set and get car type
void Car::setCar_Type(std::string t)
{
    while (t != "Bus" && t != "Motorcycle" && t != "Private" && t != "Truck")
    {
        std::cout << "Wrong type input" << std::endl;
        std::cin >> t;
    }
    Car_Type = t;
}

std::string Car::getCar_Type() const
{
    return  Car_Type;
   
}

//set and get car plate
void Car::setCar_Plate(std::string p)
{
    while(p.length()!=6)
    {
        std::cout<<"wrong plate input..";
        std::cin>>p;
    }
    Car_Plate=p;
}

std::string Car::getCar_Plate() const
{
    return Car_Plate;
}

//set and get car brand
void Car::setCar_Brand(std::string b)
{
    Car_Brand = b;
}

std::string Car::getCar_Brand() const
{
    return Car_Brand;
}
