
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "MotorCtrl.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void FB_Regulator(struct FB_Regulator* inst)
{
	inst->a = inst->e * inst->k_p;
	inst->b = inst->e * inst->k_i * inst->dt;
	if (inst->a > inst->max_abs_value){
		inst->a = inst->max_abs_value;
	}
	if (inst->a < -inst->max_abs_value){
		inst->a = -inst->max_abs_value;
	}
	inst->integrator.in = inst->b + inst->iyOld;
	FB_Integrator(&inst->integrator);
	inst->sum = inst->a + inst->integrator.out;
	inst->u = inst->sum;
	if (inst->u > inst->max_abs_value){
		inst->u = inst->max_abs_value;
	}
	if (inst->u < -inst->max_abs_value){
		inst->u = -inst->max_abs_value;
	}
	
	inst->iyOld = inst->u - inst->sum;
}
