#pragma once

#include <sdk/convar.hpp>

class MacroCommand : public ConCommand {
public:
    MacroCommand();
    virtual void dispatch(const Command& c);
} inline macro_command;

class ButtonSwapCommand : public ConCommand {
public:
    ButtonSwapCommand();
    virtual void dispatch(const Command& c);
} inline button_swap_command;
