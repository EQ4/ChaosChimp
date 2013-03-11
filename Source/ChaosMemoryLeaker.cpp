/*
  ==============================================================================

    ChaosMemoryLeaker.cpp
    Created: 5 Mar 2013 11:11:50pm
    Author:  nik

  ==============================================================================
*/

#include "ChaosMemoryLeaker.h"

void ChaosMemoryLeaker::doChaos(float* channelData, int numSamples)
{
    // Allocate 1Mb of memory. At 512 buffersize, this is approximately 90Mb/sec
    void* stuff = malloc(1024 * 1024);
    junk.add(stuff);
}

void ChaosMemoryLeaker::reset()
{
    for (int i = 0; i < junk.size(); i++) {
        free(junk[i]);
    }
    junk.clear();
}

