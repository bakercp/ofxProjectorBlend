#pragma once


#include "ofMain.h"
#include "ofxProjectorBlend.h"


class ofApp: public ofBaseApp
{
public:
    void setup() override;
    void update() override;
    void draw();

    void keyReleased(int key) override;

    ofxProjectorBlend blender;
    ofPoint pos, vel;
    float radius = 0;

};
