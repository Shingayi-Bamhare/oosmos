//
// OOSMOS matrix Class
//
// Copyright (C) 2014-2020  OOSMOS, LLC
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

#ifndef matrix_h
#define matrix_h

#include "pin.h"
#include "sw.h"

typedef struct matrixTag matrix;

extern matrix * matrixNew(int Rows, int Columns, ...);
extern pin * matrixGetColumnPin(const matrix * pMatrix, int Column);
extern void matrixAssignSwitch(matrix * pMatrix, sw * pSwitch, int Row, int Column);

#endif
