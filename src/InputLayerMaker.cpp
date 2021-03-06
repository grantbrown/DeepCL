// Copyright Hugh Perkins 2014 hughperkins at gmail
//
// This Source Code Form is subject to the terms of the Mozilla Public License, 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.

#include <stdexcept>

#include "InputLayer.h"

#include "InputLayerMaker.h"

using namespace std;

template< typename T > Layer *InputLayerMaker<T>::createLayer( Layer *previousLayer ) {
    return new InputLayer<T>( this );
}

template class InputLayerMaker<float>;
template class InputLayerMaker<unsigned char>;


