
// 044Dlg.h : ͷ�ļ�
//

#pragma once


// CMy044Dlg �Ի���
class CMy044Dlg : public CDialogEx
{
// ����
public:
	CMy044Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY044_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()


	CAnimateCtrl  m_animate;
public:
	afx_msg void OnAcnStartAnimate1();
	afx_msg void OnAcnStopAnimate1();
};