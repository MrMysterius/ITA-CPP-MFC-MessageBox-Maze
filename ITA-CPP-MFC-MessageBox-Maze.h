
// ITA-CPP-MFC-MessageBox-Maze.h: Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "'pch.h' vor dieser Datei für PCH einschließen"
#endif

#include "resource.h"		// Hauptsymbole


// CITACPPMFCMessageBoxMazeApp:
// Siehe ITA-CPP-MFC-MessageBox-Maze.cpp für die Implementierung dieser Klasse
//

class CITACPPMFCMessageBoxMazeApp : public CWinApp
{
public:
	CITACPPMFCMessageBoxMazeApp();

// Überschreibungen
public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CITACPPMFCMessageBoxMazeApp theApp;
