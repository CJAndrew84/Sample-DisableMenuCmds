// DisableMenuCmds.h : main header file for the DisableMenuCmds DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CDisableMenuCmdsApp
// See DisableMenuCmds.cpp for the implementation of this class
//

class CDisableMenuCmdsApp : public CWinApp
{
public:
	CDisableMenuCmdsApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

// ProjectWise header files
#include "AAAPI.H"
#include "AAWINAPI.H"
#include "AADMSAPI.H"
#include "AAWINDMS.H"
