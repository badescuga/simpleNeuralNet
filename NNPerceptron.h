#include <iostream>
#include <list>
using std::list;

class NNPerceptron
{
    float bias;                                                                   //b
    list<float> weights;                                                          //w
    float (*summingFunction)(list<float> inputs, list<float> wights, float bias); // sum function
    float (*activationFunction)(float);                                           //final conversion function that takes in a float

  public:
    NNPerceptron(
        float bias,
        float (*summingFunction)(list<float> inputs, list<float> wights, float bias),
        float (*activationFunction)(float));
    float Train(list<float> inputs);
    float UpdateWeights(list<float> weights);
};