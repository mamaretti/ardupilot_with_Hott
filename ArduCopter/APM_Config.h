// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

// User specific config file.  Any items listed in config.h can be overridden here.

// If you used to define your CONFIG_APM_HARDWARE setting here, it is no longer
// valid! You should switch to using a HAL_BOARD flag in your local config.mk.

//#define HIL_MODE              HIL_MODE_SENSORS    // build for hardware-in-the-loop simulation
//#define LOGGING_ENABLED       DISABLED            // disable logging to save code space
//#define DMP_ENABLED           ENABLED             // use MPU6000's DMP instead of DCM for attitude estimation
//#define SECONDARY_DMP_ENABLED ENABLED             // allows running DMP in parallel with DCM for testing purposes

#define FRAME_CONFIG HEXA_FRAME
/*
 *  options:
 *  QUAD_FRAME
 *  TRI_FRAME
 *  HEXA_FRAME
 *  Y6_FRAME
 *  OCTA_FRAME
 *  OCTA_QUAD_FRAME
 *  HELI_FRAME
 */

// User Hooks : For User Developed code that you wish to run
// Put your variable definitions into the UserVariables.h file (or another file name and then change the #define below).
//#define USERHOOK_VARIABLES "UserVariables.h"
// Put your custom code into the UserCode.pde with function names matching those listed below and ensure the appropriate #define below is uncommented below
#define USERHOOK_INIT userhook_init();                      // for code to be run once at startup
//#define USERHOOK_FASTLOOP userhook_FastLoop();            // for code to be run at 100hz
#define USERHOOK_50HZLOOP userhook_50Hz();                  // for code to be run at 50hz
//#define USERHOOK_MEDIUMLOOP userhook_MediumLoop();        // for code to be run at 10hz
//#define USERHOOK_SLOWLOOP userhook_SlowLoop();            // for code to be run at 3.3hz
//#define USERHOOK_SUPERSLOWLOOP userhook_SuperSlowLoop();  // for code to be run at 1hz

//
//	HoTT definitions
//
#define HOTT_TELEMETRY
#define HOTT_TELEMETRY_SERIAL_PORT	2
#define HOTT_SIM_GPS_SENSOR
#define HOTT_SIM_EAM_SENSOR
#define HOTT_SIM_VARIO_SENSOR
//#define HOTT_SIM_GAM_SENSOR
// #define HOTT_SIM_TEXTMODE
//Textmode address to simulate
// #define HOTT_SIM_TEXTMODE_ADDRESS	HOTT_TELEMETRY_GPS_SENSOR_ID
//#define CONFIG_SONAR_SOURCE_ANALOG_PIN 0

