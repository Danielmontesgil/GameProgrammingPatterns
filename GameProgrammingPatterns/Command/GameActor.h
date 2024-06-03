#pragma once

class GameActor
{
public:
    GameActor(const int x, const int y)
        :x_(x),
        y_(y)
    {}
    
    void jump();
    void fire_gun();
    void moveTo(int x, int y);
    int x() const { return x_; }
    int y() const { return y_; }

private:
    int x_, y_;
};
