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
        
    } // ���� x
};


class Package2 : public Vacation {
public:
    void bookHotels() override {
        cout << "Hotels are booked." << endl;
    }

    void bookFlights() override {
        
    } // ���� x

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


// ���� ����� ���� Director Ŭ����
class  Director
{
public:
    static Vacation* vacation;
    static void book(int type); // Ŭ���̾�Ʈ�� �� �Լ��� ȣ�� ����
};
#endif  