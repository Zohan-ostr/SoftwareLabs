/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1760392700_4_
#define _BUR_1760392700_4_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long counter;
_BUR_LOCAL plcbit flag;
_BUR_LOCAL plcbit enable;
_BUR_LOCAL float dt;
_BUR_LOCAL float speed;
_BUR_LOCAL float Tj;
_BUR_LOCAL float Tm;
_BUR_LOCAL float ke;
_BUR_LOCAL struct FB_Integrator fb_integrator1;
_BUR_LOCAL struct FB_Regulator fb_regulator1;
_BUR_LOCAL struct FB_Motor fb_motor2;
_BUR_LOCAL struct FB_Motor fb_motor1;
_BUR_LOCAL float k;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Program/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MotorCtrl/MotorCtrl.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1760392700_4_ */

