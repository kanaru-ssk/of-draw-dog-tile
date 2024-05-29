#pragma once

#include "ofMain.h"

class Dog {
 public:
  Dog() : x_(0), y_(0), size_(100), color_(100) {}
  Dog(int x, int y, int size, ofColor color)
      : x_(x), y_(y), size_(size), color_(color) {}

  void draw() const;

 private:
  int x_, y_, size_;
  ofColor color_;
};