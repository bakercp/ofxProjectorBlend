#pragma once

#include "ofMain.h"
#include "ofxProjectorBlend.h"
#include "ofxSimpleGuiToo.h"

#define PROJECTOR_COUNT 3
#define PROJECTOR_WIDTH 640
#define PROJECTOR_HEIGHT 480
#define PIXEL_OVERLAP 40

class ofApp : public ofBaseApp{

    public:
        void setup() override;
        void update() override;
        void draw();

        void keyPressed (int key) override;
        void keyReleased(int key) override;
        void mouseMoved(int x, int y ) override;
        void mouseDragged(int x, int y, int button) override;
        void mousePressed(int x, int y, int button) override;
        void mouseReleased(int x, int y, int button) override;
        void windowResized(int w, int h) override;
        void dragEvent(ofDragInfo dragInfo) override;
        void gotMessage(ofMessage msg) override;
    
        ofxProjectorBlend blender;
};
