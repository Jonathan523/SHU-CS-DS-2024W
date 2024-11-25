#include "Polynomial.hpp"
#include <cmath> 
#include <iostream>

Node::Node(double coeff, double exp) : coefficient(coeff), exponent(exp), next(NULL) {}
//内联构造函数

Polynomial::Polynomial() {
    head = new Node();
    head->next = head;
}
//创建头结点

Polynomial::~Polynomial() {
    Node* current = head->next;
    while (current != head) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    delete head;
}

void Polynomial::add(double coefficient, double exponent) {
    Node* newNode = new Node(coefficient, exponent);
    Node* current = head;
    while (current->next != head && current->next->exponent > exponent) {
        current = current->next;
    }
    if (current->exponent == newNode->exponent)
    {
        current->coefficient += newNode->coefficient;
    }
    else {
        newNode->next = current->next;
        current->next = newNode;
    }
}
//根据指数大小插入

void Polynomial::show(int num)
{
    Node* current = head->next;
    if (current->coefficient > 0){
        std::cout << current->coefficient << "x^" << current->exponent;
    }
    else {
        std::cout << current->coefficient << "x^" << current->exponent;
    }
    current = current->next;
    for (int i = 0; i < num - 1;i++) {
        if (current->coefficient > 0) {
            std::cout <<"+"<< current->coefficient << "x^" << current->exponent;
        } 
        else {
            std::cout << "-"<<abs(current->coefficient) << "x^" << current->exponent;
        }
        current = current->next;
    }
}

double Polynomial::calc(double x) const {
   
     double result = 0.0;
     Node* current = head->next;
     while (current != head) {
          result += current->coefficient * pow(x, current->exponent);
          current = current->next;
     }
     return result;
}
