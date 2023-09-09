﻿//---------------------------------------------------------------------------

#ifndef LoginFormH
#define LoginFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Colors.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TColorBox *ColorBox1;
	TColorBox *ColorBox2;
	TLabel *Label1;
	TLabel *Label2;
	TSpeedButton *LoginButton;
	TEdit *UsernameAdminEdit;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *PasswordEdit;
	TLabel *Label5;
	TLabel *Label6;
	TEdit *EmployeeUsernameEdit;
	TSpeedButton *LoginButton2;
	TSpeedButton *RegisterButton;
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
