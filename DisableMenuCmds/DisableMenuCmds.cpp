// DisableMenuCmds.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "DisableMenuCmds.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: If this DLL is dynamically linked against the MFC DLLs,
//		any functions exported from this DLL which call into
//		MFC must have the AFX_MANAGE_STATE macro added at the
//		very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

// CDisableMenuCmdsApp

BEGIN_MESSAGE_MAP(CDisableMenuCmdsApp, CWinApp)
END_MESSAGE_MAP()


// CDisableMenuCmdsApp construction

CDisableMenuCmdsApp::CDisableMenuCmdsApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CDisableMenuCmdsApp object

CDisableMenuCmdsApp theApp;


// CDisableMenuCmdsApp initialization

BOOL CDisableMenuCmdsApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}

//////////////////////////////////////////////////
//  Menu State function
//////////////////////////////////////////////////

// to disable a Menu item's availability
extern "C" int WINAPI MenuCmd_DisableMenuItemState
(
	UINT	uiCmdId,
	ULONG	ulState
)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	OutputDebugStringW(L"MenuCmd_DisableMenuItemState() called...\n");
	return AAMS_GRAYED;
}

//////////////////////////////////////////////////
// Document Menu
//////////////////////////////////////////////////

// to disable a Document Menu item's functionality
// if the menu item state is grayed out, then this actually does not get called...
extern "C" int WINAPI DocCmd_DisableMenuItem
(
	unsigned int	count,
	long*			pProjects,
	long*			pDocuments
)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	OutputDebugStringW(L"DocCmd_DisableMenuItem() called...\n");
	return 0;
}

//////////////////////////////////////////////////
// Send To Menu
//////////////////////////////////////////////////

// to disable a Send To Menu item's functionality
// if the menu item state is grayed out, then this actually does not get called...
extern "C" int WINAPI DocSendToCmd_DisableMenuItem
(
	unsigned int	count,
	long*			pProjects,
	long*			pDocuments
)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	OutputDebugStringW(L"DocSendToCmd_DisableMenuItem() called...\n");
	return 0;
}

//////////////////////////////////////////////////
// Project (folder) Menu
//////////////////////////////////////////////////

// to disable a Project (folder) Menu item's functionality
// if the menu item state is grayed out, then this actually does not get called...
extern "C" int WINAPI PrjCmd_DisableMenuItem
(
	long			project_no
)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	OutputDebugStringW(L"PrjCmd_DisableMenuItem() called...\n");
	return 0;
}

//////////////////////////////////////////////////
// Tools Menu
//////////////////////////////////////////////////

// to disable a Tool Menu item's functionality
// if the menu item state is grayed out, then this actually does not get called...
extern "C" int WINAPI GenToolsCmd_DisableMenuItem
(
	long			project_no
)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	OutputDebugStringW(L"GenToolsCmd_DisableMenuItem() called...\n");
	return 0;
}
