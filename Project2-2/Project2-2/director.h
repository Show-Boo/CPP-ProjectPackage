#pragma once
#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;


class Vacation {
public:
    virtual void bookHotels() = 0;
    virtual void bookFlights() = 0;
    virtual void bookTours() = 0;
};


class Package1 : public Vacation {
public:
    void bookHotels() override {
        cout << "Hotels are booked." << endl;
    }

    void bookFlights() override {
        cout << "Flights are booked." << endl;
    }

    void bookTours() override {
        
    } // 예약 x
};


class Package2 : public Vacation {
public:
    void bookHotels() override {
        cout << "Hotels are booked." << endl;
    }

    void bookFlights() override {
        
    } // 예약 x

    void bookTours() override {
        cout << "Tours are booked." << endl;
    }
};


class Package3 : public Vacation {
public:
    void bookHotels() override {
        cout << "Hotels are booked." << endl;
    }

    void bookFlights() override {
        cout << "Flights are booked." << endl;
    }

    void bookTours() override {
        cout << "Tours are booked." << endl;
    }

};


// 정적 멤버를 갖는 Director 클래스
class  Director
{
public:
    static Vacation* vacation;
    static void book(int type); // 클라이언트는 이 함수만 호출 가능
};
#endif  