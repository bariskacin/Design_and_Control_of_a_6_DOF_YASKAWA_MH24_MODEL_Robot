#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "string" , 17 , 8 } , {
"string" , 18 , 8 } , { "struct_djHv1IDeD06XoprYU3B4T" , 19 , 64 } , {
"struct_PdEm5aibBpUO2JM4kXLMUF" , 20 , 120 } , {
"struct_j64StuZ2rTU6bLJIiNazJE" , 21 , 8 } , {
"struct_yi3YsCL79DNI0dtXLQLW7F" , 22 , 16 } , {
"struct_mMmMIWQfse5RkykfQy9BKC" , 23 , 1752 } , { "eh2txzajs5" , 24 , 2872 }
, { "uint64_T" , 25 , 8 } , { "int64_T" , 26 , 8 } , { "uint_T" , 27 , 32 } ,
{ "char_T" , 28 , 8 } , { "uchar_T" , 29 , 8 } , { "time_T" , 30 , 8 } } ;
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof ( uint64_T ) , 8 , sizeof ( char_T ) , sizeof ( struct_djHv1IDeD06XoprYU3B4T ) , sizeof ( struct_PdEm5aibBpUO2JM4kXLMUF ) , sizeof ( struct_j64StuZ2rTU6bLJIiNazJE ) , sizeof ( struct_yi3YsCL79DNI0dtXLQLW7F ) , sizeof ( struct_mMmMIWQfse5RkykfQy9BKC ) , sizeof ( eh2txzajs5 ) , sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint_T ) , sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" , "physical_connection" , "int64_T" , "uint64_T" , "string" , "string" , "struct_djHv1IDeD06XoprYU3B4T" , "struct_PdEm5aibBpUO2JM4kXLMUF" , "struct_j64StuZ2rTU6bLJIiNazJE" , "struct_yi3YsCL79DNI0dtXLQLW7F" , "struct_mMmMIWQfse5RkykfQy9BKC" , "eh2txzajs5" , "uint64_T" , "int64_T" , "uint_T" , "char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . oxta5vjgq5 [ 0 ] ) , 0 , 0 , 30 } , { ( char_T * ) ( & rtDW . jkhwz0koed ) , 24 , 0 , 1 } , { ( char_T * ) ( & rtDW . bym0lzgf4m ) , 0 , 0 , 16 } , { ( char_T * ) ( & rtDW . pqrvwzb5tj ) , 11 , 0 , 15 } , { ( char_T * ) ( & rtDW . kzy4zysele ) , 10 , 0 , 2 } , { ( char_T * ) ( & rtDW . jg2njv2ydx ) , 3 , 0 , 4 } , { ( char_T * ) ( & rtDW . fry3rs5hhb ) , 8 , 0 , 3 } } ; static DataTypeTransitionTable rtBTransTable = { 7U , rtBTransitions } ; static DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP . bc [ 0 ] ) , 0 , 0 , 39 } } ; static DataTypeTransitionTable rtPTransTable = { 1U , rtPTransitions } ;
