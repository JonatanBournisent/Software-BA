//---------------------------------------------------------------------------

#include <vcl.h>
#include <IniFiles.hpp>
#pragma hdrstop

#include "uConsultar.h"
#include "uModificar.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "JvDBImage"
#pragma link "JvBitBtn"
#pragma link "JvExButtons"
#pragma resource "*.dfm"
TfConsultar *fConsultar;
//---------------------------------------------------------------------------
__fastcall TfConsultar::TfConsultar(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfConsultar::FormCreate(TObject *Sender)
{
   IBDatabase1->Params->Add("user_name=SYSDBA");  
   IBDatabase1->Params->Add("password=@.dbad.@");
   IBDatabase1->Params->Add("sql_role_name=3");
}
//---------------------------------------------------------------------------
void __fastcall TfConsultar::FormShow(TObject *Sender)
{
   fConsultar->Width = 889;
   fConsultar->Height = 457;
   Panel2->Visible = true;
   Panel1->Visible = false;

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

      Edit1->Text = "";

      IBQuery3->Close();
      IBQuery3->SQL->Clear();
      IBQuery3->SQL->Add("SELECT COUNT(*) AS cant FROM PERSONAS");
      IBQuery3->Open();
      int cantidad = IBQuery3->FieldByName("cant")->AsInteger;
      IBQuery3->Close();

      IBQuery1->Close();
      IBQuery1->SQL->Clear();
      IBQuery1->SQL->Add("SELECT nombre, apellido, foto, id FROM PERSONAS ORDER BY apellido, nombre");
      IBQuery1->Open();

      if(cantidad == 0)
         GroupBox5->Caption = "Resultados: Aun no hay registros cargados";
      else if(cantidad == 1)
         GroupBox5->Caption = "Resultados: 1 registro";
      else
         GroupBox5->Caption = "Resultados: " + IntToStr(cantidad) + " registros (todos)";

      if(IBQuery1->RecordCount > 0)
         Button3->Enabled = true;
      else
         Button3->Enabled = false;

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
void __fastcall TfConsultar::Edit1Change(TObject *Sender)
{
   if(Edit1->Text != "")
   {
      IBQuery3->Close();
      IBQuery3->SQL->Clear();
      IBQuery3->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE (UPPER(nombre) LIKE UPPER(:v1) OR UPPER(apellido) LIKE UPPER(:v1))");
      IBQuery3->ParamByName("v1")->AsString = Edit1->Text + "%";
      IBQuery3->Open();
      int cantidad = IBQuery3->FieldByName("cant")->AsInteger;
      IBQuery3->Close();

      if(cantidad == 0)
         GroupBox5->Caption = "Resultados: No hay coincidencias";
      else if(cantidad == 1)
         GroupBox5->Caption = "Resultados: 1 registro";
      else
         GroupBox5->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

      IBQuery1->Close();   
      IBQuery1->SQL->Clear();
      IBQuery1->SQL->Add("SELECT nombre, apellido, foto, id FROM PERSONAS WHERE (UPPER(nombre) LIKE UPPER(:v1) OR UPPER(apellido) LIKE UPPER(:v1)) ORDER BY apellido, nombre");
      IBQuery1->ParamByName("v1")->AsString = Edit1->Text + "%";
      IBQuery1->Open();

      if(IBQuery1->RecordCount > 0)
         Button3->Enabled = true;
      else
         Button3->Enabled = false;
   }
   else
   {
      IBQuery3->Close();
      IBQuery3->SQL->Clear();
      IBQuery3->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS");
      IBQuery3->Open();
      int cantidad = IBQuery3->FieldByName("cant")->AsInteger;
      IBQuery3->Close();

      IBQuery1->Close();
      IBQuery1->SQL->Clear();
      IBQuery1->SQL->Add("SELECT nombre, apellido, foto, id FROM PERSONAS ORDER BY apellido, nombre");
      IBQuery1->Open();

      if(cantidad == 0)
         GroupBox5->Caption = "Resultados: Aun no hay registros cargados";
      else if(cantidad == 1)
         GroupBox5->Caption = "Resultados: 1 registro";
      else
         GroupBox5->Caption = "Resultados: " + IntToStr(cantidad) + " registros (todos)";
   
      if(IBQuery1->RecordCount > 0)
         Button3->Enabled = true;
      else
         Button3->Enabled = false;
   }
}
//---------------------------------------------------------------------------
void __fastcall TfConsultar::FormClose(TObject *Sender,
      TCloseAction &Action)
{
   IBQuery1->Close();
   IBDatabase1->Connected = false;
   IBTransaction1->Active = false;

   Edit1->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall TfConsultar::Button3Click(TObject *Sender)
{
   if(IBQuery1->RecordCount > 0)
   {
      IBQuery2->Close();
      IBQuery2->SQL->Clear();
      IBQuery2->SQL->Add("SELECT nombre, apellido, fecha_nacimiento, tel_fijo, ");
      IBQuery2->SQL->Add("tel_movil, email, direccion, ciudad, provincia, campo_char1, ");
      IBQuery2->SQL->Add("pais, ocupacion, estado_civil, nro_miembro, recepcion, ");
      IBQuery2->SQL->Add("bautismo, serie_1, serie_2, serie_3, serie_4, serie_5, ");
      IBQuery2->SQL->Add("secam_ministerial, secam_fiet, ministerio, gp, notas, id ");
      IBQuery2->SQL->Add("FROM PERSONAS WHERE(id = :v1)");
      IBQuery2->ParamByName("v1")->AsString = IBQuery1->FieldByName("id")->AsString;
      IBQuery2->Open();

      if(IBQuery2->FieldByName("fecha_nacimiento")->AsString != "")
         Label1->Caption = DateToStr(IBQuery2->FieldByName("fecha_nacimiento")->AsDateTime);
      else
         Label1->Caption = "No se conoce la fecha de su nacimiento";
      Label1->AutoSize = true;

      if(IBQuery2->FieldByName("recepcion")->AsString != "")
         Label2->Caption = DateToStr(IBQuery2->FieldByName("recepcion")->AsDateTime);
      else
         Label2->Caption = "Esta persona no ha sido recibida o se desconoce la fecha de su recepción";
      Label2->AutoSize = true;

      if(IBQuery2->FieldByName("bautismo")->AsString != "")
         Label3->Caption = DateToStr(IBQuery2->FieldByName("bautismo")->AsDateTime);
      else
         Label3->Caption = "Esta persona no ha sido bautizada o se desconoce la fecha de su bautismo";
      Label3->AutoSize = true;

      if(IBQuery2->FieldByName("serie_1")->AsString != "")
         Label4->Caption = DateToStr(IBQuery2->FieldByName("serie_1")->AsDateTime);
      else
         Label4->Caption = "No ha realizado la SERIE 1";
      Label4->AutoSize = true;

      if(IBQuery2->FieldByName("serie_2")->AsString != "")
         Label5->Caption = DateToStr(IBQuery2->FieldByName("serie_2")->AsDateTime);
      else
         Label5->Caption = "No ha realizado la SERIE 2";
      Label5->AutoSize = true;

      if(IBQuery2->FieldByName("serie_3")->AsString != "")
         Label6->Caption = DateToStr(IBQuery2->FieldByName("serie_3")->AsDateTime);
      else
         Label6->Caption = "No ha realizado la SERIE 3";
      Label6->AutoSize = true;

      if(IBQuery2->FieldByName("serie_4")->AsString != "")
         Label7->Caption = DateToStr(IBQuery2->FieldByName("serie_4")->AsDateTime);
      else
         Label7->Caption = "No ha realizado la SERIE 4";
      Label7->AutoSize = true;

      if(IBQuery2->FieldByName("serie_5")->AsString != "")
         Label8->Caption = DateToStr(IBQuery2->FieldByName("serie_5")->AsDateTime);
      else
         Label8->Caption = "No ha realizado la SERIE 5";
      Label8->AutoSize = true;

      if(IBQuery2->FieldByName("secam_ministerial")->AsString != "")
         Label9->Caption = DateToStr(IBQuery2->FieldByName("secam_ministerial")->AsDateTime);
      else
         Label9->Caption = "No ha realizado el Seminario de Capacitación Ministerial SECAM";
      Label9->AutoSize = true;

      if(IBQuery2->FieldByName("secam_fiet")->AsString != "")
         Label10->Caption = DateToStr(IBQuery2->FieldByName("secam_fiet")->AsDateTime);
      else
         Label10->Caption = "No ha realizado el Seminario de Capacitación SECAM FIET";
      Label10->AutoSize = true;

      fConsultar->Width = 913;
      fConsultar->Height = 600;
      fConsultar->Left = fConsultar->Left - 12;
      fConsultar->Top = fConsultar->Top - 72;
      Panel1->Visible = true;
      Panel2->Visible = false;
   }
}
//---------------------------------------------------------------------------


void __fastcall TfConsultar::BitBtn1Click(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------

void __fastcall TfConsultar::BitBtn2Click(TObject *Sender)
{
   Panel2->Visible = true;
   Panel1->Visible = false;

   IBQuery2->Close();

   fConsultar->Width = 889;
   fConsultar->Height = 457;
   fConsultar->Left = fConsultar->Left + 12;
   fConsultar->Top = fConsultar->Top + 72;        
}
//---------------------------------------------------------------------------

void __fastcall TfConsultar::BitBtn3Click(TObject *Sender)
{
   fModificar->id = IBQuery2->FieldByName("id")->AsInteger;
   IBQuery1->Close();
   IBQuery2->Close();
   IBDatabase1->Connected = false;
   IBTransaction1->Active = false;

   fModificar->ShowModal();
   fConsultar->Left = fConsultar->Left + 12;    //Si falta este codigo fConsultar se desplaza
   fConsultar->Top = fConsultar->Top + 72;      //hacia arriba cada vez que se abre fModificar


   fConsultar->Width = 889;
   fConsultar->Height = 457;
   Panel2->Visible = true;
   Panel1->Visible = false;

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

      Edit1->Text = "";

      IBQuery3->Close();
      IBQuery3->SQL->Clear();
      IBQuery3->SQL->Add("SELECT COUNT(*) AS cant FROM PERSONAS");
      IBQuery3->Open();
      int cantidad = IBQuery3->FieldByName("cant")->AsInteger;
      IBQuery3->Close();

      IBQuery1->Close();
      IBQuery1->SQL->Clear();
      IBQuery1->SQL->Add("SELECT nombre, apellido, foto, id FROM PERSONAS ORDER BY apellido, nombre");
      IBQuery1->Open();

      if(cantidad == 0)
         GroupBox5->Caption = "Resultados: Aun no hay registros cargados";
      else if(cantidad == 1)
         GroupBox5->Caption = "Resultados: 1 registro";
      else
         GroupBox5->Caption = "Resultados: " + IntToStr(cantidad) + " registros (todos)";

      if(IBQuery1->RecordCount > 0)
         Button3->Enabled = true;
      else
         Button3->Enabled = false;

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


void __fastcall TfConsultar::BitBtn4Click(TObject *Sender)
{

   if(IBQuery1->RecordCount > 0)
   {
      if(MessageDlg("Realmente desea eliminar toda la información de \""+ IBQuery1->FieldByName("nombre")->AsString + " " + IBQuery1->FieldByName("apellido")->AsString + "\"?", mtConfirmation, TMsgDlgButtons() << mbNo << mbYes, 0) == mrYes)
      {
         if(MessageDlg("Esta acción no se puede desahacer. Realmente desea continuar?", mtWarning, TMsgDlgButtons() << mbNo << mbYes, 0) == mrYes)
         {
            int id = IBQuery1->FieldByName("id")->AsInteger;
            IBQuery1->Close();
            IBQuery2->Close();

            IBQuery2->SQL->Clear();
            IBQuery2->SQL->Add("DELETE FROM PERSONAS WHERE(id = :v1)");
            IBQuery2->ParamByName("v1")->AsInteger = id;
            IBQuery2->ExecSQL();

            IBQuery1->Close();
            IBQuery1->SQL->Clear();
            IBQuery1->SQL->Add("SELECT nombre, apellido, foto, id FROM PERSONAS");
            IBQuery1->Open();
         }
      }
   }
}
//---------------------------------------------------------------------------




