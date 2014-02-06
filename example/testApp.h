#pragma once

#include "ofMain.h"
#include "ofxThreadedImage.h"

class testApp : public ofBaseApp{

	public:

		void setup();
		void draw();
		
		void keyPressed(int key);

		ofxThreadedImage img;
};
