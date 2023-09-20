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
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Comp.UI.hpp>
#include <FireDAC.FMXUI.Wait.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.Phys.SQLite.hpp>
#include <FireDAC.Phys.SQLiteDef.hpp>
#include <FireDAC.Phys.SQLiteWrapper.Stat.hpp>
#include <FireDAC.Stan.ExprFuncs.hpp>
//---------------------------------------------------------------------------
class TAdminRegistrationForm : public TForm
{
__published:	// IDE-managed Components
	TColorBox *ColorBox1;
	TLabel *Label1;
	TEdit *NameEditAdminR;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *UsernameEditAdminR;
	TLabel *Label5;
	TEdit *PasswordEditAdminR;
	TEdit *EmailEditAdminR;
	TSpeedButton *RegisterButton;
	TFDQuery *FDQuery1;
	TLabel *Label4;
	TFDGUIxWaitCursor *FDGUIxWaitCursor1;
private:	// User declarations
public:		// User declarations
	__fastcall TAdminRegistrationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdminRegistrationForm *AdminRegistrationForm;
//---------------------------------------------------------------------------
#endif
