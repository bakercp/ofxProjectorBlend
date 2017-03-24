#pragma once


#include "ofMain.h"
#include "ofxProjectorBlend.h"


#define PROJECTOR_COUNT 3
#define PROJECTOR_WIDTH 640
#define PROJECTOR_HEIGHT 480
#define PIXEL_OVERLAP 40


class ofApp: public ofBaseApp
{
public:
    void setup() override;
    void draw();

    void keyReleased(int key) override;

    ofxProjectorBlend blender;
    ofImage blendClown;
    bool bDrawClown = false;
};
