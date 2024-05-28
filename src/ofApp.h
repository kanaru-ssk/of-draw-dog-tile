#pragma once

#include "dog.h"
#include "ofMain.h"

class ofApp : public ofBaseApp {
 public:
  void setup() override;
  void draw() override;

  void windowResized(int w, int h) override;

 private:
  vector<Dog> dogs;
};
