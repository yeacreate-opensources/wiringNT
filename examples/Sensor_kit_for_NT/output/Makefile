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

SRC	=	buzzer_module.c		\
		relay_module.c		\
		dual_color_blink.c		\
		laser_emit_module.c		\
		led_blink.c				\
		passive_buzzer_module.c





OBJ	=	$(SRC:.c=.o)

BINS	=	$(SRC:.c=)

all:
	$Q cat README.TXT
	$Q echo " $(BINS)" | fmt
	$Q echo ""

really-all:	$(BINS)

buzzer_module:	buzzer_module.o
	$Q echo [link]
	$Q $(CC) -o $@ buzzer_module.o $(LDFLAGS) $(LDLIBS)

dual_color_blink:	dual_color_blink.o
	$Q echo [link]
	$Q $(CC) -o $@ dual_color_blink.o $(LDFLAGS) $(LDLIBS)

laser_emit_module:	laser_emit_module.o
	$Q echo [link]
	$Q $(CC) -o $@ laser_emit_module.o $(LDFLAGS) $(LDLIBS)

led_blink:	led_blink.o
	$Q echo [link]
	$Q $(CC) -o $@ led_blink.o $(LDFLAGS) $(LDLIBS)

passive_buzzer_module:	passive_buzzer_module.o
	$Q echo [link]
	$Q $(CC) -o $@ passive_buzzer_module.o $(LDFLAGS) $(LDLIBS)

relay_module:	relay_module.o
	$Q echo [link]
	$Q $(CC) -o $@ relay_module.o $(LDFLAGS) $(LDLIBS)




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
