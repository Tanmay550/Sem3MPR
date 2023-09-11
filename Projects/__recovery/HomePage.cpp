//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "HomePage.h"
#include "LoginForm.h"
#include "AddEmployeeForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TDataPage *DataPage;
//---------------------------------------------------------------------------
__fastcall TDataPage::TDataPage(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------






void __fastcall TDataPage::LogoutButtonClick(TObject *Sender)
{
	  Login->Show();
	  this->Hide();

}
//---------------------------------------------------------------------------

void __fastcall TDataPage::AddEmployeeButtonClick(TObject *Sender)
{
	 EmployeeAddForm->Show();

}
//---------------------------------------------------------------------------

void __fastcall TDataPage::Label4Click(TObject *Sender)
{

}
//---------------------------------------------------------------------------

