#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "pm_default_allocator.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ssc_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void Robot_d319c82e_49_computeRuntimeParameters ( real_T * in , real_T * out
) { ( void ) in ; ( void ) out ; } void
Robot_d319c82e_49_computeAsmRuntimeDerivedValuesDoubles ( const double * rtp
, double * rtdvd ) { ( void ) rtp ; ( void ) rtdvd ; } void
Robot_d319c82e_49_computeAsmRuntimeDerivedValuesInts ( const double * rtp ,
int * rtdvi ) { ( void ) rtp ; ( void ) rtdvi ; } void
Robot_d319c82e_49_computeAsmRuntimeDerivedValues ( const double * rtp ,
RuntimeDerivedValuesBundle * rtdv ) {
Robot_d319c82e_49_computeAsmRuntimeDerivedValuesDoubles ( rtp , rtdv ->
mDoubles . mValues ) ; Robot_d319c82e_49_computeAsmRuntimeDerivedValuesInts ( rtp , rtdv -> mInts . mValues ) ; } void Robot_d319c82e_49_computeSimRuntimeDerivedValuesDoubles ( const double * rtp , double * rtdvd ) { ( void ) rtp ; ( void ) rtdvd ; } void Robot_d319c82e_49_computeSimRuntimeDerivedValuesInts ( const double * rtp , int * rtdvi ) { ( void ) rtp ; ( void ) rtdvi ; } void Robot_d319c82e_49_computeSimRuntimeDerivedValues ( const double * rtp , RuntimeDerivedValuesBundle * rtdv ) { Robot_d319c82e_49_computeSimRuntimeDerivedValuesDoubles ( rtp , rtdv -> mDoubles . mValues ) ; Robot_d319c82e_49_computeSimRuntimeDerivedValuesInts ( rtp , rtdv -> mInts . mValues ) ; }
