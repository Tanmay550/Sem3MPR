//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "TaskListEmployee.h"
#include "LoginForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TTaskList *TaskList;
//---------------------------------------------------------------------------
__fastcall TTaskList::TTaskList(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTaskList::LogoutButtonClick(TObject *Sender)
{
   this->Hide();

   Login->Show();

}
//---------------------------------------------------------------------------

