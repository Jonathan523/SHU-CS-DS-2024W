#include "Polynomial.hpp"
#include <cmath> 

Node::Node(int coeff, int exp) : coefficient(coeff), exponent(exp), next(NULL) {}

Polynomial::Polynomial() {
    head = new Node();
    head->next = head; 
}

Polynomial::~Polynomial() {
    Node* current = head->next;
    while (current != head) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    delete head;
}

void Polynomial::addTerm(int coefficient, int exponent) {
    Node* newNode = new Node(coefficient, exponent);
    Node* current = head;
    while (current->next != head && current->next->exponent > exponent) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

double Polynomial::calc(double x) const {
    if (x == 0) {
        double result = 0.0;
        Node* current = head->next;
        while (current != head) {
            if (current->exponent == 0) {
                result += current->coefficient;
            }
            current = current->next;
        }
        return result;
    }
    else {
        double result = 0.0;
        Node* current = head->next;
        while (current != head) {
            result += current->coefficient * pow(x, current->exponent);
            current = current->next;
        }
        return result;
    }
}
