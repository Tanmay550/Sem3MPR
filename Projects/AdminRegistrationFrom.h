//---------------------------------------------------------------------------

#ifndef AdminRegistrationFromH
#define AdminRegistrationFromH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Colors.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TAdminRegistrationForm : public TForm
{
__published:	// IDE-managed Components
	TColorBox *ColorBox1;
	TLabel *Label1;
	TEdit *NameEditAdminR;
	TLabel *Label2;
	TEdit *IdEditAdminR;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *UsernameEditAdminR;
	TLabel *Label5;
	TEdit *PasswordEditAdminR;
	TLabel *Label6;
	TEdit *EmailEditAdminR;
	TSpeedButton *RegisterButton;
private:	// User declarations
public:		// User declarations
	__fastcall TAdminRegistrationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdminRegistrationForm *AdminRegistrationForm;
//---------------------------------------------------------------------------
#endif
