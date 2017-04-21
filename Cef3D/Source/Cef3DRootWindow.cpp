//----------------------------------------------------------------------------
// Cef3D
// Copyright (C) 2017 arkenthera
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// https://github.com/arkenthera/cef3d
// Cef3D.h
// Date: 13.04.2017
//---------------------------------------------------------------------------

#include "Cef3DPCH.h"

namespace Cef3D
{
	scoped_refptr<RootWindow> RootWindow::Create(bool use_views)
	{
		if(use_views)
			return new RootWindowViews();
		else
		{
			//To do
		}
		return 0;
	}
}