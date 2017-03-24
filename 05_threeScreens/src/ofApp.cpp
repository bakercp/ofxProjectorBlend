#include "ofApp.h"


void ofApp::setup()
{
    blender.setup(PROJECTOR_WIDTH,
                  PROJECTOR_HEIGHT,
                  PROJECTOR_COUNT,
                  PIXEL_OVERLAP);

    blender.gamma[0] = .5;
    blender.blendPower[0] = 1;
    blender.luminance[0] = 0;

    std::cout << "canvas size: " << blender.getCanvasWidth() << " x " << blender.getCanvasHeight() << std::endl;
    std::cout << "display size: " << blender.getDisplayWidth() << " x " << blender.getDisplayHeight() << std::endl;

//    ofSetWindowShape(blender.getDisplayWidth(),
  //                   blender.getDisplayHeight());

    //ofSetWindowPosition(-10, 0);

}


void ofApp::draw()
{
    blender.begin(); //call blender.begin() to draw onto the blendable canvas
    {
        //light gray backaground
        ofSetColor(100, 100, 100);
        ofDrawRectangle(0, 0, blender.getCanvasWidth(), blender.getCanvasHeight());

        //thick grid lines for blending
        ofSetColor(255, 255, 255);
        ofSetLineWidth(3);

        //vertical line
        for(float i = 0; i <= blender.getCanvasWidth(); i += 40)
        {
            ofDrawLine(i, 0, i, blender.getCanvasHeight());
        }

        //horizontal lines
        for(float j = 0; j <= blender.getCanvasHeight(); j += 40)
        {
            ofDrawLine(0, j, blender.getCanvasWidth(), j);
        }

        //instructions
        ofSetColor(255, 255, 255);
        ofDrawRectangle(10, 10, 300, 100);
        ofSetColor(0, 0, 0);
        ofDrawBitmapString("SPACE - toggle show blend\n[g/G] - adjust gamma\n[p/P] - adjust blend power\n[l/L] adjust luminance", 15, 35);
    }

    blender.end(); //call when you are finished drawing

    //this draws to the main window
    blender.draw();
}


void ofApp::keyReleased(int key)
{
    //hit spacebar to toggle the blending strip
    if (key == ' '){
        //toggling this variable effects whether the blend strip is shown
        blender.showBlend = !blender.showBlend;
    }

    // more info here on what these variables do
    // http://local.wasp.uwa.edu.au/~pbourke/texture_colour/edgeblend/

    else if (key == 'g')
    {
        blender.gamma[0]  -= .05;
    }
    else if (key == 'G')
    {
        blender.gamma[0]  += .05;
    }
    else if (key == 'l')
    {
        blender.luminance[0]  -= .05;
    }
    else if (key == 'L')
    {
        blender.luminance[0]  += .05;
    }
    else if (key == 'p')
    {
        blender.blendPower[0]  -= .05;
    }
    else if (key == 'P')
    {
        blender.blendPower[0] += .05;
    }
    else if (key == OF_KEY_UP)
    {
        float x = ofGetWindowPositionX();
        float y = ofGetWindowPositionY() - 1;
        std::cout << "up " << x << "/" << y << std::endl;
        ofSetWindowPosition(int(x), int(y));
    }
    else if (key == OF_KEY_DOWN)
    {
        float x = ofGetWindowPositionX();
        float y = ofGetWindowPositionY() + 1;
        std::cout << "down " << x << "/" << y << std::endl;
        ofSetWindowPosition(int(x), int(y));
    }
    else if (key == OF_KEY_LEFT)
    {
        float x = ofGetWindowPositionX() - 1;
        float y = ofGetWindowPositionY();
        std::cout << "left " << x << "/" << y << std::endl;
        ofSetWindowPosition(int(x), int(y));
    }
    else if (key == OF_KEY_RIGHT)
    {
        std::cout << "right" << std::endl;
        float x = ofGetWindowPositionX() + 1;
        float y = ofGetWindowPositionY();
        std::cout << "right " << x << "/" << y << std::endl;
        ofSetWindowPosition(int(x), int(y));
    }
    else if (key == '[')
    {

    }
    else if (key == ']')
    {

    }

}
