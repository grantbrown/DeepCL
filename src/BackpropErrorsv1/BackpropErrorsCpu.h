#pragma once

#include "BackpropErrors.h"

#define STATIC static
#define VIRTUAL virtual

class BackpropErrorsCpu : public BackpropErrors {
public:
    // [[[cog
    // import cog_addheaders
    // cog_addheaders.add()
    // ]]]
    // classname: BackpropErrorsCpu
    // cppfile: BackpropErrorsCpu.cpp

    BackpropErrorsCpu( OpenCLHelper *cl, LayerDimensions dim, ActivationFunction const *fn );
    VIRTUAL ~BackpropErrorsCpu();
    VIRTUAL float *backpropErrors( int batchSize, float *results, float *weights, float *biasWeights,
    float *errors );
    VIRTUAL void backpropErrors( int batchSize,
    CLWrapper *resultsWrapper, CLWrapper *weightsWrapper, CLWrapper *biasWeightsWrapper, CLWrapper *errorsWrapper,
    CLWrapper *errorsForUpstreamWrapper );

    // [[[end]]]
};

