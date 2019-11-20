#
# Makefile:
#	wiringPi - Wiring Compatable library for the Raspberry Pi
#	https://projects.drogon.net/wiring-pi
#
#	Copyright (c) 2012-2015 Gordon Henderson
#################################################################################
# This file is part of wiringPi:
#	Wiring Compatable library for the Raspberry Pi
#
#    wiringPi is free software: you can redistribute it and/or modify
#    it under the terms of the GNU Lesser General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    wiringPi is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU Lesser General Public License for more details.
#
#    You should have received a copy of the GNU Lesser General Public License
#    along with wiringPi.  If not, see <http://www.gnu.org/licenses/>.
#################################################################################
#
# Software written by YeaCreate Ltd 2019
# All rights reserved
#
#########################################################

ifneq ($V,1)
Q ?= @
endif

#DEBUG	= -g -O0
DEBUG	= -O3
CC	= gcc
INCLUDE	= -I/usr/local/include
CFLAGS	= $(DEBUG) -Wall $(INCLUDE) -Winline -pipe

LDFLAGS	= -L/usr/local/lib
LDLIBS    = -lwiringPi -lwiringPiDev -lpthread -lm

# Should not alter anything below this line
###############################################################################

SRC	=	analog_hall_module.c		\
		analog_temp_module.c		\
		ball_switch_module.c		\
		button_module.c				\
		encoders_module.c			\
		flame_module.c				\
		hall_magnatic_module.c		\
		heart_beat_module.c			\
		light_blocking_module.c		\
		light_cup_module.c			\
		liner_hell_module.c			\
		mini_reed_module.c			\
		photoresistor_module.c		\
		small_sound_module.c		\
		soil_humidity_sensor.c		\
		tap_module.c				\
		tilt_switch_module.c		\
		touch_module.c				\
		tracking_module.c			\
		water_sensor_module.c		\
		wave_distance.c
	




OBJ	=	$(SRC:.c=.o)

BINS	=	$(SRC:.c=)

all:
	$Q cat README.TXT
	$Q echo " $(BINS)" | fmt
	$Q echo ""

really-all:	$(BINS)

analog_hall_module:	analog_hall_module.o
	$Q echo [link]
	$Q $(CC) -o $@ analog_hall_module.o $(LDFLAGS) $(LDLIBS)

analog_temp_module:	analog_temp_module.o
	$Q echo [link]
	$Q $(CC) -o $@ analog_temp_module.o $(LDFLAGS) $(LDLIBS)
	
ball_switch_module:	ball_switch_module.o
	$Q echo [link]
	$Q $(CC) -o $@ ball_switch_module.o $(LDFLAGS) $(LDLIBS)
	
button_module:	button_module.o
	$Q echo [link]
	$Q $(CC) -o $@ button_module.o $(LDFLAGS) $(LDLIBS)

encoders_module:	encoders_module.o
	$Q echo [link]
	$Q $(CC) -o $@ encoders_module.o $(LDFLAGS) $(LDLIBS)

flame_module:	flame_module.o
	$Q echo [link]
	$Q $(CC) -o $@ flame_module.o $(LDFLAGS) $(LDLIBS)

hall_magnatic_module:	hall_magnatic_module.o
	$Q echo [link]
	$Q $(CC) -o $@ hall_magnatic_module.o $(LDFLAGS) $(LDLIBS)

heart_beat_module:	heart_beat_module.o
	$Q echo [link]
	$Q $(CC) -o $@ heart_beat_module.o $(LDFLAGS) $(LDLIBS)

light_blocking_module:	light_blocking_module.o
	$Q echo [link]
	$Q $(CC) -o $@ light_blocking_module.o $(LDFLAGS) $(LDLIBS)

light_cup_module:	light_cup_module.o
	$Q echo [link]
	$Q $(CC) -o $@ light_cup_module.o $(LDFLAGS) $(LDLIBS)	
	
liner_hell_module:	liner_hell_module.o
	$Q echo [link]
	$Q $(CC) -o $@ liner_hell_module.o $(LDFLAGS) $(LDLIBS)	
	
mini_reed_module:	mini_reed_module.o
	$Q echo [link]
	$Q $(CC) -o $@ mini_reed_module.o $(LDFLAGS) $(LDLIBS)

photoresistor_module:	photoresistor_module.o
	$Q echo [link]
	$Q $(CC) -o $@ photoresistor_module.o $(LDFLAGS) $(LDLIBS)
	
small_sound_module:	small_sound_module.o
	$Q echo [link]
	$Q $(CC) -o $@ small_sound_module.o $(LDFLAGS) $(LDLIBS)
	
soil_humidity_sensor:	soil_humidity_sensor.o
	$Q echo [link]
	$Q $(CC) -o $@ soil_humidity_sensor.o $(LDFLAGS) $(LDLIBS)
	
tap_module:	tap_module.o
	$Q echo [link]
	$Q $(CC) -o $@ tap_module.o $(LDFLAGS) $(LDLIBS)	

tilt_switch_module:	tilt_switch_module.o
	$Q echo [link]
	$Q $(CC) -o $@ tilt_switch_module.o $(LDFLAGS) $(LDLIBS)	

touch_module:	touch_module.o
	$Q echo [link]
	$Q $(CC) -o $@ touch_module.o $(LDFLAGS) $(LDLIBS)	
	
	
tracking_module:	tracking_module.o
	$Q echo [link]
	$Q $(CC) -o $@ tracking_module.o $(LDFLAGS) $(LDLIBS)
	
water_sensor_module:	water_sensor_module.o
	$Q echo [link]
	$Q $(CC) -o $@ water_sensor_module.o $(LDFLAGS) $(LDLIBS)	

wave_distance:	wave_distance.o
	$Q echo [link]
	$Q $(CC) -o $@ wave_distance.o $(LDFLAGS) $(LDLIBS)
	
.c.o:
	$Q echo [CC] $<
	$Q $(CC) -c $(CFLAGS) $< -o $@

clean:
	$Q echo "[Clean]"
	$Q rm -f $(OBJ) *~ core tags $(BINS)

################################################


#ir_emission_module:    ir_emission_module.o
#       $Q echo [link]
#       $Q $(CC) -o $@ ir_emission_module.o $(LDFLAGS) $(LDLIBS)


#tags:	$(SRC)
#	$Q echo [ctags]
#	$Q ctags $(SRC)
#
#depend:
#	makedepend -Y $(SRC)
################################################

# DO NOT DELETE
