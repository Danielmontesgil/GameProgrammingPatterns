#pragma once
#include "CommandStrategy.h"
#include "GameActor.h"

class MoveUnitCommand : public CommandStrategy
{
public:
    MoveUnitCommand(GameActor* unit, int x, int y)
        : unit_(unit),
          xBefore_(0),
          yBefore_(0),
          x_(x),
          y_(y)
        {}
    
    void execute() override
    {
        // Remember the unit's position before the move
        // so we can restore it.
        xBefore_ = unit_->x();
        yBefore_ = unit_->y();
        
        unit_->moveTo(x_,y_);
    }

    void undo() override
    {
        unit_->moveTo(xBefore_, yBefore_);
    }
    
private:
    GameActor* unit_;
    int xBefore_, yBefore_;
    int x_, y_;
};
