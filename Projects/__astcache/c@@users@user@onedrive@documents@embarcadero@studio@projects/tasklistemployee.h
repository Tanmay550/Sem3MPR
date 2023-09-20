//---------------------------------------------------------------------------

#ifndef TaskListEmployeeH
#define TaskListEmployeeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Colors.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TTaskList : public TForm
{
__published:	// IDE-managed Components
	TColorBox *ColorBox1;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TLabel *Label3;
	TEdit *Edit2;
	TSpeedButton *AddTaskButton;
	TSpeedButton *LogoutButton;
	void __fastcall LogoutButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTaskList(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTaskList *TaskList;
//---------------------------------------------------------------------------
#endif
