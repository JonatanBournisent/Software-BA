//---------------------------------------------------------------------------

#ifndef uConsultarH
#define uConsultarH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <IBDatabase.hpp>
#include <IBCustomDataSet.hpp>
#include <IBQuery.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include "JvDBImage.hpp"
#include <DBCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include "JvBitBtn.hpp"
#include "JvExButtons.hpp"
//---------------------------------------------------------------------------
class TfConsultar : public TForm
{
__published:	// IDE-managed Components
        TIBDatabase *IBDatabase1;
        TIBTransaction *IBTransaction1;
        TIBQuery *IBQuery1;
        TDataSource *DataSource1;
        TPanel *Panel1;
        TIBQuery *IBQuery2;
        TDataSource *DataSource2;
        TGroupBox *GroupBox1;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TDBText *DBText1;
        TDBText *DBText2;
        TLabel *Label1;
        TDBText *DBText4;
        TDBText *DBText5;
        TDBText *DBText6;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TLabel *Label22;
        TDBText *DBText7;
        TDBText *DBText8;
        TDBText *DBText9;
        TDBText *DBText10;
        TDBText *DBText11;
        TGroupBox *GroupBox2;
        TDBText *DBText13;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TDBText *DBText14;
        TDBText *DBText15;
        TLabel *Label23;
        TLabel *Label24;
        TLabel *Label25;
        TLabel *Label26;
        TLabel *Label27;
        TLabel *Label28;
        TLabel *Label29;
        TLabel *Label30;
        TLabel *Label31;
        TLabel *Label32;
        TLabel *Label33;
        TDBText *DBText12;
        TLabel *Label10;
        TLabel *Label34;
        TJvDBImage *JvDBImage2;
        TGroupBox *GroupBox3;
        TDBMemo *notas;
        TPanel *Panel2;
        TGroupBox *GroupBox4;
        TEdit *Edit1;
        TBevel *Bevel1;
        TButton *Button5;
        TGroupBox *GroupBox5;
        TDBGrid *DBGrid1;
        TJvDBImage *JvDBImage1;
        TBitBtn *Button3;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TBitBtn *BitBtn4;
        TIBQuery *IBQuery3;
        TLabel *Label35;
        TDBText *DBText3;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn3Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfConsultar(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfConsultar *fConsultar;
//---------------------------------------------------------------------------
#endif
