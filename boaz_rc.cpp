// boaz_rc.cpp : �⺻ ������Ʈ �����Դϴ�.

#include "stdafx.h"
#include "Form1.h"

using namespace boaz_rc;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��Ʈ���� ��������� ���� Windows XP �ð� ȿ���� Ȱ��ȭ�մϴ�.
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �� â�� ����� �����մϴ�.
	Application::Run(gcnew Form1());
	return 0;
}