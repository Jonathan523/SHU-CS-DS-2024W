#pragma once
#include <iostream>
using namespace std;

class Node {
public:
    int coefficient; 
    int exponent;   
    Node* next;
    Node(int coeff = 0, int exp = 0);
};

class Polynomial {
private:
    Node* head;

public:
    Polynomial();
    ~Polynomial();
    void addTerm(int coefficient, int exponent);
    double calc(double x) const;
};


