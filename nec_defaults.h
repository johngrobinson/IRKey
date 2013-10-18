#ifndef NEC_CONFIG_H
#define NEC_CONFIG_H

#include <kbrd_codes.h>

// _AF_ means buttons on the Adafruit remote
// _SDR_ means the remote that came with Frank's TV tuner
// _APPLE_ means the official "Apple Remote Control"

// map IR remote button to emulated keyboard keycode
// on the left is the "modifier
#define BUT_AF_VOL_DOWN			KEYCODE_MINUS
#define BUT_AF_PLAYPAUSE		KEYCODE_SPACE
#define BUT_AF_VOL_UP		KEYCODE_EQUAL
#define BUT_AF_SETUP		KEYCODE_ESC
#define BUT_AF_UP			KEYCODE_ARROW_UP
#define BUT_AF_STOPMODE		KEYCODE_X
#define BUT_AF_LEFT			KEYCODE_ARROW_LEFT
#define BUT_AF_ENTERSAVE	KEYCODE_ENTER
#define BUT_AF_RIGHT		KEYCODE_ARROW_RIGHT
#define BUT_AF_010			KEYCODE_0
#define BUT_AF_DOWN			KEYCODE_ARROW_DOWN
#define BUT_AF_RETURN		KEYCODE_BACKSPACE
#define BUT_AF_1			KEYCODE_1
#define BUT_AF_2			KEYCODE_2
#define BUT_AF_3			KEYCODE_3
#define BUT_AF_4			KEYCODE_4
#define BUT_AF_5			KEYCODE_5
#define BUT_AF_6			KEYCODE_6
#define BUT_AF_7			KEYCODE_7
#define BUT_AF_8			KEYCODE_8
#define BUT_AF_9			KEYCODE_9

#define BUT_SDR_MUTE		KEYCODE_MUTE
#define BUT_SDR_EPG			KEYCODE_APP
#define BUT_SDR_LIVETV		KEYCODE_F1
#define BUT_SDR_POWER		KEYCODE_SYS_SLEEP
#define BUT_SDR_1			KEYCODE_1
#define BUT_SDR_2			KEYCODE_2
#define BUT_SDR_3			KEYCODE_3
#define BUT_SDR_STEREO		KEYCODE_F2
#define BUT_SDR_4			KEYCODE_4
#define BUT_SDR_5			KEYCODE_5
#define BUT_SDR_6			KEYCODE_6
#define BUT_SDR_SNAPSHOT	KEYCODE_F3
#define BUT_SDR_7			KEYCODE_7
#define BUT_SDR_8			KEYCODE_8
#define BUT_SDR_9			KEYCODE_9
#define BUT_SDR_ZOOM		KEYCODE_F4
#define BUT_SDR_RECALL		KEYCODE_BACKSPACE
#define BUT_SDR_0			KEYCODE_0
#define BUT_SDR_CHAN_UP		KEYCODE_ARROW_UP
#define BUT_SDR_VOL_UP		KEYCODE_VOL_UP
#define BUT_SDR_TELETEXT	KEYCODE_F5
#define BUT_SDR_REC			KEYCODE_F6
#define BUT_SDR_CHAN_DOWN	KEYCODE_ARROW_DOWN
#define BUT_SDR_VOL_DOWN	KEYCODE_VOL_DOWN
#define BUT_SDR_STOP		KEYCODE_STOP
#define BUT_SDR_PAUSE		KEYCODE_PLAYPAUSE
#define BUT_SDR_SOURCE		KEYCODE_ENTER
#define BUT_SDR_FAVORITE	KEYCODE_HOME

#define BUT_APPLE_UP		KEYCODE_EQUAL
#define BUT_APPLE_DOWN		KEYCODE_MINUS
#define BUT_APPLE_LEFT		KEYCODE_ARROW_LEFT
#define BUT_APPLE_RIGHT		KEYCODE_ARROW_RIGHT
#define BUT_APPLE_PLAYPAUSE	KEYCODE_SPACE
#define BUT_APPLE_MENU		KEYCODE_ESC
#define BUT_APPLE_SELECT	KEYCODE_ENTER

#define IR_BUT_PAIRS {				\
0xFF00BF00, BUT_AF_VOL_DOWN,		\
0xFE01BF00, BUT_AF_PLAYPAUSE,		\
0xFD02BF00, BUT_AF_VOL_UP,			\
0xFB04BF00, BUT_AF_SETUP,			\
0xFA05BF00, BUT_AF_UP,				\
0xF906BF00, BUT_AF_STOPMODE,		\
0xF708BF00, BUT_AF_LEFT,			\
0xF609BF00, BUT_AF_ENTERSAVE,		\
0xF50ABF00, BUT_AF_RIGHT,			\
0xF30CBF00, BUT_AF_010,				\
0xF20DBF00, BUT_AF_DOWN,			\
0xF10EBF00, BUT_AF_RETURN,			\
0xEF10BF00, BUT_AF_1,				\
0xEE11BF00, BUT_AF_2,				\
0xED12BF00, BUT_AF_3,				\
0xEB14BF00, BUT_AF_4,				\
0xEA15BF00, BUT_AF_5,				\
0xE916BF00, BUT_AF_6,				\
0xE718BF00, BUT_AF_7,				\
0xE619BF00, BUT_AF_8,				\
0xE51ABF00, BUT_AF_9,				\
0xEC136B86, BUT_SDR_MUTE,			\
0xEE116B86, BUT_SDR_EPG,			\
0xE31C6B86, BUT_SDR_LIVETV,			\
0xED126B86, BUT_SDR_POWER,			\
0xFE016B86, BUT_SDR_1,				\
0xFD026B86, BUT_SDR_2,				\
0xFC036B86, BUT_SDR_3,				\
0xF20D6B86, BUT_SDR_STEREO,			\
0xFB046B86, BUT_SDR_4,				\
0xFA056B86, BUT_SDR_5,				\
0xF9066B86, BUT_SDR_6,				\
0xE6196B86, BUT_SDR_SNAPSHOT,		\
0xF8076B86, BUT_SDR_7,				\
0xF7086B86, BUT_SDR_8,				\
0xF6096B86, BUT_SDR_9,				\
0xEF106B86, BUT_SDR_ZOOM,			\
0xF50A6B86, BUT_SDR_RECALL,			\
0xFF006B86, BUT_SDR_0,				\
0xF40B6B86, BUT_SDR_CHAN_UP,		\
0xF30C6B86, BUT_SDR_VOL_UP,			\
0xE41B6B86, BUT_SDR_TELETEXT,		\
0xE21D6B86, BUT_SDR_REC,			\
0xEA156B86, BUT_SDR_CHAN_DOWN,		\
0xE7186B86, BUT_SDR_VOL_DOWN,		\
0xF10E6B86, BUT_SDR_STOP,			\
0xE11E6B86, BUT_SDR_PAUSE,			\
0xF00F6B86, BUT_SDR_SOURCE,			\
0xE51A6B86, BUT_SDR_FAVORITE,		\
0,0,} // null terminate to signal end of table

#ifdef ENABLE_APPLE_DEFAULTS
#include <apple_codes.c>
#endif

#endif