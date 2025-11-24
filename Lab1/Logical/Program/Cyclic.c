
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
	if (enable){
		
		if (counter % 50 == 0)
		{
			flag = !flag;
			if (flag)
			{
				speed = 50;
			}
			else
			{
				speed = 0;
			}
		}
		fb_regulator1.e = speed - fb_motor1.w;
		FB_Regulator(&fb_regulator1);
		fb_motor1.u = fb_regulator1.u;
		FB_Motor(&fb_motor1);
		fb_motor2.u = speed * fb_motor2.ke;
		FB_Motor(&fb_motor2);
		counter += 1;
	
	}


}
