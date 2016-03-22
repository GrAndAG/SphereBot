/*
 * Copyright 2015 by Jin Choi <jsc@alum.mit.edu>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#include "SingleStepper.h"

SingleStepper::SingleStepper(ADAFRUIT_CLASS *sm)
{
  stepper = sm;
  pos = 0;
  targetPos = 0;
}

void SingleStepper::step(uint8_t dir)
{
  stepper->onestep(dir, MICROSTEP);
  if (dir == FORWARD)
    pos++;
  else
    pos--;
}
