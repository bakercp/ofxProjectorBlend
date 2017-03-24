#include "ofApp.h"
#include "ofAppGLFWWindow.h"


int main()
{
    int numScreens = 3;
    int screenWidth = 1920;
    int screenHeight = 1200;

    ofGLFWWindowSettings settings;

    //settings.

    settings.multiMonitorFullScreen = true;
   //settings.resizable = false;
//    settings.width = screenWidth * numScreens;
//   settings.height = screenHeight;
    //settings.windowMode = OF_FULLSCREEN;

//   settings.setPosition(glm::vec2(100, 100));



    auto window = ofCreateWindow(settings);
    auto app = std::make_shared<ofApp>();

    ofRunApp(window, app);
    return ofRunMainLoop();
}
