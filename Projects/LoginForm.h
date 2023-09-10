//---------------------------------------------------------------------------

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
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TLogin : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label4;
	TColorBox *ColorBox1;
	TColorBox *ColorBox2;
	TLabel *Label1;
	TEdit *PasswordEdit;
	TLabel *Label5;
	TSpeedButton *RegisterButton;
	TEdit *UsernameAdminEdit;
	TLabel *Label2;
	TSpeedButton *LoginButtonA;
	TLabel *Label3;
	TLabel *Label6;
	TEdit *EmployeeUsernameEdit;
	TSpeedButton *LoginButtonB;
	TImage *Image1;
	TImage *Image2;
	void __fastcall LoginButtonAClick(TObject *Sender);
	void __fastcall RegisterButtonClick(TObject *Sender);
	void __fastcall LoginButtonBClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLogin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLogin *Login;
//---------------------------------------------------------------------------
#endif
