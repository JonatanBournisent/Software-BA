//---------------------------------------------------------------------------

#ifndef uCumplesH
#define uCumplesH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <IBCustomDataSet.hpp>
#include <IBDatabase.hpp>
#include <IBQuery.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfCumples : public TForm
{
__published:	// IDE-managed Components
        TIBDatabase *IBDatabase1;
        TIBTransaction *IBTransaction1;
        TIBQuery *IBQuery1;
        TDataSource *DataSource1;
        TDBGrid *DBGrid1;
        TDateTimeField *IBQuery1fecha_nacimiento;
        TStringField *IBQuery1nombre;
        TStringField *IBQuery1apellido;
        TStringField *IBQuery1email;
        TStringField *IBQuery1tel_fijo;
        TStringField *IBQuery1tel_movil;
        TBevel *Bevel1;
        TBitBtn *BitBtn1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall IBQuery1BeforeOpen(TDataSet *DataSet);
        void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfCumples(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfCumples *fCumples;
//---------------------------------------------------------------------------
#endif
