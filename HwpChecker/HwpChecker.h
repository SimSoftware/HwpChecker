
// HwpChecker.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CHwpCheckerApp:
// �� Ŭ������ ������ ���ؼ��� HwpChecker.cpp�� �����Ͻʽÿ�.
//

class CHwpCheckerApp : public CWinApp
{
public:
	CHwpCheckerApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CHwpCheckerApp theApp;
