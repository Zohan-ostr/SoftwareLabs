
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	//Мотор Brush DC Motors 16C18 205.67
	dt = 0.1;
	Tj = 0.2*dt;
	Tm = 0.060;
	ke = 0.070;
	
	fb_regulator1.dt = dt;
	fb_regulator1.integrator.dt = dt;
	fb_regulator1.max_abs_value = 24.0;
	fb_regulator1.k_p = ke*Tm/Tj ;
	fb_regulator1.k_i = ke/Tj;
	fb_motor1.dt = dt;
	fb_motor1.integrator.dt = dt;
	fb_motor1.Tm = Tm;
	fb_motor1.ke = ke;
	fb_motor1.u = 0;
	fb_motor2.dt = dt;
	fb_motor2.integrator.dt = dt;
	fb_motor2.Tm = Tm;
	fb_motor2.ke = ke;
	fb_motor2.u = 0;
	counter = 0;
	speed = 0;
	enable = 1;
	flag = 0;
}
