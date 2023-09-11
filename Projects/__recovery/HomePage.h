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
#include <FMX.Objects.hpp>
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
	TEdit *DataBox;
	TSpeedButton *LogoutButton;
	TImage *Image1;
	void __fastcall LogoutButtonClick(TObject *Sender);
	void __fastcall AddEmployeeButtonClick(TObject *Sender);
	void __fastcall Label4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDataPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataPage *DataPage;
//---------------------------------------------------------------------------
#endif
