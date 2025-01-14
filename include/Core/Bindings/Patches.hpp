#pragma once

namespace vili
{
    class node;

    namespace exceptions
    {
        /**
         * \flagsurrogate{vili::exceptions::debug_info::debug_info}
         * \paramrename{function,funcname}
         */
        class _Patch_debug_info
        {
        };
    }
}

namespace vili::parser
{
    class state;
    /**
     * \proxy{vili::parser::state::push}
     */
    void state_push_proxy(state* self, node value);
    /**
     * \flagsurrogate{vili::node}
     * \helper{Lib/Internal/Vili.lua}
     */
    class _PatchNode
    {
    };
    /**
     * \flagsurrogate{vili::node::is}
     * \nobind
     */
    class _PatchNode_is
    {
    };
    /**
     * \flagsurrogate{vili::node::as}
     * \nobind
     */
    class _PatchNode_as
    {
    };
    /**
     * \flagsurrogate{vili::node::emplace}
     * \nobind
     */
    class _PatchNode_emplace
    {
    };
    /**
     * \flagsurrogate{vili::node::data}
     * \nobind
     */
    class _PatchNode_data
    {
    };
    /**
     * \flagsurrogate{vili::parser::error_message}
     * \nobind
     */
    class _Patch_error_message
    {
    };
}
