#ifndef Robot_types_h_
#define Robot_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_djHv1IDeD06XoprYU3B4T_
#define DEFINED_TYPEDEF_FOR_struct_djHv1IDeD06XoprYU3B4T_
typedef struct { real_T translation [ 3 ] ; real_T angle ; real_T axis [ 3 ]
; void * ID ; } struct_djHv1IDeD06XoprYU3B4T ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_PdEm5aibBpUO2JM4kXLMUF_
#define DEFINED_TYPEDEF_FOR_struct_PdEm5aibBpUO2JM4kXLMUF_
typedef struct { real_T mass ; real_T CoM [ 3 ] ; real_T MoI [ 3 ] ; real_T
PoI [ 3 ] ; real_T color [ 3 ] ; real_T opacity ; void * ID ; }
struct_PdEm5aibBpUO2JM4kXLMUF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_j64StuZ2rTU6bLJIiNazJE_
#define DEFINED_TYPEDEF_FOR_struct_j64StuZ2rTU6bLJIiNazJE_
typedef struct { real_T Pos ; } struct_j64StuZ2rTU6bLJIiNazJE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_yi3YsCL79DNI0dtXLQLW7F_
#define DEFINED_TYPEDEF_FOR_struct_yi3YsCL79DNI0dtXLQLW7F_
typedef struct { struct_j64StuZ2rTU6bLJIiNazJE Rz ; void * ID ; }
struct_yi3YsCL79DNI0dtXLQLW7F ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_mMmMIWQfse5RkykfQy9BKC_
#define DEFINED_TYPEDEF_FOR_struct_mMmMIWQfse5RkykfQy9BKC_
typedef struct { struct_djHv1IDeD06XoprYU3B4T RigidTransform [ 13 ] ;
struct_PdEm5aibBpUO2JM4kXLMUF Solid [ 7 ] ; struct_yi3YsCL79DNI0dtXLQLW7F
RevoluteJoint [ 5 ] ; } struct_mMmMIWQfse5RkykfQy9BKC ;
#endif
#ifndef struct_tag_sDBN5amJiWNjTGyRSzSoR7F
#define struct_tag_sDBN5amJiWNjTGyRSzSoR7F
struct tag_sDBN5amJiWNjTGyRSzSoR7F { real_T breaks [ 5 ] ; real_T coefs [ 96
] ; } ;
#endif
#ifndef typedef_opppuz5zb1
#define typedef_opppuz5zb1
typedef struct tag_sDBN5amJiWNjTGyRSzSoR7F opppuz5zb1 ;
#endif
#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE
struct tag_BlgwLpgj2bjudmbmVKWwDE { uint32_T f1 [ 8 ] ; } ;
#endif
#ifndef typedef_lqbhn015fl
#define typedef_lqbhn015fl
typedef struct tag_BlgwLpgj2bjudmbmVKWwDE lqbhn015fl ;
#endif
#ifndef struct_tag_iwRRaWkE5J9HSrpD5fFzZB
#define struct_tag_iwRRaWkE5J9HSrpD5fFzZB
struct tag_iwRRaWkE5J9HSrpD5fFzZB { boolean_T tunablePropertyChanged [ 5 ] ;
int32_T isInitialized ; boolean_T TunablePropsChanged ; lqbhn015fl
inputVarSize ; real_T Waypoints [ 18 ] ; real_T TimePoints [ 3 ] ; real_T
VelocityBoundaryCondition [ 18 ] ; real_T AccelerationBoundaryCondition [ 10
] ; opppuz5zb1 PPStruct ; opppuz5zb1 PPDStruct ; opppuz5zb1 PPDDStruct ;
boolean_T PPFormUpdatedNeeded ; } ;
#endif
#ifndef typedef_eh2txzajs5
#define typedef_eh2txzajs5
typedef struct tag_iwRRaWkE5J9HSrpD5fFzZB eh2txzajs5 ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 25
#endif
#ifndef SS_INT64
#define SS_INT64 26
#endif
typedef struct P_ P ;
#endif
