#pragma once

#include <SDL_render.h>
#include "globals.hpp"

class Ball {
  private:
    Point position;
    Point velocity;
    Point acceleration;

    const int   radius       = 50;
    const float friction     = 0.5;
    const int   mass         = 10;
    const Point max_velocity = Point(3, 3);
    Size window_size;

  public:
    void draw(SDL_Renderer *renderer);
    void update(float seconds_passed);
    void push_up();
    void push_down();
    void push_left();
    void push_right();
    void reset_x();
    void reset_y();

    Ball(Size window_size_) {
      window_size  = window_size_;

      position     = Point(radius, radius);
      velocity     = Point(0,0);
      acceleration = Point(0,0);
    };
};
