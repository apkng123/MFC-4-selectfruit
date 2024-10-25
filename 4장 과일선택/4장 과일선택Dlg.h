
// 4장 과일선택Dlg.h: 헤더 파일
//

#pragma once


// CMy4장과일선택Dlg 대화 상자
class CMy4장과일선택Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMy4장과일선택Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY4__DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox m_listBox;
	afx_msg void OnLbnSelchangeList1();
	CComboBox m_cblistBox;
	afx_msg void OnCbnSelchangeCombo1();
	void UpdateListBox();
	afx_msg void OnBnClickedButtonInsert();
	void ListDelete();
	afx_msg void OnBnClickedButtonDelete();
};
