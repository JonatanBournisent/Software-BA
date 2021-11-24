//---------------------------------------------------------------------------

#include <vcl.h>
#include <IniFiles.hpp>
#include <DateUtils.hpp>
#pragma hdrstop

#include "uCumples.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfCumples *fCumples;
//---------------------------------------------------------------------------
__fastcall TfCumples::TfCumples(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfCumples::FormCreate(TObject *Sender)
{
   IBDatabase1->Params->Add("user_name=SYSDBA");
   IBDatabase1->Params->Add("password=@.dbad.@");
   IBDatabase1->Params->Add("sql_role_name=3");
}
//---------------------------------------------------------------------------
void __fastcall TfCumples::FormShow(TObject *Sender)
{
   TIniFile *Config;
   AnsiString Dir = GetCurrentDir()+"//Config.ini";
   Config = new TIniFile(Dir);

   AnsiString path;
   path = Config->ReadString("Database","Ubicacion","");

   delete Config;

   IBDatabase1->DatabaseName = path;  //este dato puede cambiar y por eso lo actualizo cada vez que abro el formulario

   try
   {
      IBDatabase1->Connected = true;
      IBTransaction1->Active = true;

      IBQuery1->SQL->Clear();
      IBQuery1->SQL->Add("SELECT nombre, apellido, email, tel_fijo, tel_movil, fecha_nacimiento FROM PERSONAS");
      IBQuery1->SQL->Add("WHERE ((EXTRACT(DAY FROM fecha_nacimiento) = :v1 AND EXTRACT(MONTH FROM fecha_nacimiento) = :v2) OR");
      IBQuery1->SQL->Add("(EXTRACT(DAY FROM fecha_nacimiento) = :v3 AND EXTRACT(MONTH FROM fecha_nacimiento) = :v4) OR");
      IBQuery1->SQL->Add("(EXTRACT(DAY FROM fecha_nacimiento) = :v5 AND EXTRACT(MONTH FROM fecha_nacimiento) = :v6)) ORDER BY fecha_nacimiento");

      IBQuery1->ParamByName("v1")->AsInteger = DayOf(Now());
      IBQuery1->ParamByName("v2")->AsInteger = MonthOf(Now());
      IBQuery1->ParamByName("v3")->AsInteger = DayOf(IncDay(Now(),1));
      IBQuery1->ParamByName("v4")->AsInteger = MonthOf(IncDay(Now(),1));
      IBQuery1->ParamByName("v5")->AsInteger = DayOf(IncDay(Now(),2));
      IBQuery1->ParamByName("v6")->AsInteger = MonthOf(IncDay(Now(),2));
      IBQuery1->Open();
   }
   catch (...)
   {
      AnsiString msg = "Error al intentar acceder a la base de datos";
      msg = msg + ", verifique que la ruta de acceso sea correcta";
      ShowMessage(msg);
      Close();
   }
}
//---------------------------------------------------------------------------
void __fastcall TfCumples::IBQuery1BeforeOpen(TDataSet *DataSet)
{
   IBQuery1fecha_nacimiento->DisplayFormat = "dd 'de' mmmm";        
}
//---------------------------------------------------------------------------
void __fastcall TfCumples::BitBtn1Click(TObject *Sender)
{
   Close();        
}
//---------------------------------------------------------------------------
