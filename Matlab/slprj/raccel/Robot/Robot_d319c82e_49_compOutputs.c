#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "pm_default_allocator.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "Robot_d319c82e_49_geometries.h"
PmfMessageId Robot_d319c82e_49_compOutputs ( const RuntimeDerivedValuesBundle
* rtdv , const double * state , const int * modeVector , const double * input
, const double * inputDot , const double * inputDdot , const double *
discreteState , double * output , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void )
modeVector ; ( void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState
; ( void ) neDiagMgr ; output [ 0 ] = input [ 0 ] ; output [ 1 ] = input [ 1
] ; output [ 2 ] = input [ 2 ] ; output [ 3 ] = input [ 3 ] ; output [ 4 ] =
input [ 4 ] ; output [ 5 ] = input [ 5 ] ; return NULL ; }
