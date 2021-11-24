//---------------------------------------------------------------------------

#ifndef uAdminGPH
#define uAdminGPH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <IBDatabase.hpp>
#include <IBCustomDataSet.hpp>
#include <IBQuery.hpp>
#include <DBCtrls.hpp>
#include <IBTable.hpp>
#include "JvCombobox.hpp"
#include "JvDBCombobox.hpp"
#include "JvExStdCtrls.hpp"
#include "JvDBLookup.hpp"
#include "JvExControls.hpp"
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfAdminGP : public TForm
{
__published:	// IDE-managed Components
        TIBTransaction *IBTransaction1;
        TIBDatabase *IBDatabase1;
        TIBQuery *IBQuery1;
        TDataSource *DataSource1;
        TDataSource *DataSource2;
        TGroupBox *GroupBox1;
        TGroupBox *GroupBox2;
        TEdit *Edit1;
        TGroupBox *GroupBox3;
        TEdit *Edit2;
        TLabel *Label1;
        TLabel *Label2;
        TGroupBox *GroupBox4;
        TGroupBox *GroupBox5;
        TGroupBox *GroupBox6;
        TEdit *Edit3;
        TGroupBox *GroupBox7;
        TJvDBLookupCombo *DBComboBox1;
        TJvDBLookupCombo *DBComboBox3;
        TJvDBLookupCombo *DBComboBox2;
        TGroupBox *GroupBox8;
        TJvDBLookupCombo *DBComboBox4;
        TEdit *Edit4;
        TLabel *Label3;
        TLabel *Label4;
        TBevel *Bevel1;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TBitBtn *BitBtn4;
        TBitBtn *BitBtn5;
        TBitBtn *BitBtn6;
        TBitBtn *BitBtn7;
        TIBQuery *IBQuery2;
        TIBQuery *IBQuery3;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall BitBtn5Click(TObject *Sender);
        void __fastcall BitBtn6Click(TObject *Sender);
        void __fastcall BitBtn7Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfAdminGP(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfAdminGP *fAdminGP;
//---------------------------------------------------------------------------
#endif
