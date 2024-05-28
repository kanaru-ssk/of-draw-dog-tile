#include "dog.h"

void Dog::draw() const {
  ofSetColor(color_);
  // face
  ofDrawCircle(x_, y_, size_ / 2);

  // ears
  const int EAR_TOP_OFFSET_X = size_ * 50 / 200;
  const int EAR_TOP_OFFSET_Y = size_ * 130 / 200;
  const int EAR_BOTTOM_OUTSIDE_OFFSET_X = size_ * 90 / 200;
  const int EAR_BOTTOM_INSIDE_OFFSET_X = size_ * 10 / 200;
  const int EAR_BOTTOM_OFFSET_Y = size_ * 40 / 200;
  ofDrawTriangle(x_ - EAR_TOP_OFFSET_X, y_ - EAR_TOP_OFFSET_Y,
                 x_ - EAR_BOTTOM_OUTSIDE_OFFSET_X, y_ - EAR_BOTTOM_OFFSET_Y,
                 x_ - EAR_BOTTOM_INSIDE_OFFSET_X, y_ - EAR_BOTTOM_OFFSET_Y);
  ofDrawTriangle(x_ + EAR_TOP_OFFSET_X, y_ - EAR_TOP_OFFSET_Y,
                 x_ + EAR_BOTTOM_OUTSIDE_OFFSET_X, y_ - EAR_BOTTOM_OFFSET_Y,
                 x_ + EAR_BOTTOM_INSIDE_OFFSET_X, y_ - EAR_BOTTOM_OFFSET_Y);

  ofSetColor(0);
  // eyes
  const int EYE_OFFSET_X = size_ * 35 / 200;
  const int EYE_OFFSET_Y = size_ * 10 / 200;
  const int EYE_RADIUS = size_ / 20;
  ofDrawCircle(x_ - EYE_OFFSET_X, y_ + EYE_OFFSET_Y, EYE_RADIUS);
  ofDrawCircle(x_ + EYE_OFFSET_X, y_ + EYE_OFFSET_Y, EYE_RADIUS);

  // nose
  ofDrawCircle(x_, y_ + size_ * 30 / 200, size_ / 20);
}
