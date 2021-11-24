//---------------------------------------------------------------------------

#ifndef uModificarH
#define uModificarH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "JvDateTimePicker.hpp"
#include "JvDBDateTimePicker.hpp"
#include "JvDBImage.hpp"
#include "JvDBLookup.hpp"
#include "JvExComCtrls.hpp"
#include "JvExControls.hpp"
#include <ComCtrls.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <IBDatabase.hpp>
#include <Mask.hpp>
#include <IBCustomDataSet.hpp>
#include <IBQuery.hpp>
#include <IBTable.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfModificar : public TForm
{
__published:	// IDE-managed Components
        TBevel *Bevel1;
        TGroupBox *GroupBox1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TCheckBox *CheckBox1;
        TDBEdit *nombre;
        TDBEdit *apellido;
        TJvDBDateTimePicker *fecha_nacimiento;
        TDBEdit *tel_fijo;
        TDBEdit *tel_movil;
        TDBEdit *email;
        TDBEdit *direccion;
        TDBEdit *ciudad;
        TDBEdit *provincia;
        TDBEdit *pais;
        TDBEdit *ocupacion;
        TDBComboBox *estado_civil;
        TGroupBox *GroupBox2;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TLabel *Label19;
        TLabel *Label20;
        TLabel *Label21;
        TLabel *Label22;
        TLabel *Label23;
        TLabel *Label24;
        TLabel *Label25;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TCheckBox *CheckBox4;
        TCheckBox *CheckBox5;
        TCheckBox *CheckBox6;
        TCheckBox *CheckBox7;
        TCheckBox *CheckBox8;
        TCheckBox *CheckBox9;
        TCheckBox *CheckBox10;
        TDBMemo *notas;
        TDBEdit *nro_miembro;
        TJvDBDateTimePicker *recepcion;
        TJvDBDateTimePicker *bautismo;
        TJvDBDateTimePicker *serie_1;
        TJvDBDateTimePicker *serie_2;
        TJvDBDateTimePicker *serie_3;
        TJvDBDateTimePicker *serie_4;
        TJvDBDateTimePicker *serie_5;
        TJvDBDateTimePicker *secam_ministerial;
        TJvDBDateTimePicker *secam_fiet;
        TJvDBLookupCombo *ministerio;
        TJvDBLookupCombo *gp;
        TGroupBox *GroupBox3;
        TJvDBImage *foto;
        TButton *Button1;
        TButton *Button4;
        TOpenDialog *OpenDialog1;
        TIBTransaction *IBTransaction1;
        TIBDatabase *IBDatabase1;
        TIBTable *IBTable1;
        TIBTable *IBTable2;
        TIBTable *IBTable3;
        TDataSource *DataSource1;
        TDataSource *DataSource2;
        TDataSource *DataSource3;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TIBQuery *IBQuery1;
        TIBQuery *IBQuery2;
        TButton *Button2;
        TButton *Button3;
        TLabel *Label26;
        TDBComboBox *areas;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormResize(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall CheckBox3Click(TObject *Sender);
        void __fastcall CheckBox4Click(TObject *Sender);
        void __fastcall CheckBox5Click(TObject *Sender);
        void __fastcall CheckBox6Click(TObject *Sender);
        void __fastcall CheckBox7Click(TObject *Sender);
        void __fastcall CheckBox8Click(TObject *Sender);
        void __fastcall CheckBox9Click(TObject *Sender);
        void __fastcall CheckBox10Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfModificar(TComponent* Owner);
        int id;
};
//---------------------------------------------------------------------------
extern PACKAGE TfModificar *fModificar;
//---------------------------------------------------------------------------
#endif
