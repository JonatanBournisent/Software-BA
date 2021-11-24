//---------------------------------------------------------------------------

#include <vcl.h>
#include <IniFiles.hpp>
#pragma hdrstop

#include "uAdminGP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "JvCombobox"
#pragma link "JvDBCombobox"
#pragma link "JvExStdCtrls"
#pragma link "JvDBLookup"
#pragma link "JvExControls"
#pragma resource "*.dfm"
TfAdminGP *fAdminGP;
//---------------------------------------------------------------------------
__fastcall TfAdminGP::TfAdminGP(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfAdminGP::FormCreate(TObject *Sender)
{
   IBDatabase1->Params->Add("user_name=SYSDBA");
   IBDatabase1->Params->Add("password=@.dbad.@");
   IBDatabase1->Params->Add("sql_role_name=3");
}
//---------------------------------------------------------------------------
void __fastcall TfAdminGP::FormShow(TObject *Sender)
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
      IBQuery2->Close();
      IBQuery2->SQL->Clear();
      IBQuery2->SQL->Add("SELECT * FROM GRUPOS_PEQUENIOS ORDER BY nombre");
      IBQuery2->Open();

      IBQuery3->Close();
      IBQuery3->SQL->Clear();
      IBQuery3->SQL->Add("SELECT * FROM MINISTERIOS ORDER BY ministerio");
      IBQuery3->Open();
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


void __fastcall TfAdminGP::FormClose(TObject *Sender, TCloseAction &Action)
{
   IBQuery2->Close();
   IBQuery3->Close();
   IBDatabase1->Connected = false;
   IBTransaction1->Active = false;

   Edit1->Text = "";
   Edit2->Text = "";
   Edit3->Text = "";
   Edit4->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TfAdminGP::BitBtn1Click(TObject *Sender)
{
   if(Edit1->Text != "")
   {

      if(MessageDlg("Agregar \"" + Edit1->Text + "\" a la lista de grupos pequeños?", mtConfirmation, TMsgDlgButtons() << mbNo << mbYes, 0) == mrYes)
      {
         IBQuery2->Close();
         IBQuery1->SQL->Clear();
         IBQuery1->SQL->Add("INSERT INTO GRUPOS_PEQUENIOS (nombre) VALUES(:v1)");
         IBQuery1->ParamByName("v1")->AsString = Edit1->Text;
         IBQuery1->ExecSQL();
         Edit1->Text = "";
         IBQuery2->Open();
      }
   }        
}
//---------------------------------------------------------------------------

void __fastcall TfAdminGP::BitBtn2Click(TObject *Sender)
{
   if(Edit3->Text != "")
   {
      if(MessageDlg("Agregar \"" + Edit3->Text + "\" a la lista de ministerios?", mtConfirmation, TMsgDlgButtons() << mbNo << mbYes, 0) == mrYes)
      {
         IBQuery3->Close();
         IBQuery1->SQL->Clear();
         IBQuery1->SQL->Add("INSERT INTO MINISTERIOS (ministerio) VALUES(:v1)");
         IBQuery1->ParamByName("v1")->AsString = Edit3->Text;
         IBQuery1->ExecSQL();
         Edit3->Text = "";
         IBQuery3->Open();
      }
   }        
}
//---------------------------------------------------------------------------

void __fastcall TfAdminGP::BitBtn3Click(TObject *Sender)
{
    if((Edit2->Text != "")&&(DBComboBox1->Text != "")&&(DBComboBox1->Text != Edit2->Text))
   {
      AnsiString s = DBComboBox1->Text;
      if(MessageDlg("Cambiar el nombre de GP \"" + s + "\" por el nombre \"" + Edit2->Text + "\"?", mtConfirmation, TMsgDlgButtons() << mbNo << mbYes, 0) == mrYes)
      {
         IBQuery2->Close();

         IBQuery1->SQL->Clear();
         IBQuery1->SQL->Add("UPDATE GRUPOS_PEQUENIOS SET nombre = :v1 WHERE nombre = :v2");
         IBQuery1->ParamByName("v1")->AsString = Edit2->Text;
         IBQuery1->ParamByName("v2")->AsString = s;
         IBQuery1->ExecSQL();

         IBQuery1->SQL->Clear();
         IBQuery1->SQL->Add("UPDATE PERSONAS SET gp = :v1 WHERE gp = :v2");
         IBQuery1->ParamByName("v1")->AsString = Edit2->Text;
         IBQuery1->ParamByName("v2")->AsString = s;
         IBQuery1->ExecSQL();

         Edit2->Text = "";

         IBQuery2->Open();
      }

   }
}
//---------------------------------------------------------------------------

void __fastcall TfAdminGP::BitBtn4Click(TObject *Sender)
{
   if((Edit4->Text != "")&&(DBComboBox4->Text != "")&&(DBComboBox4->Text != Edit4->Text))
   {
      AnsiString s = DBComboBox4->Text;
      if(MessageDlg("Cambiar el nombre del ministerio \"" + s + "\" por el nombre \"" + Edit4->Text + "\"?", mtConfirmation, TMsgDlgButtons() << mbNo << mbYes, 0) == mrYes)
      {
         IBQuery3->Close();

         IBQuery1->SQL->Clear();
         IBQuery1->SQL->Add("UPDATE MINISTERIOS SET ministerio = :v1 WHERE ministerio = :v2");
         IBQuery1->ParamByName("v1")->AsString = Edit4->Text;
         IBQuery1->ParamByName("v2")->AsString = s;
         IBQuery1->ExecSQL();

         IBQuery1->SQL->Clear();
         IBQuery1->SQL->Add("UPDATE PERSONAS SET ministerio = :v1 WHERE ministerio = :v2");
         IBQuery1->ParamByName("v1")->AsString = Edit4->Text;
         IBQuery1->ParamByName("v2")->AsString = s;
         IBQuery1->ExecSQL();

         Edit4->Text = "";

         IBQuery3->Open();
      }

   }        
}
//---------------------------------------------------------------------------

void __fastcall TfAdminGP::BitBtn5Click(TObject *Sender)
{
   if(DBComboBox2->Text != "")
   {
      AnsiString s = DBComboBox2->Text;
      if(MessageDlg("Eliminar el GP \"" + s + "\"?", mtConfirmation, TMsgDlgButtons() << mbNo << mbYes, 0) == mrYes)
      {
         IBQuery2->Close();

         IBQuery1->SQL->Clear();
         IBQuery1->SQL->Add("DELETE FROM GRUPOS_PEQUENIOS WHERE (nombre = :v1)");
         IBQuery1->ParamByName("v1")->AsString = s;
         IBQuery1->ExecSQL();

         IBQuery1->SQL->Clear();
         IBQuery1->SQL->Add("UPDATE PERSONAS SET gp = null WHERE (gp = :v1)");
         IBQuery1->ParamByName("v1")->AsString = s;
         IBQuery1->ExecSQL();

         IBQuery2->Open();
      }
   }        
}
//---------------------------------------------------------------------------


void __fastcall TfAdminGP::BitBtn6Click(TObject *Sender)
{
   if(DBComboBox3->Text != "")
   {
      AnsiString s = DBComboBox3->Text;
      if(MessageDlg("Eliminar el ministerio \"" + s + "\"?", mtConfirmation, TMsgDlgButtons() << mbNo << mbYes, 0) == mrYes)
      {
         IBQuery3->Close();

         IBQuery1->SQL->Clear();
         IBQuery1->SQL->Add("DELETE FROM MINISTERIOS WHERE (ministerio = :v1)");
         IBQuery1->ParamByName("v1")->AsString = s;
         IBQuery1->ExecSQL();

         IBQuery1->SQL->Clear();
         IBQuery1->SQL->Add("UPDATE PERSONAS SET ministerio = null WHERE (ministerio = :v1)");
         IBQuery1->ParamByName("v1")->AsString = s;
         IBQuery1->ExecSQL();

         IBQuery3->Open();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TfAdminGP::BitBtn7Click(TObject *Sender)
{
   Close();        
}
//---------------------------------------------------------------------------

