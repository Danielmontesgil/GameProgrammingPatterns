#pragma once

class CommandStrategy
{
public:
    virtual ~CommandStrategy() = default;
    virtual void execute() = 0;
    virtual void undo() = 0;
};
