//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("HomePage.cpp", DataPage);
USEFORM("LoginForm.cpp", Login);
USEFORM("TaskListEmployee.cpp", TaskListEmployeeForm);
USEFORM("AddEmployeeForm.cpp", EmployeeAddForm);
USEFORM("AdminRegistrationFrom.cpp", AdminRegistrationForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TLogin), &Login);
		Application->CreateForm(__classid(TEmployeeAddForm), &EmployeeAddForm);
		Application->CreateForm(__classid(TDataPage), &DataPage);
		Application->CreateForm(__classid(TTaskListEmployeeForm), &TaskListEmployeeForm);
		Application->CreateForm(__classid(TAdminRegistrationForm), &AdminRegistrationForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
