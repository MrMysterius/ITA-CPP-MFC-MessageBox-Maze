
// ITA-CPP-MFC-MessageBox-MazeDlg.h: Headerdatei
//

#pragma once


// CITACPPMFCMessageBoxMazeDlg-Dialogfeld
class CITACPPMFCMessageBoxMazeDlg : public CDialogEx
{
// Konstruktion
public:
	CITACPPMFCMessageBoxMazeDlg(CWnd* pParent = nullptr);	// Standardkonstruktor

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ITACPPMFCMESSAGEBOXMAZE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung


// Implementierung
protected:
	HICON m_hIcon;

	// Generierte Funktionen für die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedStart();
};
