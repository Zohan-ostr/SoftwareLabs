/* Automation Studio generated header file */
/* Do not edit ! */
/* Library  */

#ifndef _LIBRARY_
#define _LIBRARY_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef enum DOOR_STATES
{	ST_INIT,
	ST_UNKNOWN,
	ST_OPEN,
	ST_CLOSE,
	ST_ACC_POS,
	ST_ACC_NEG,
	ST_POS,
	ST_NEG,
	ST_DEC_POS,
	ST_DEC_NEG
} DOOR_STATES;

typedef enum trololo
{	CMD_ENABLED = 15,
	STATE_SWITCHED_ON = 35,
	CMD_SHUTDOWN = 6
} trololo;

typedef enum tralala
{	STATE_READY = 33,
	CMD_SWITCHED_ON = 7,
	STATE_DISABLED = 64
} tralala;

typedef struct LedStateMachine
{
	/* VAR_INPUT (analog) */
	signed short state;
	/* VAR_OUTPUT (analog) */
	unsigned short timer;
	/* VAR_OUTPUT (digital) */
	plcbit led1;
	plcbit led2;
	plcbit led3;
	plcbit led4;
} LedStateMachine_typ;

typedef struct DoorStateMachine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	signed short speed;
	/* VAR_INPUT (digital) */
	plcbit sw1;
	plcbit sw2;
	plcbit sw3;
	plcbit sw4;
	plcbit direction;
} DoorStateMachine_typ;

typedef struct DriveStateMachine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	unsigned short command;
	signed short speed;
	/* VAR_INPUT (digital) */
	plcbit enable;
} DriveStateMachine_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void LedStateMachine(struct LedStateMachine* inst);
_BUR_PUBLIC void DoorStateMachine(struct DoorStateMachine* inst);
_BUR_PUBLIC void DriveStateMachine(struct DriveStateMachine* inst);


#ifdef __cplusplus
};
#endif
#endif /* _LIBRARY_ */

