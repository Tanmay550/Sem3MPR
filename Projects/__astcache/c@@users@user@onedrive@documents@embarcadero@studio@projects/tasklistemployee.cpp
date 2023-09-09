//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "TaskListEmployee.h"
#include "LoginForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TTaskListEmployeeForm *TaskListEmployeeForm;
//---------------------------------------------------------------------------
__fastcall TTaskListEmployeeForm::TTaskListEmployeeForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTaskListEmployeeForm::LogoutButtonClick(TObject *Sender)
{
   this->Hide();

   Login->Show();

}
//---------------------------------------------------------------------------

