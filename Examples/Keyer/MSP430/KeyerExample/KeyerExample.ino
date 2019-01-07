//
// OOSMOS keyer Class
//
// Copyright (C) 2014-2019  OOSMOS, LLC
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2 of the License ("GPLv2").
//
// This software may be used without the GPLv2 restrictions by entering
// into a commercial license agreement with OOSMOS, LLC.
// See <https://oosmos.com/licensing/>.
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
#include "keyer.h"

extern void setup()
{
  pin * pDitPin     = pinNew(P1_2, pinIn,  pinActiveLow);
  pin * pDahPin     = pinNew(P1_3, pinIn,  pinActiveLow);
  pin * pSpeakerPin = pinNew(P1_4, pinOut, pinActiveHigh);

  const int WPM = 15;

  keyerNew(pDahPin, pDitPin, pSpeakerPin, WPM);
}

extern void loop()
{
  oosmos_RunStateMachines();
}
