#include "NNPerceptron.h"
#include <list>

class NNLayer
{
    list<NNPerceptron> perceptrons;

  public:
    NNLayer(list<NNPerceptron> perceptrons);
};