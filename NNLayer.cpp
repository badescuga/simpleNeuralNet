#include "NNPerceptron.h"
#include "NNLayer.h"

NNLayer::NNLayer(list<NNPerceptron> perceptrons) {
this->perceptrons = perceptrons;
}