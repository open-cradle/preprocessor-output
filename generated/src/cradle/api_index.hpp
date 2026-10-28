#include <cradle/typing/core/api_types.hpp>
namespace cradle {
void add_src_cradle_thinknode_types_api(cradle::api_implementation& api);
void add_src_cradle_typing_core_api_types_api(cradle::api_implementation& api);
void add_src_cradle_typing_core_upgrades_api(cradle::api_implementation& api);
void add_src_cradle_typing_io_http_requests_api(cradle::api_implementation& api);
void add_src_cradle_typing_utilities_diff_api(cradle::api_implementation& api);
void add_src_cradle_websocket_messages_api(cradle::api_implementation& api);
void add_src_cradle_websocket_types_api(cradle::api_implementation& api);
#define CRADLE_REGISTER_APIS(api)\
add_src_cradle_thinknode_types_api(api);\
add_src_cradle_typing_core_api_types_api(api);\
add_src_cradle_typing_core_upgrades_api(api);\
add_src_cradle_typing_io_http_requests_api(api);\
add_src_cradle_typing_utilities_diff_api(api);\
add_src_cradle_websocket_messages_api(api);\
add_src_cradle_websocket_types_api(api);\

}
