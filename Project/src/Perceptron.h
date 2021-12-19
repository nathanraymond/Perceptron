#pragma once
#pragma once
#include <algorithm>
#include <vector>
#include <iostream>
#include <random>
#include <numeric>
#include <cmath>
#include <time.h>

class Perceptron {
public:
	Perceptron(int number_of_inputs);
	double bias = 1.0;
	std::vector<double> weights;
	void set_weights(std::vector<double> w_init);
	double step_function(double x);
	double output(std::vector<double> inputs);
};