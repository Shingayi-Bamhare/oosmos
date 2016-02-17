//
// OOSMOS - oosmos_SyncYield example main program.
//
// Copyright (C) 2014-2016  OOSMOS, LLC
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2 of the License ("GPLv2").
//
// This software may be used without the GPLv2 restrictions by entering
// into a commercial license agreement with OOSMOS, LLC.
// See <http://www.oosmos.com/licensing/>.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#include <stdio.h>
#include "oosmos.h"
#include "syncyieldtest.h"

#define SYNC_OBJECTS 2

extern int main(void)
{
  printf("\nThis test does not end.  Control-C to exit.\n\n");

  syncyieldtestNew("TestA", 3);
  syncyieldtestNew("TestB", 10);

  while (true) {
    oosmos_RunStateMachines();
    oosmos_DelayMS(25);
  }

  return 0;
}
