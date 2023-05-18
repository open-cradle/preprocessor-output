// THIS FILE WAS AUTOMATICALLY GENERATED BY THE PREPROCESSOR.
// DO NOT EDIT!

#ifndef THINKNODE_ACCOUNT
#define THINKNODE_ACCOUNT "mgh"
#endif
#ifndef THINKNODE_FUNCTION_APP
#define THINKNODE_FUNCTION_APP "dosimetry"
#endif
#ifndef THINKNODE_TYPES_APP
#define THINKNODE_TYPES_APP "dosimetry"
#endif
#include <cradle/typing/core/preprocessed.h>







#ifdef INSERT 
    #undef INSERT 
#endif 

#ifdef UPDATE 
    #undef UPDATE 
#endif 

#ifdef DELETE 
    #undef DELETE 
#endif 
















#line 1 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
#ifndef CRADLE_TYPING_UTILITIES_DIFF_HPP
#define CRADLE_TYPING_UTILITIES_DIFF_HPP

#line 4 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
#include <cradle/typing/core.h>

#line 6 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
namespace cradle {


#ifdef INSERT 
    #undef INSERT 
#endif 

#ifdef UPDATE 
    #undef UPDATE 
#endif 

#ifdef DELETE 
    #undef DELETE 
#endif 
#line 8 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
enum class value_diff_op { INSERT,UPDATE,DELETE }; template<> struct definitive_type_info_query<value_diff_op> {     static void     get(cradle::api_type_info*); }; template<> struct type_info_query<value_diff_op> {     static void     get(cradle::api_type_info*); }; template<> struct enum_type_info_query<value_diff_op> {     static void     get(cradle::api_enum_info*); }; static inline size_t deep_sizeof(value_diff_op) { return sizeof(value_diff_op); } inline size_t hash_value(value_diff_op const& x) {     return size_t(x); }static inline unsigned get_value_count(value_diff_op) { return 3; } char const* get_value_id(value_diff_op value); void to_dynamic(     cradle::dynamic* v,     value_diff_op x); void from_dynamic(     value_diff_op* x,     cradle::dynamic const& v); std::ostream& operator<<(     std::ostream& s,      value_diff_op const& x); 

#line 19 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
// value_diff_path represents the path from the root of a value to the point
// where a change should be applied.
// Path elements can either be strings or positive integers.
// Strings represent record field names.
// Integers represent list indices.
typedef std::vector<dynamic> value_diff_path;

#line 26 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
CRADLE_DEFINE_EXCEPTION(invalid_diff_path)

#line 28 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
} namespace cradle { struct value_diff_item { value_diff_path path;  value_diff_op op;  optional<dynamic > a;  optional<dynamic > b;  value_diff_item() {} value_diff_item(value_diff_path const& path, value_diff_op const& op, optional<dynamic > const& a, optional<dynamic > const& b) : path(path), op(op), a(a), b(b) {} };  inline value_diff_item make_value_diff_item(  value_diff_path path, value_diff_op op, optional<dynamic > a, optional<dynamic > b ) { return value_diff_item(  std::move(path), std::move(op), std::move(a), std::move(b) ); }template<> struct definitive_type_info_query<value_diff_item> {     static void     get(cradle::api_type_info*); }; template<> struct type_info_query<value_diff_item> {     static void     get(cradle::api_type_info*); }; template<> struct structure_field_type_info_adder<value_diff_item> {     static void     add(std::map<std::string, cradle::api_structure_field_info>*); }; bool operator==(value_diff_item const& a, value_diff_item const& b); bool operator!=(value_diff_item const& a, value_diff_item const& b); bool operator<(value_diff_item const& a, value_diff_item const& b); void swap(value_diff_item& a, value_diff_item& b); size_t deep_sizeof(value_diff_item const& x); void write_fields_to_record(cradle::dynamic_map& record, value_diff_item const& x); void to_dynamic(cradle::dynamic* v, value_diff_item const& x); void read_fields_from_record(value_diff_item& x, cradle::dynamic_map const& record); void from_dynamic(value_diff_item* x, cradle::dynamic const& v); std::ostream& operator<<(std::ostream& s, value_diff_item const& x);std::ostream& operator<<(std::ostream& s, value_diff_item const& x);size_t hash_value(value_diff_item const& x);} namespace cradle { 

#line 38 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
typedef std::vector<value_diff_item> value_diff;

#line 40 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
// Compute the difference between two dynamic values.
// Applying the resulting diff to a will yield b.
value_diff
compute_value_diff(dynamic const& a, dynamic const& b);

#line 45 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
// Apply a diff to a value.
dynamic
apply_value_diff(dynamic const& v, value_diff const& diff);

#line 49 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
} // namespace cradle

#line 51 "C:/dev/open-cradle/cradle/src/cradle/typing/utilities/diff.hpp"
#endif
