#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
  ofSetBackgroundColor(255);
  ofSetCircleResolution(64);

  const int DOG_SIZE = 100;
  const int NUM_DOG_X = 1 + ofGetWidth() / DOG_SIZE;
  const int NUM_DOG_Y = 1 + ofGetHeight() / DOG_SIZE;

  for (int y = 0; y < NUM_DOG_Y; y++) {
    for (int x = 0; x < NUM_DOG_X; x++) {
      const float dogX = (x + 0.5) * DOG_SIZE;
      const float dogY = (y + 0.5) * DOG_SIZE;
      const ofColor color = x % 2 ? 100 : 200;
      dogs.push_back(Dog(dogX, dogY, DOG_SIZE, color));
    }
  }
}

//--------------------------------------------------------------
void ofApp::draw() {
  for (const auto& dog : dogs) {
    dog.draw();
  }
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) { setup(); }
