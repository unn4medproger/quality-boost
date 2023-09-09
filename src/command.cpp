#include <cstdlib>

#include <sdk/command.hpp>
#include <sdk/engine_cvar.hpp>

#include "command.hpp"

extern float delay_time;
extern ICvar* engine_cvar;
extern bool button_swap;

MacroCommand::MacroCommand() {
    this->registered = false;
    this->name = "macro";
    this->help_string = "Quality Boost";
    this->flags = 0;
}

void MacroCommand::dispatch(const Command& c) {
    if (c.count() > 1)
        delay_time = std::atof(c[1]);
    else
        engine_cvar->console_printf("Delay is %.3f\n", delay_time);
}

ButtonSwapCommand::MacroCommand() {
    this->registered = false;
    this->name = "macro_swap";
    this->help_string = "Toggle attack and attack2 swap while holding flashlight";
    this->flags = 0;
}

void ButtonSwapCommand::dispatch(const Command& c) {
    button_swap = !button_swap;
    engine_cvar->console_printf("Button swap %s\n", button_swap ? "enabled" : "disabled");
}
