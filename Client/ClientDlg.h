
// ClientDlg.h : 头文件
//

#pragma once
#include "MySocket.h"
#include "afxwin.h"
#include "zip_helper.h"
#include "Mycryptopp.h"

class MySocket;

// CClientDlg 对话框
class CClientDlg : public CDialogEx
{
// 构造
public:
	MySocket *m_ClientSocket;
	void OnReceive();
	void OnClose();
	void OnConnect(int nErrorCode);
	void SocketReset();
	CClientDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit DomainControl;
	CEdit PortControl;
	CString DomainString;
	int Port;
	afx_msg void OnBnClickedConnect();
	afx_msg void OnBnClickedExit();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
