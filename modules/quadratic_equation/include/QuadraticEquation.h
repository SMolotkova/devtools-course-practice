// Copyright 2021 Molotkova Svetlana

#ifndef MODULES_QUADRATIC_EQUATION_INCLUDE_QUADRATICEQUATION_H_
#define MODULES_QUADRATIC_EQUATION_INCLUDE_QUADRATICEQUATION_H_

#include <utility>

class QuadraticEquation {
 private:
    double a;
    double b;
    double c;
 public:
    QuadraticEquation(double a, double b, double c) {
    if (a == 0){
         throw "Error";
     } else  if ((b == 0) && (c == 0)) {
        throw "Error";
     } else {
       this->a = a;
       this->b = b;
       this->c = c;
     }
  }
    double discr(double a, double b, double c);

    std::pair <double, double> solver();
};

#endif  // MODULES_QUADRATIC_EQUATION_INCLUDE_QUADRATICEQUATION_H_
