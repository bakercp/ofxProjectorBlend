/**
 *
 *    ofApp.h
 *
 *  ofxProjectorBlend sample project
 *
 *  Created by James George ( http://www.jamesgeorge.org ) Sep. 20 2010
 *  In collaboration with FlightPhase ( http://www.flightphase.com )
 *  Updated by Jeff Crouse, Nov 23, 2012
 *
 *  Copyright (c) 2010
 *
 */


#pragma once


#include "ofMain.h"
#include "ofxProjectorBlend.h"


//let's pretend we are blending 2 projectors
//side by side, set at a display resolution of 640x480
//with a 40 pixel overlap
#define PROJECTOR_COUNT 3
#define PROJECTOR_WIDTH 1920 
#define PROJECTOR_HEIGHT 1200 
#define PIXEL_OVERLAP 40


class ofApp: public ofBaseApp
{
public:
    void setup() override;
    void draw() override;
    
    void keyReleased(int key) override;

    ofxProjectorBlend blender;

};
