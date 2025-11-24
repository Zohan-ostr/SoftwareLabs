/* Automation Studio generated header file */
/* Do not edit ! */
/* MotorCtrl  */

#ifndef _MOTORCTRL_
#define _MOTORCTRL_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define New_Variable 0.0f
#else
 _GLOBAL_CONST float New_Variable;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct FB_Integrator
{
	/* VAR_INPUT (analog) */
	float in;
	/* VAR_OUTPUT (analog) */
	float out;
	/* VAR (analog) */
	float dt;
	float prevstate;
} FB_Integrator_typ;

typedef struct FB_Regulator
{
	/* VAR_INPUT (analog) */
	float e;
	/* VAR_OUTPUT (analog) */
	float u;
	/* VAR (analog) */
	float k_p;
	float k_i;
	struct FB_Integrator integrator;
	float iyOld;
	float max_abs_value;
	float dt;
	float prevstate;
	float state_back1;
	float sum;
	float b;
	float a;
	float u_max;
} FB_Regulator_typ;

typedef struct FB_Motor
{
	/* VAR_INPUT (analog) */
	float u;
	/* VAR_OUTPUT (analog) */
	float w;
	/* VAR (analog) */
	float prevstate;
	struct FB_Integrator integrator;
	float phi;
	float ke;
	float Tm;
	float dt;
	float state;
} FB_Motor_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void FB_Integrator(struct FB_Integrator* inst);
_BUR_PUBLIC void FB_Regulator(struct FB_Regulator* inst);
_BUR_PUBLIC void FB_Motor(struct FB_Motor* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MOTORCTRL_ */

