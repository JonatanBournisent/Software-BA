//---------------------------------------------------------------------------

#ifndef uAgregar_personaH
#define uAgregar_personaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "JvExControls.hpp"
#include "JvNavigationPane.hpp"
#include "JvPageList.hpp"
#include "JvButton.hpp"
#include "JvComponentBase.hpp"
#include "JvXPCore.hpp"
#include <DB.hpp>
#include <IBCustomDataSet.hpp>
#include <IBDatabase.hpp>
#include <IBTable.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DBCtrls.hpp>
#include "JvDBLookup.hpp"
#include <Mask.hpp>
#include "JvCheckedMaskEdit.hpp"
#include "JvDatePickerEdit.hpp"
#include "JvDBDatePickerEdit.hpp"
#include "JvExMask.hpp"
#include "JvMaskEdit.hpp"
#include "JvToolEdit.hpp"
#include "JvDateTimePicker.hpp"
#include "JvDBDateTimePicker.hpp"
#include "JvExComCtrls.hpp"
#include <ComCtrls.hpp>
#include "JvDBImage.hpp"
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
#include <IBQuery.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfAgregar_persona : public TForm
{
__published:	// IDE-managed Components
        TIBDatabase *IBDatabase1;
        TIBTransaction *IBTransaction1;
        TIBTable *IBTable1;
        TDataSource *DataSource1;
        TDataSource *DataSource2;
        TDataSource *DataSource3;
        TIBQuery *IBQuery1;
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
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TCheckBox *CheckBox4;
        TCheckBox *CheckBox5;
        TCheckBox *CheckBox6;
        TCheckBox *CheckBox7;
        TCheckBox *CheckBox8;
        TCheckBox *CheckBox9;
        TCheckBox *CheckBox10;
        TLabel *Label23;
        TLabel *Label24;
        TLabel *Label25;
        TGroupBox *GroupBox3;
        TJvDBImage *foto;
        TOpenDialog *OpenDialog1;
        TButton *Button4;
        TBevel *Bevel1;
        TBitBtn *BitBtn2;
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
        TDBMemo *notas;
        TButton *Button1;
        TBitBtn *BitBtn1;
        TIBQuery *IBQuery2;
        TIBQuery *IBQuery3;
        TLabel *Label26;
        TDBComboBox *areas;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall CheckBox3Click(TObject *Sender);
        void __fastcall CheckBox4Click(TObject *Sender);
        void __fastcall CheckBox5Click(TObject *Sender);
        void __fastcall CheckBox6Click(TObject *Sender);
        void __fastcall CheckBox7Click(TObject *Sender);
        void __fastcall CheckBox8Click(TObject *Sender);
        void __fastcall CheckBox9Click(TObject *Sender);
        void __fastcall CheckBox10Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfAgregar_persona(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfAgregar_persona *fAgregar_persona;
//---------------------------------------------------------------------------
#endif
