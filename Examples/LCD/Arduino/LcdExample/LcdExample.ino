//
// OOSMOS - The Object-Oriented State Machine Operating System
//
// Copyright (C) 2014-2019  OOSMOS, LLC
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2 of the License ("GPLv2").
//
// This software may be used without the GPLv2 restrictions by entering
// into a commercial license agreement with OOSMOS, LLC.
// See <https://www.oosmos.com/licensing/>.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#include "oosmos.h"
#include "pin.h"
#include "lcdtest.h"

extern void setup()
{
  pin * pRS     = pinNew(2, pinOut, pinActiveHigh);
  pin * pE      = pinNew(3, pinOut, pinActiveHigh);
  pin * pData4  = pinNew(4, pinOut, pinActiveHigh);
  pin * pData5  = pinNew(5, pinOut, pinActiveHigh);
  pin * pData6  = pinNew(6, pinOut, pinActiveHigh);
  pin * pData7  = pinNew(7, pinOut, pinActiveHigh);

  lcdtestNew(pRS, pE, pData4, pData5, pData6, pData7);
}

extern void loop()
{
  oosmos_RunStateMachines();
}
