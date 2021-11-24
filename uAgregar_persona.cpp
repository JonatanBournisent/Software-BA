//---------------------------------------------------------------------------

#include <vcl.h>
#include <IniFiles.hpp>
#pragma hdrstop

#include "uAgregar_persona.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "JvExControls"
#pragma link "JvNavigationPane"
#pragma link "JvPageList"
#pragma link "JvButton"
#pragma link "JvComponentBase"
#pragma link "JvXPCore"
#pragma link "JvDBLookup"
#pragma link "JvCheckedMaskEdit"
#pragma link "JvDatePickerEdit"
#pragma link "JvDBDatePickerEdit"
#pragma link "JvExMask"
#pragma link "JvMaskEdit"
#pragma link "JvToolEdit"
#pragma link "JvDateTimePicker"
#pragma link "JvDBDateTimePicker"
#pragma link "JvExComCtrls"
#pragma link "JvDBImage"
#pragma resource "*.dfm"
TfAgregar_persona *fAgregar_persona;
//---------------------------------------------------------------------------
__fastcall TfAgregar_persona::TfAgregar_persona(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfAgregar_persona::FormClose(TObject *Sender,
      TCloseAction &Action)
{
   IBTable1->Cancel();
   IBTable1->Active = false;
   IBQuery2->Close();
   IBQuery3->Close();
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
void __fastcall TfAgregar_persona::FormShow(TObject *Sender)
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
      IBTable1->Active = true;
   }
   catch (...)
   {
      AnsiString msg = "Error al intentar acceder a la base de datos";
      msg = msg + ", verifique que la ruta de acceso sea correcta";
      ShowMessage(msg);
      Close();
   }

   IBQuery2->Close();
   IBQuery2->SQL->Clear();
   IBQuery2->SQL->Add("SELECT * FROM GRUPOS_PEQUENIOS ORDER BY nombre");
   IBQuery2->Open();

   IBQuery3->Close();
   IBQuery3->SQL->Clear();
   IBQuery3->SQL->Add("SELECT * FROM MINISTERIOS ORDER BY ministerio");
   IBQuery3->Open();

   
   IBTable1->Insert();
   provincia->Text = "Santa Fe";
   ciudad->Text = "Santa Fe";
   pais->Text = "Argentina";
   foto->Picture->LoadFromFile("NoPic.jpg");

   IBTable1->FieldByName("id")->AsInteger = 0;  // Luego lo completa el trigger programado en la base de datos.

   IBTable1->FieldByName("fecha_nacimiento")->AsString = "";
   IBTable1->FieldByName("recepcion")->AsString = "";
   IBTable1->FieldByName("bautismo")->AsString = "";
   IBTable1->FieldByName("serie_1")->AsString = "";
   IBTable1->FieldByName("serie_2")->AsString = "";
   IBTable1->FieldByName("serie_3")->AsString = "";
   IBTable1->FieldByName("serie_4")->AsString = "";
   IBTable1->FieldByName("serie_5")->AsString = "";
   IBTable1->FieldByName("secam_ministerial")->AsString = "";
   IBTable1->FieldByName("secam_fiet")->AsString = "";

   CheckBox1->Checked = true;
   CheckBox2->Checked = true;
   CheckBox3->Checked = true;
   CheckBox4->Checked = true;
   CheckBox5->Checked = true;
   CheckBox6->Checked = true;
   CheckBox7->Checked = true;
   CheckBox8->Checked = true;
   CheckBox9->Checked = true;
   CheckBox10->Checked = true;

   fecha_nacimiento->Enabled = false;
   recepcion->Enabled = false;
   bautismo->Enabled = false;
   serie_1->Enabled = false;
   serie_2->Enabled = false;
   serie_3->Enabled = false;
   serie_4->Enabled = false;
   serie_5->Enabled = false;
   secam_ministerial->Enabled = false;
   secam_fiet->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TfAgregar_persona::FormCreate(TObject *Sender)
{

   IBDatabase1->Params->Add("user_name=SYSDBA");     //Estos datos son siempre
   IBDatabase1->Params->Add("password=@.dbad.@");   //iguales y en ningun momento
   IBDatabase1->Params->Add("sql_role_name=3");      //se actualizaran. Por eso estan
   IBTable1->TableName = "PERSONAS";                 //en este evento.
}
//---------------------------------------------------------------------------
void __fastcall TfAgregar_persona::Button1Click(TObject *Sender)
{
   if(OpenDialog1->Execute())
   {
      foto->Picture->LoadFromFile(OpenDialog1->FileName.c_str());
   }        
}
//---------------------------------------------------------------------------


void __fastcall TfAgregar_persona::CheckBox1Click(TObject *Sender)
{
   if(CheckBox1->Checked)
   {
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

void __fastcall TfAgregar_persona::CheckBox2Click(TObject *Sender)
{
   if(CheckBox2->Checked)
   {
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

void __fastcall TfAgregar_persona::CheckBox3Click(TObject *Sender)
{
   if(CheckBox3->Checked)
   {
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

void __fastcall TfAgregar_persona::CheckBox4Click(TObject *Sender)
{
   if(CheckBox4->Checked)
   {
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

void __fastcall TfAgregar_persona::CheckBox5Click(TObject *Sender)
{
   if(CheckBox5->Checked)
   {
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

void __fastcall TfAgregar_persona::CheckBox6Click(TObject *Sender)
{
   if(CheckBox6->Checked)
   {
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

void __fastcall TfAgregar_persona::CheckBox7Click(TObject *Sender)
{
   if(CheckBox7->Checked)
   {
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

void __fastcall TfAgregar_persona::CheckBox8Click(TObject *Sender)
{
   if(CheckBox8->Checked)
   {
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

void __fastcall TfAgregar_persona::CheckBox9Click(TObject *Sender)
{
   if(CheckBox9->Checked)
   {
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

void __fastcall TfAgregar_persona::CheckBox10Click(TObject *Sender)
{
   if(CheckBox10->Checked)
   {
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

void __fastcall TfAgregar_persona::Button4Click(TObject *Sender)
{
   foto->Picture->LoadFromFile("NoPic.jpg");
}
//---------------------------------------------------------------------------


void __fastcall TfAgregar_persona::BitBtn1Click(TObject *Sender)
{
   if((nombre->Text.Length() < 2) || (apellido->Text.Length() < 2))
      MessageDlg("Los campos \"Nombre\" y \"Apellido\" deben contener al menos dos letras.", mtInformation, TMsgDlgButtons() << mbOK, 0);
   else
   {
      IBTable1->Post();
      AnsiString s = "Listo! " + nombre->Text + " " + apellido->Text;
      s = s + " fue agregado/a a la base de datos" + '\n';
      s = s + "Te gustaría agregar otra persona?";
      if(MessageDlg(s, mtInformation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
      {  
         IBTable1->Insert();
         provincia->Text = "Santa Fe";
         ciudad->Text = "Santa Fe";
         pais->Text = "Argentina";
         foto->Picture->LoadFromFile("NoPic.jpg");

         IBTable1->FieldByName("id")->AsInteger = 0;  // Luego lo completa el trigger programado en la base de datos.

         IBTable1->FieldByName("fecha_nacimiento")->AsString = "";
         IBTable1->FieldByName("recepcion")->AsString = "";
         IBTable1->FieldByName("bautismo")->AsString = "";
         IBTable1->FieldByName("serie_1")->AsString = "";
         IBTable1->FieldByName("serie_2")->AsString = "";
         IBTable1->FieldByName("serie_3")->AsString = "";
         IBTable1->FieldByName("serie_4")->AsString = "";
         IBTable1->FieldByName("serie_5")->AsString = "";
         IBTable1->FieldByName("secam_ministerial")->AsString = "";
         IBTable1->FieldByName("secam_fiet")->AsString = "";

         CheckBox1->Checked = true;
         CheckBox2->Checked = true;
         CheckBox3->Checked = true;
         CheckBox4->Checked = true;
         CheckBox5->Checked = true;
         CheckBox6->Checked = true;
         CheckBox7->Checked = true;
         CheckBox8->Checked = true;
         CheckBox9->Checked = true;
         CheckBox10->Checked = true;

         fecha_nacimiento->Enabled = false;
         recepcion->Enabled = false;
         bautismo->Enabled = false;
         serie_1->Enabled = false;
         serie_2->Enabled = false;
         serie_3->Enabled = false;
         serie_4->Enabled = false;
         serie_5->Enabled = false;
         secam_ministerial->Enabled = false;
         secam_fiet->Enabled = false;  
      }
      else
         Close();
   }        
}
//---------------------------------------------------------------------------

void __fastcall TfAgregar_persona::BitBtn2Click(TObject *Sender)
{
   IBTable1->Cancel();
   Close();
}
//---------------------------------------------------------------------------



