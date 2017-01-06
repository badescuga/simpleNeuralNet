#include "NNPerceptron.h"

NNPerceptron::NNPerceptron(
    float bias,
    float (*summingFunction)(list<float> inputs, list<float> wights, float bias),
    float (*activationFunction)(float))
{
    this->summingFunction = summingFunction;
    this->activationFunction = activationFunction;
    this->bias = bias;
    this->weights = list<float>(1, 0);
}

float NNPerceptron::Train(list<float> inputs)
{
    if (this->weights.size() != inputs.size())
    {
        this->weights.resize(inputs.size());
    }

    float sumCalc = this->summingFunction(inputs, this->weights, this->bias);
}