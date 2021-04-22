// Copyright 2021 Molotkova Svetlana

#include <gtest/gtest.h>
#include <utility>

#include <iostream>

#include "include/QuadraticEquation.h"

TEST(Equation, Cant_Solve_Equation) {
    QuadraticEquation eq(1, 0, -25);
    std::pair<double, double> myres(5, -5);
    std::pair<double, double> res = eq.solver();
    ASSERT_EQ(myres, res);
}

TEST(Equation, Equation1) {
    QuadraticEquation eq(1, 3, -4);
    std::pair<double, double> myres(1, -4);
    std::pair<double, double> res = eq.solver();
    ASSERT_EQ(myres, res);
}

TEST(Equation, Equation2) {
    QuadraticEquation eq(-1, -3, 4);
    std::pair<double, double> myres(-4, 1);
    std::pair<double, double> res = eq.solver();
    ASSERT_EQ(myres, res);
}

TEST(Equation, Equation3) {
    QuadraticEquation eq(1, 4, 4);
    std::pair<double, double> myres(-2, -2);
    std::pair<double, double> res = eq.solver();
    ASSERT_EQ(myres, res);
}

TEST(Equation, Equation4) {
    QuadraticEquation eq(1, 0, -9);
    std::pair<double, double> myres(3, -3);
    std::pair<double, double> res = eq.solver();
    ASSERT_EQ(myres, res);
}
