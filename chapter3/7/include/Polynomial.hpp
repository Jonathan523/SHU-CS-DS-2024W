#pragma once
#include <iostream>
using namespace std;

class Node {
public:
    double coefficient;
    double exponent;
    Node* next;
    Node(double coeff = 0, double exp = 0);//初始化系数和指数
};

class Polynomial {
private:
    Node* head;

public:
    Polynomial();
    ~Polynomial();
    void add(double coefficient, double exponent);
    double calc(double x) const;
    void show(int num);
    
};


