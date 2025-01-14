#include <Bindings/obe/Event/Exceptions/Exceptions.hpp>

#include <Event/Exceptions.hpp>

#include <Bindings/Config.hpp>

namespace obe::Event::Exceptions::Bindings
{
    void LoadClassCallbackCreationError(sol::state_view state)
    {
        sol::table ExceptionsNamespace = state["obe"]["Event"]["Exceptions"].get<sol::table>();
        sol::usertype<obe::Event::Exceptions::CallbackCreationError> bindCallbackCreationError
            = ExceptionsNamespace.new_usertype<obe::Event::Exceptions::CallbackCreationError>(
                "CallbackCreationError", sol::call_constructor,
                sol::constructors<obe::Event::Exceptions::CallbackCreationError(std::string_view,
                    std::string_view, std::string_view, std::string_view, obe::DebugInfo)>(),
                sol::base_classes,
                sol::bases<obe::Exception<obe::Event::Exceptions::CallbackCreationError>,
                    obe::BaseException>());
    }
    void LoadClassEventAlreadyExists(sol::state_view state)
    {
        sol::table ExceptionsNamespace = state["obe"]["Event"]["Exceptions"].get<sol::table>();
        sol::usertype<obe::Event::Exceptions::EventAlreadyExists> bindEventAlreadyExists
            = ExceptionsNamespace.new_usertype<obe::Event::Exceptions::EventAlreadyExists>(
                "EventAlreadyExists", sol::call_constructor,
                sol::constructors<obe::Event::Exceptions::EventAlreadyExists(
                    std::string_view, std::string_view, obe::DebugInfo)>(),
                sol::base_classes,
                sol::bases<obe::Exception<obe::Event::Exceptions::EventAlreadyExists>,
                    obe::BaseException>());
    }
    void LoadClassEventExecutionError(sol::state_view state)
    {
        sol::table ExceptionsNamespace = state["obe"]["Event"]["Exceptions"].get<sol::table>();
        sol::usertype<obe::Event::Exceptions::EventExecutionError> bindEventExecutionError
            = ExceptionsNamespace.new_usertype<obe::Event::Exceptions::EventExecutionError>(
                "EventExecutionError", sol::call_constructor,
                sol::constructors<obe::Event::Exceptions::EventExecutionError(
                    std::string_view, std::string_view, obe::DebugInfo)>(),
                sol::base_classes,
                sol::bases<obe::Exception<obe::Event::Exceptions::EventExecutionError>,
                    obe::BaseException>());
    }
    void LoadClassEventGroupAlreadyExists(sol::state_view state)
    {
        sol::table ExceptionsNamespace = state["obe"]["Event"]["Exceptions"].get<sol::table>();
        sol::usertype<obe::Event::Exceptions::EventGroupAlreadyExists> bindEventGroupAlreadyExists
            = ExceptionsNamespace.new_usertype<obe::Event::Exceptions::EventGroupAlreadyExists>(
                "EventGroupAlreadyExists", sol::call_constructor,
                sol::constructors<obe::Event::Exceptions::EventGroupAlreadyExists(
                    std::string_view, std::string_view, obe::DebugInfo)>(),
                sol::base_classes,
                sol::bases<obe::Exception<obe::Event::Exceptions::EventGroupAlreadyExists>,
                    obe::BaseException>());
    }
    void LoadClassEventGroupNotJoinable(sol::state_view state)
    {
        sol::table ExceptionsNamespace = state["obe"]["Event"]["Exceptions"].get<sol::table>();
        sol::usertype<obe::Event::Exceptions::EventGroupNotJoinable> bindEventGroupNotJoinable
            = ExceptionsNamespace.new_usertype<obe::Event::Exceptions::EventGroupNotJoinable>(
                "EventGroupNotJoinable", sol::call_constructor,
                sol::constructors<obe::Event::Exceptions::EventGroupNotJoinable(
                    std::string_view, std::string_view, obe::DebugInfo)>(),
                sol::base_classes,
                sol::bases<obe::Exception<obe::Event::Exceptions::EventGroupNotJoinable>,
                    obe::BaseException>());
    }
    void LoadClassEventNamespaceAlreadyExists(sol::state_view state)
    {
        sol::table ExceptionsNamespace = state["obe"]["Event"]["Exceptions"].get<sol::table>();
        sol::usertype<obe::Event::Exceptions::EventNamespaceAlreadyExists>
            bindEventNamespaceAlreadyExists
            = ExceptionsNamespace.new_usertype<obe::Event::Exceptions::EventNamespaceAlreadyExists>(
                "EventNamespaceAlreadyExists", sol::call_constructor,
                sol::constructors<obe::Event::Exceptions::EventNamespaceAlreadyExists(
                    std::string_view, obe::DebugInfo)>(),
                sol::base_classes,
                sol::bases<obe::Exception<obe::Event::Exceptions::EventNamespaceAlreadyExists>,
                    obe::BaseException>());
    }
    void LoadClassEventNamespaceNotJoinable(sol::state_view state)
    {
        sol::table ExceptionsNamespace = state["obe"]["Event"]["Exceptions"].get<sol::table>();
        sol::usertype<obe::Event::Exceptions::EventNamespaceNotJoinable>
            bindEventNamespaceNotJoinable
            = ExceptionsNamespace.new_usertype<obe::Event::Exceptions::EventNamespaceNotJoinable>(
                "EventNamespaceNotJoinable", sol::call_constructor,
                sol::constructors<obe::Event::Exceptions::EventNamespaceNotJoinable(
                    std::string_view, obe::DebugInfo)>(),
                sol::base_classes,
                sol::bases<obe::Exception<obe::Event::Exceptions::EventNamespaceNotJoinable>,
                    obe::BaseException>());
    }
    void LoadClassUnknownEvent(sol::state_view state)
    {
        sol::table ExceptionsNamespace = state["obe"]["Event"]["Exceptions"].get<sol::table>();
        sol::usertype<obe::Event::Exceptions::UnknownEvent> bindUnknownEvent
            = ExceptionsNamespace.new_usertype<obe::Event::Exceptions::UnknownEvent>("UnknownEvent",
                sol::call_constructor,
                sol::constructors<obe::Event::Exceptions::UnknownEvent(std::string_view,
                    std::string_view, const std::vector<std::string>&, obe::DebugInfo)>(),
                sol::base_classes,
                sol::bases<obe::Exception<obe::Event::Exceptions::UnknownEvent>,
                    obe::BaseException>());
    }
    void LoadClassUnknownEventGroup(sol::state_view state)
    {
        sol::table ExceptionsNamespace = state["obe"]["Event"]["Exceptions"].get<sol::table>();
        sol::usertype<obe::Event::Exceptions::UnknownEventGroup> bindUnknownEventGroup
            = ExceptionsNamespace.new_usertype<obe::Event::Exceptions::UnknownEventGroup>(
                "UnknownEventGroup", sol::call_constructor,
                sol::constructors<obe::Event::Exceptions::UnknownEventGroup(std::string_view,
                    std::string_view, const std::vector<std::string>&, obe::DebugInfo)>(),
                sol::base_classes,
                sol::bases<obe::Exception<obe::Event::Exceptions::UnknownEventGroup>,
                    obe::BaseException>());
    }
    void LoadClassUnknownEventNamespace(sol::state_view state)
    {
        sol::table ExceptionsNamespace = state["obe"]["Event"]["Exceptions"].get<sol::table>();
        sol::usertype<obe::Event::Exceptions::UnknownEventNamespace> bindUnknownEventNamespace
            = ExceptionsNamespace.new_usertype<obe::Event::Exceptions::UnknownEventNamespace>(
                "UnknownEventNamespace", sol::call_constructor,
                sol::constructors<obe::Event::Exceptions::UnknownEventNamespace(
                    std::string_view, const std::vector<std::string>&, obe::DebugInfo)>(),
                sol::base_classes,
                sol::bases<obe::Exception<obe::Event::Exceptions::UnknownEventNamespace>,
                    obe::BaseException>());
    }
};