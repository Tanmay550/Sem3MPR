//---------------------------------------------------------------------------

#ifndef HomePageH
#define HomePageH
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
class TDataPage : public TForm
{
__published:	// IDE-managed Components
	TColorBox *ColorBox2;
	TLabel *Label1;
	TSpeedButton *AddEmployeeButton;
	TSpeedButton *ViewDataButton;
	TColorBox *ColorBox1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TColorBox *ColorBox3;
	TEdit *DataBox;
	TSpeedButton *LogoutButton;
private:	// User declarations
public:		// User declarations
	__fastcall TDataPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataPage *DataPage;
//---------------------------------------------------------------------------
#endif
