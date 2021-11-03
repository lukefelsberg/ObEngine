#pragma once

namespace sol
{
    class state_view;
};
namespace obe::Config::Exceptions::Bindings
{
    void LoadClassConfigError(sol::state_view state);
    void LoadClassInvalidVersionFormat(sol::state_view state);
};