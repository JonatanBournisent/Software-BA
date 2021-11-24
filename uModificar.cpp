//---------------------------------------------------------------------------

#include <vcl.h>
#include <IniFiles.hpp>
#pragma hdrstop

#include "uModificar.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "JvDateTimePicker"
#pragma link "JvDBDateTimePicker"
#pragma link "JvDBImage"
#pragma link "JvDBLookup"
#pragma link "JvExComCtrls"
#pragma link "JvExControls"
#pragma resource "*.dfm"
TfModificar *fModificar;
//---------------------------------------------------------------------------
__fastcall TfModificar::TfModificar(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::FormCreate(TObject *Sender)
{
   IBDatabase1->Params->Add("user_name=SYSDBA");     //Estos datos son siempre
   IBDatabase1->Params->Add("password=@.dbad.@");   //iguales y en ningun momento
   IBDatabase1->Params->Add("sql_role_name=3");      //se actualizaran. Por eso estan
   IBTable1->TableName = "PERSONAS";                 //en este evento.
   IBTable2->TableName = "GRUPOS_PEQUENIOS";
   IBTable3->TableName = "MINISTERIOS";

   //directorio_programa = GetCurrentDir(); //Porque cuando se ejecuta OpenDialog1, GetCurrentDir() cambia.
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::FormClose(TObject *Sender,
      TCloseAction &Action)
{
   IBTable1->Cancel();
   IBTable1->Active = false;
   IBTable1->Filtered = false;
   IBQuery1->Close();
   IBQuery2->Close();
   IBDatabase1->Connected = false;
   IBTransaction1->Active = false;

   CheckBox1->Checked = false;
   CheckBox2->Checked = false;
   CheckBox3->Checked = false;
   CheckBox4->Checked = false;
   CheckBox5->Checked = false;
   CheckBox6->Checked = false;
   CheckBox7->Checked = false;
   CheckBox8->Checked = false;
   CheckBox9->Checked = false;
   CheckBox10->Checked = false;
   fecha_nacimiento->Enabled = true;
   recepcion->Enabled = true;
   bautismo->Enabled = true;
   serie_1->Enabled = true;
   serie_2->Enabled = true;
   serie_3->Enabled = true;
   serie_4->Enabled = true;
   serie_5->Enabled = true;
   secam_ministerial->Enabled = true;
   secam_fiet->Enabled = true;     
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::FormResize(TObject *Sender)
{
   if(fModificar->Width > 817)
      fModificar->Width = 817;

   if(fModificar->Height > 680)
      fModificar->Height = 680;
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::FormShow(TObject *Sender)
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
      IBTable1->Filter = "id = " + IntToStr(id);
      IBTable1->Filtered = true;
      IBTable1->Active = true;


      IBQuery1->Close();
      IBQuery1->SQL->Clear();
      IBQuery1->SQL->Add("SELECT * FROM GRUPOS_PEQUENIOS ORDER BY nombre");
      IBQuery1->Open();

      IBQuery2->Close();
      IBQuery2->SQL->Clear();
      IBQuery2->SQL->Add("SELECT * FROM MINISTERIOS ORDER BY ministerio");
      IBQuery2->Open();

      if(IBTable1->FieldByName("fecha_nacimiento")->AsString == "")
      {
         CheckBox1->Checked = true;
         fecha_nacimiento->Enabled = false;
      }

      if(IBTable1->FieldByName("recepcion")->AsString == "")
      {
         CheckBox2->Checked = true;
         recepcion->Enabled = false;
      }

      if(IBTable1->FieldByName("bautismo")->AsString == "")
      {
         CheckBox3->Checked = true;
         bautismo->Enabled = false;
      }

      if(IBTable1->FieldByName("serie_1")->AsString == "")
      {
         CheckBox4->Checked = true;
         serie_1->Enabled = false;
      }

      if(IBTable1->FieldByName("serie_2")->AsString == "")
      {
         CheckBox5->Checked = true;
         serie_2->Enabled = false;
      }

      if(IBTable1->FieldByName("serie_3")->AsString == "")
      {
         CheckBox6->Checked = true;
         serie_3->Enabled = false;
      }

      if(IBTable1->FieldByName("serie_4")->AsString == "")
      {
         CheckBox7->Checked = true;
         serie_4->Enabled = false;
      }

      if(IBTable1->FieldByName("serie_5")->AsString == "")
      {
         CheckBox8->Checked = true;
         serie_5->Enabled = false;
      }

      if(IBTable1->FieldByName("secam_ministerial")->AsString == "")
      {
         CheckBox9->Checked = true;
         secam_ministerial->Enabled = false;
      }

      if(IBTable1->FieldByName("secam_fiet")->AsString == "")
      {
         CheckBox10->Checked = true;
         secam_fiet->Enabled = false;
      }


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
void __fastcall TfModificar::CheckBox2Click(TObject *Sender)
{
   if(CheckBox2->Checked)
   {
      IBTable1->Edit();
      IBTable1->FieldByName("recepcion")->AsString = "";
      recepcion->Enabled = false;
   }
   else
   {
      recepcion->Date = Now();
      recepcion->Enabled = true;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::CheckBox1Click(TObject *Sender)
{
   if(CheckBox1->Checked)
   {
      IBTable1->Edit();
      IBTable1->FieldByName("fecha_nacimiento")->AsString = "";
      fecha_nacimiento->Enabled = false;
   }
   else
   {
      fecha_nacimiento->Date = Now();
      fecha_nacimiento->Enabled = true;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::CheckBox3Click(TObject *Sender)
{
   if(CheckBox3->Checked)
   {
      IBTable1->Edit();
      IBTable1->FieldByName("bautismo")->AsString = "";
      bautismo->Enabled = false;
   }
   else
   {
      bautismo->Date = Now();
      bautismo->Enabled = true;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::CheckBox4Click(TObject *Sender)
{
   if(CheckBox4->Checked)
   {
      IBTable1->Edit();
      IBTable1->FieldByName("serie_1")->AsString = "";
      serie_1->Enabled = false;
   }
   else
   {
      serie_1->Date = Now();
      serie_1->Enabled = true;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::CheckBox5Click(TObject *Sender)
{
   if(CheckBox5->Checked)
   {
      IBTable1->Edit();
      IBTable1->FieldByName("serie_2")->AsString = "";
      serie_2->Enabled = false;
   }
   else
   {
      serie_2->Date = Now();
      serie_2->Enabled = true;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::CheckBox6Click(TObject *Sender)
{
   if(CheckBox6->Checked)
   {
      IBTable1->Edit();
      IBTable1->FieldByName("serie_3")->AsString = "";
      serie_3->Enabled = false;
   }
   else
   {
      serie_3->Date = Now();
      serie_3->Enabled = true;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::CheckBox7Click(TObject *Sender)
{
   if(CheckBox7->Checked)
   {
      IBTable1->Edit();
      IBTable1->FieldByName("serie_4")->AsString = "";
      serie_4->Enabled = false;
   }
   else
   {
      serie_4->Date = Now();
      serie_4->Enabled = true;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::CheckBox8Click(TObject *Sender)
{
   if(CheckBox8->Checked)
   {
      IBTable1->Edit();
      IBTable1->FieldByName("serie_5")->AsString = "";
      serie_5->Enabled = false;
   }
   else
   {
      serie_5->Date = Now();
      serie_5->Enabled = true;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::CheckBox9Click(TObject *Sender)
{
   if(CheckBox9->Checked)
   {
      IBTable1->Edit();
      IBTable1->FieldByName("secam_ministerial")->AsString = "";
      secam_ministerial->Enabled = false;
   }
   else
   {
      secam_ministerial->Date = Now();
      secam_ministerial->Enabled = true;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::CheckBox10Click(TObject *Sender)
{
   if(CheckBox10->Checked)
   {
      IBTable1->Edit();
      IBTable1->FieldByName("secam_fiet")->AsString = "";
      secam_fiet->Enabled = false;
   }
   else
   {
      secam_fiet->Date = Now();
      secam_fiet->Enabled = true;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfModificar::BitBtn1Click(TObject *Sender)
{
   if((nombre->Text.Length() < 2) || (apellido->Text.Length() < 2))
      MessageDlg("Los campos \"Nombre\" y \"Apellido\" deben contener al menos dos letras.", mtInformation, TMsgDlgButtons() << mbOK, 0);
   else
   {
      if(MessageDlg("Guardar los cambios realizados?", mtConfirmation, TMsgDlgButtons() << mbNo << mbYes, 0) == mrYes)
      {
         IBTable1->Post();
         MessageDlg("Listo! Los cambios realizados fueron guardados.", mtInformation, TMsgDlgButtons() << mbOK, 0);
         Close();
      }
   }
}
//---------------------------------------------------------------------------

void __fastcall TfModificar::BitBtn2Click(TObject *Sender)
{
   IBTable1->Cancel();
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TfModificar::Button1Click(TObject *Sender)
{
   if(OpenDialog1->Execute())
   {
      foto->Picture->LoadFromFile(OpenDialog1->FileName.c_str());
   }        
}
//---------------------------------------------------------------------------

void __fastcall TfModificar::Button4Click(TObject *Sender)
{
   foto->Picture->LoadFromFile("NoPic.jpg");        
}
//---------------------------------------------------------------------------

void __fastcall TfModificar::Button2Click(TObject *Sender)
{
   IBTable1->Edit();
   IBTable1->FieldByName("ministerio")->AsString = "";
}
//---------------------------------------------------------------------------

void __fastcall TfModificar::Button3Click(TObject *Sender)
{
   IBTable1->Edit();
   IBTable1->FieldByName("gp")->AsString = "";
}
//---------------------------------------------------------------------------

