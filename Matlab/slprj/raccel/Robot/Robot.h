#ifndef Robot_h_
#define Robot_h_
#ifndef Robot_COMMON_INCLUDES_
#define Robot_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "Robot_d319c82e_1_gateway.h"
#endif
#include "Robot_types.h"
#include "rtGetNaN.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rtGetInf.h"
#define MODEL_NAME Robot
#define NSAMPLE_TIMES (1) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (7) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (12)   
#elif NCSTATES != 12
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T oxta5vjgq5 [ 4 ] ; real_T fnfuo2n5br [ 4 ] ; real_T
drpmbbjier [ 4 ] ; real_T g4zvorfoyc [ 4 ] ; real_T ibly43g0d1 [ 4 ] ; real_T
bvq4qojzau [ 4 ] ; real_T nxffv4joze [ 6 ] ; } B ; typedef struct {
eh2txzajs5 jkhwz0koed ; real_T bym0lzgf4m ; real_T h0rqqb0wcl ; real_T
i3awxmmjc2 ; real_T inqh5y5bsg ; real_T lmzkktfmkv ; real_T jt5vatf0cl ;
real_T nfvq5ctuft ; real_T eje2qxm55w ; real_T g1z5g53lbl ; real_T cdri1hbpjs
; real_T isnpkrqqrl ; real_T mehusysgyb ; real_T p4dieqqfxn ; real_T
jopq5ban2l ; real_T eirm30hp5t ; real_T grryzk3gjr ; void * pqrvwzb5tj ; void
* ewidfimhnq ; void * ptooix4sys ; void * bcygojsi10 ; void * ndjgvufsvt ;
void * pwzsvl0rb4 ; void * d0txqx1qmw ; void * lwiepazxvg ; void * go5nf41o4r
; void * dmsbvuz01n ; void * kjjcdlkrjf ; void * n01qjq4awq ; void *
ars51ky5s5 ; void * ils4eblfs4 ; void * pqrnybrskf ; int_T kzy4zysele ; int_T
jaohhh25bh ; uint8_T jg2njv2ydx ; uint8_T gyaxu3yo0i ; uint8_T hbxkltvzx2 ;
uint8_T azu1eoxfoi ; boolean_T fry3rs5hhb ; boolean_T p5gxb3gdmd ; boolean_T
l3x2tbqt54 ; } DW ; typedef struct { real_T ah1jzctybs [ 2 ] ; real_T
fl5pdgbhhg [ 2 ] ; real_T j0f0ibj3fc [ 2 ] ; real_T l4k54opudo [ 2 ] ; real_T
mssof1uyh4 [ 2 ] ; real_T dyavuypeu4 [ 2 ] ; } X ; typedef struct { real_T
ah1jzctybs [ 2 ] ; real_T fl5pdgbhhg [ 2 ] ; real_T j0f0ibj3fc [ 2 ] ; real_T
l4k54opudo [ 2 ] ; real_T mssof1uyh4 [ 2 ] ; real_T dyavuypeu4 [ 2 ] ; } XDot
; typedef struct { boolean_T ah1jzctybs [ 2 ] ; boolean_T fl5pdgbhhg [ 2 ] ;
boolean_T j0f0ibj3fc [ 2 ] ; boolean_T l4k54opudo [ 2 ] ; boolean_T
mssof1uyh4 [ 2 ] ; boolean_T dyavuypeu4 [ 2 ] ; } XDis ; typedef struct {
real_T ah1jzctybs [ 2 ] ; real_T fl5pdgbhhg [ 2 ] ; real_T j0f0ibj3fc [ 2 ] ;
real_T l4k54opudo [ 2 ] ; real_T mssof1uyh4 [ 2 ] ; real_T dyavuypeu4 [ 2 ] ;
} CStateAbsTol ; typedef struct { real_T ah1jzctybs [ 2 ] ; real_T fl5pdgbhhg
[ 2 ] ; real_T j0f0ibj3fc [ 2 ] ; real_T l4k54opudo [ 2 ] ; real_T mssof1uyh4
[ 2 ] ; real_T dyavuypeu4 [ 2 ] ; } CXPtMin ; typedef struct { real_T
ah1jzctybs [ 2 ] ; real_T fl5pdgbhhg [ 2 ] ; real_T j0f0ibj3fc [ 2 ] ; real_T
l4k54opudo [ 2 ] ; real_T mssof1uyh4 [ 2 ] ; real_T dyavuypeu4 [ 2 ] ; }
CXPtMax ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T bc [ 18 ] ; real_T tp [ 3 ] ; real_T wp [ 18 ] ; } ;
extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X
rtX ; extern DW rtDW ; extern P rtP ; extern mxArray * mr_Robot_GetDWork ( )
; extern void mr_Robot_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_Robot_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Robot_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
