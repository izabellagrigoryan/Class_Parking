// Parking_and_Car.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Car {
    string brand;
    string number;

    int parking_number;
    bool payed_or_no;  //true = payed, false = don't payed
};

class Parking_Numbers {
    bool free_or_busy;  //true = free, false = busy
    int parking_number;
public:
    void set_free_or_busy(bool fob)
    {
        free_or_busy = fob;
    }
    bool get_free_or_busy()
    {
        return free_or_busy;
    }
    void set_parking_number(int p_nr)
    {
        parking_number = p_nr;
    }
    bool get_parking_number()
    {
        return parking_number;
    }
};

class Parking {
    Car* cars;
    Parking_Numbers* parking_numbers;

public:
    Parking()
    {
        cars = new Car[1000];
        parking_numbers = new Parking_Numbers[1000];
    }

    void add_car(string brand, string number){}
    
    void remove_car(int parking_number){}
    
    void find_car(int parking_number){}

    int find_parking_number(string brand, string number){}
    
};
int main()
{
    Parking Mega_mall_parking;
    return 0;
}

