//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "LoginForm.h"
#include "HomePage.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TLogin *Login;
//---------------------------------------------------------------------------
__fastcall TLogin::TLogin(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------



void __fastcall TLogin::LoginButtonAClick(TObject *Sender)
{
   DataPage->Show();


}
//---------------------------------------------------------------------------

