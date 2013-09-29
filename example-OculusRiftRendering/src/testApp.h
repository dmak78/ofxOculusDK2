#pragma once

#include "ofMain.h"
#include "ofxOculusRift.h"

class testApp : public ofBaseApp
{
	public:
	
		void setup();
		void update();
		void draw();
		
		void drawScene();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	
		ofxOculusRift		oculusRift;

		ofLight				light;
		ofEasyCam			cam;
	
		ofTrueTypeFont		fontWorld;
		bool drawRift;
};
