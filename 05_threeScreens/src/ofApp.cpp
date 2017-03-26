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

    load();

//    ofSetWindowShape(blender.getDisplayWidth(),
  //                   blender.getDisplayHeight());

    //ofSetWindowPosition(-10, 0);

}hp::keyPressed(int key)
{
    //hit spacebar to toggle the blending strip
    if (key == ' '){
        //toggling this variable effects whether the blend strip is shown
        blender.showBlend = !blender.showBlend;
    }

    // more info here on what these variables do
    // http://local.wasp.uwa.edu.au/~pbourke/texture_colour/edgeblend/

    else if( key == OF_KEY_TAB)
    {
        currentBlend = (currentBlend + 1 ) % blender.gamma.size();
    }
    else if (key == 'g')
    {
        blender.gamma[currentBlend]  -= .025;
    }
    else if (key == 'G')
    {
      hhh
