#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    //value.set("value",0.2, 0, 1);
    //gui.setup();
    //gui.add(value);
    gui.setup();
    gui.add(radius.setup("radius",140, 10, 300));
//    int a = 0;
//    int b = 2;
//
//    for (int i=0; i < 100; i++) {
//        a += 2;
//        b += 3;
//    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofDrawBitmapStringHighlight("Everything works!", 20, 20);
//    float value = 0.2;
//    ofSetColor(ofColor::white);
//    ofDrawBitmapString("value: " + ofToString(value),10,10);
//
    ofSetCircleResolution(100);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, radius);
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
