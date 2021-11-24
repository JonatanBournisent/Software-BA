//---------------------------------------------------------------------------

#ifndef uListasH
#define uListasH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <IBDatabase.hpp>
#include <IBCustomDataSet.hpp>
#include <IBQuery.hpp>
#include <IBTable.hpp>
#include "JvDBLookup.hpp"
#include "JvExControls.hpp"
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfListas : public TForm
{
__published:	// IDE-managed Components
        TIBDatabase *IBDatabase1;
        TIBTransaction *IBTransaction1;
        TIBQuery *IBQuery1;
        TDataSource *DataSource1;
        TGroupBox *GroupBox1;
        TIBTable *IBTable1;
        TDataSource *DataSource2;
        TDataSource *DataSource3;
        TIBTable *IBTable2;
        TJvDBLookupCombo *JvDBLookupCombo1;
        TGroupBox *GroupBox2;
        TJvDBLookupCombo *JvDBLookupCombo2;
        TGroupBox *GroupBox3;
        TEdit *Edit1;
        TEdit *Edit2;
        TLabel *Label1;
        TLabel *Label2;
        TGroupBox *GroupBox4;
        TEdit *Edit3;
        TGroupBox *GroupBox5;
        TButton *Button1;
        TButton *Button5;
        TButton *Button6;
        TCheckBox *CheckBox1;
        TBevel *Bevel1;
        TSaveDialog *SaveDialog1;
        TGroupBox *GroupBox6;
        TButton *Button7;
        TButton *Button8;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TBitBtn *BitBtn4;
        TCheckBox *CheckBox2;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TLabel *Label3;
        TGroupBox *GroupBox7;
        TDBGrid *DBGrid1;
        TIBQuery *IBQuery2;
        TGroupBox *GroupBox8;
        TCheckBox *CheckBox3;
        TCheckBox *CheckBox4;
        TCheckBox *CheckBox5;
        TCheckBox *CheckBox6;
        TCheckBox *CheckBox7;
        TCheckBox *CheckBox8;
        TCheckBox *CheckBox9;
        TCheckBox *CheckBox10;
        TCheckBox *CheckBox11;
        TCheckBox *CheckBox12;
        TCheckBox *CheckBox13;
        TCheckBox *CheckBox14;
        TCheckBox *CheckBox15;
        TCheckBox *CheckBox16;
        TCheckBox *CheckBox17;
        TCheckBox *CheckBox18;
        TCheckBox *CheckBox19;
        TCheckBox *CheckBox20;
        TCheckBox *CheckBox21;
        TCheckBox *CheckBox22;
        TCheckBox *CheckBox23;
        TCheckBox *CheckBox24;
        TCheckBox *CheckBox25;
        TCheckBox *CheckBox26;
        TCheckBox *CheckBox27;
        TCheckBox *CheckBox28;
        TCheckBox *CheckBox29;
        TCheckBox *CheckBox30;
        TBitBtn *BitBtn5;
        TGroupBox *GroupBox9;
        TBitBtn *BitBtn6;
        TComboBox *ComboBox1;
        TButton *Button9;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall Edit3Change(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall CheckBox3Click(TObject *Sender);
        void __fastcall CheckBox4Click(TObject *Sender);
        void __fastcall CheckBox5Click(TObject *Sender);
        void __fastcall CheckBox6Click(TObject *Sender);
        void __fastcall CheckBox7Click(TObject *Sender);
        void __fastcall CheckBox8Click(TObject *Sender);
        void __fastcall CheckBox9Click(TObject *Sender);
        void __fastcall CheckBox10Click(TObject *Sender);
        void __fastcall CheckBox11Click(TObject *Sender);
        void __fastcall CheckBox12Click(TObject *Sender);
        void __fastcall CheckBox13Click(TObject *Sender);
        void __fastcall CheckBox14Click(TObject *Sender);
        void __fastcall CheckBox15Click(TObject *Sender);
        void __fastcall CheckBox16Click(TObject *Sender);
        void __fastcall CheckBox17Click(TObject *Sender);
        void __fastcall CheckBox18Click(TObject *Sender);
        void __fastcall CheckBox19Click(TObject *Sender);
        void __fastcall CheckBox20Click(TObject *Sender);
        void __fastcall CheckBox21Click(TObject *Sender);
        void __fastcall CheckBox22Click(TObject *Sender);
        void __fastcall CheckBox23Click(TObject *Sender);
        void __fastcall CheckBox24Click(TObject *Sender);
        void __fastcall CheckBox25Click(TObject *Sender);
        void __fastcall CheckBox26Click(TObject *Sender);
        void __fastcall CheckBox27Click(TObject *Sender);
        void __fastcall CheckBox28Click(TObject *Sender);
        void __fastcall CheckBox29Click(TObject *Sender);
        void __fastcall CheckBox30Click(TObject *Sender);
        void __fastcall BitBtn5Click(TObject *Sender);
        void __fastcall BitBtn6Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfListas(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfListas *fListas;
//---------------------------------------------------------------------------
#endif
