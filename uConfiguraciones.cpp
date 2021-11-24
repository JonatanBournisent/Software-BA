//---------------------------------------------------------------------------

#include <vcl.h>
#include <IniFiles.hpp>
#pragma hdrstop

#include "uConfiguraciones.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfConfiguraciones *fConfiguraciones;
//---------------------------------------------------------------------------
__fastcall TfConfiguraciones::TfConfiguraciones(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfConfiguraciones::FormShow(TObject *Sender)
{
   TIniFile *Config;
   AnsiString Dir = GetCurrentDir()+"//Config.ini";
   Config = new TIniFile(Dir);

   AnsiString path = Config->ReadString("Database","Ubicacion","");
   delete Config;

   AnsiString ubicacion;

   Edit2->Text = path.SubString(1,path.Pos(":")-1);
   ubicacion = path.SubString(path.Pos(":") + 1,path.Length());
   Edit1->Text = ubicacion;

   Edit2->SetFocus();


}
//---------------------------------------------------------------------------

void __fastcall TfConfiguraciones::BitBtn2Click(TObject *Sender)
{
   TIniFile *Config;
   AnsiString Dir = GetCurrentDir()+"//Config.ini";
   Config = new TIniFile(Dir);
   AnsiString nombre = Edit2->Text + ":" + Edit1->Text;

   Config->WriteString("Database","Ubicacion",nombre);

   delete Config;

   Close();       
}
//---------------------------------------------------------------------------

void __fastcall TfConfiguraciones::BitBtn1Click(TObject *Sender)
{
   Close();        
}
//---------------------------------------------------------------------------


