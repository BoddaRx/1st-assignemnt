//  main.cpp
//  1st Assignment
//  Abdelrahman Nashed
//  900211119

#include <iostream>
#include <string>
#include "Car.h"
#include <queue>
#include "Road.h"

using namespace std;

//Main Function
int main()
{
    int x, y, z;
    int max = 0;
    double efficiency1 = 0.0;
    double efficiency2 = 0.0;
    double efficiency3 = 0.0;
    
    queue<Car> q;
    
    Car cars [20];
        
    for (x = 0; x < 8; x++)
    {
        q.push(cars[x]);
    }
    for (y = 0; y < 10; y++)
    {
        q.push(cars[y]);
    }
    for (z = 0; z < 2; z++)
    {
        q.push(cars[z]);
    }

    Road r1;
    Road r;
    Road r2;
    Road r3;
    
    r.setSpeed_Limit(100);
    r1.Radar(100);
    r2.Radar(80);
    r3.Radar(60);
    
    Road A ('A', 100);
    Road B ('B', 80);
    Road C ('C', 60);
    
    A.allow("private");
    A.allow("private");
    A.allow("motorcycle");
    A.allow("truck");
    
    B.allow("bus");
    B.allow("private");
    
    C.allow("truck");
    C.allow("bus");
    C.allow("private");
    
    Car a ("BMW", 100, 2019, "Private", "1321TT");
    Car b ("BMW", 100, 2019, "Private", "1321TT");
    Car c ("BMW", 100, 2019, "Private", "1321TT");
    Car d ("BMW", 100, 2019, "Private", "1321TT");

    
    cout << endl;
    
    a.setspeed(80);
    b.setspeed(80);
    c.setspeed(100);
    d.setspeed(90);
    
    a.setyear_model(2018);
    b.setyear_model(2019);
    c.setyear_model(2021);
    d.setyear_model(2020);
            
    cout << "The speed of the 1st Car: " << a.getspeed() << endl;
    cout << "The year model of the 1st Car: " << a.getyear_Model() << endl;
    cout << "The speed of the 2nd Car: " << b.getspeed() << endl;
    cout << "The year model of the 2nd Car: " << b.getyear_Model() << endl;
    cout << "The speed of the 3rd Car: " << c.getspeed() << endl;
    cout << "The year model of the 3rd Car: " << c.getyear_Model() << endl;
    cout << "The speed of the 4th Car: " << d.getspeed() << endl;
    cout << "The year model of the 4th Car: " << d.getyear_Model() << endl << endl;
    
    
    //Which road has the highest numbers of cars

    cout << "In Road A, there are: " << x << " cars" << endl;
    
    cout << "In Road B, there are: " << y << " cars" << endl;
    
    cout << "In Road C, there are: " << z << " cars" << endl << endl;
    
    //calculate efficiency
    //number of cars in your target road/ number of cars in the highest road * 100
    efficiency1 = (x / 20.0) * 100.0;
    efficiency2 = (y / 20.0) * 100.0;
    efficiency3 = (z / 20.0) * 100.0;
    
    x = efficiency1;
    y = efficiency2;
    z = efficiency3;
    
    cout << "The efficiency of each road:" << endl;
    cout << "Road A: " << x << "%" << endl;
    cout << "Road B: " << y << "%" << endl;
    cout << "Road C: " << z << "%" << endl << endl;
            
    //Use if statement to determine the heighest efficiency
    if (x > y && x > z)
        max = x;
    else if (y > x && y > z)
        max = y;
    else if ( z > y && z > x)
        max = z;
    
    cout << "The road with the highest efficiency is Road: " << "B with " << max << " % efficiency."<< endl << endl;
    
    return 0;
}
