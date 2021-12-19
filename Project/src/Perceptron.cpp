// Perceptron.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <vector>
#include <iostream>
#include <random>
#include <numeric>
#include <cmath>
#include <time.h>
#include "Perceptron.h"

Perceptron::Perceptron(int number_of_inputs) {
    this->bias = bias; // Save bias value
    weights.resize(number_of_inputs + 1); // Resize weights to include inputs and bias term
}

void Perceptron::set_weights(std::vector<double> w_init) {
    weights = w_init;
}

double Perceptron::output(std::vector<double> inputs) {
    inputs.push_back(bias); // Add bias term to the end of the inputs vector
    double weighted_sum = std::inner_product(inputs.begin(), inputs.end(), weights.begin(), (double)0.0); // Dot product of Inputs⋅Weights vectors
    return step_function(weighted_sum);
}

double Perceptron::step_function(double weighted_sum) {
    // weighted_sum is a 1D tensor
    if (weighted_sum >= 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    Perceptron* p = new Perceptron(2);


    
 /*    AND GATE*/

     p->set_weights({ 10,10,-15 });

     std::cout << "Output: " << std::endl;
     std::cout << p->output({ 0,0 }) << std::endl;
     std::cout << p->output({ 0,1 }) << std::endl;
     std::cout << p->output({ 1,0 }) << std::endl;
     std::cout << p->output({ 1,1 }) << std::endl;


     /*   OR GATE

    p->set_weights({ 15,15,-10 });

    std::cout << "Output: " << std::endl;
    std::cout << p->output({ 0,0 }) << std::endl;
    std::cout << p->output({ 0,1 }) << std::endl;
    std::cout << p->output({ 1,0 }) << std::endl;
    std::cout << p->output({ 1,1 }) << std::endl;*/

}