//---------------------------------------------------------------------------

#include <vcl.h>
#include <IniFiles.hpp>
#pragma hdrstop

#include "uListas.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "JvDBLookup"
#pragma link "JvExControls"
#pragma resource "*.dfm"
TfListas *fListas;
//---------------------------------------------------------------------------
__fastcall TfListas::TfListas(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfListas::FormCreate(TObject *Sender)
{
   IBDatabase1->Params->Add("user_name=SYSDBA");
   IBDatabase1->Params->Add("password=@.dbad.@");
   IBDatabase1->Params->Add("sql_role_name=3");
   IBTable1->TableName = "GRUPOS_PEQUENIOS";
   IBTable2->TableName = "MINISTERIOS";
}
//---------------------------------------------------------------------------
void __fastcall TfListas::FormClose(TObject *Sender, TCloseAction &Action)
{
   IBQuery1->Close();
   IBTable1->Active = false;
   IBTable2->Active = false;
   IBTransaction1->Active = false;
   IBDatabase1->Connected = false;

   Edit1->Text = "0";
   Edit2->Text = "0";
   Edit3->Text = "";
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;
}
//---------------------------------------------------------------------------
void __fastcall TfListas::FormShow(TObject *Sender)
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
      IBTable2->Active = true;
   }
   catch (...)
   {
      AnsiString msg = "Error al intentar acceder a la base de datos";
      msg = msg + ", verifique que la ruta de acceso sea correcta";
      ShowMessage(msg);
      Close();
   }

   Button9->Caption = "Mostrar opciones avanzadas";
   GroupBox8->Visible = false;
   GroupBox7->Top = 240;
   GroupBox7->Height = 353;
   DBGrid1->Height = 321;

   Edit1->Text = "0";
   Edit2->Text = "0";
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;
}
//---------------------------------------------------------------------------
void __fastcall TfListas::Edit3Change(TObject *Sender)
{
   Edit1->Text = "0";
   Edit2->Text = "0";
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
   CheckBox11->Checked = false;
   CheckBox12->Checked = false;
   CheckBox13->Checked = false;
   CheckBox14->Checked = false;
   CheckBox15->Checked = false;
   CheckBox16->Checked = false;
   CheckBox17->Checked = false;
   CheckBox18->Checked = false;
   CheckBox19->Checked = false;
   CheckBox20->Checked = false;
   CheckBox21->Checked = false;
   CheckBox22->Checked = false;
   CheckBox23->Checked = false;
   CheckBox24->Checked = false;
   CheckBox25->Checked = false;
   CheckBox26->Checked = false;
   CheckBox27->Checked = false;
   CheckBox28->Checked = false;
   CheckBox29->Checked = false;
   CheckBox30->Checked = false;

   if(Edit3->Text != "")
   {
      IBQuery2->Close();
      IBQuery2->SQL->Clear();
      IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE (UPPER(ocupacion) LIKE UPPER(:v1))");
      IBQuery2->ParamByName("v1")->AsString = Edit3->Text + "%";
      IBQuery2->Open();
      int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
      IBQuery2->Close();

      if(cantidad == 0)
         GroupBox7->Caption = "Resultados: No hay coincidencias";
      else if(cantidad == 1)
         GroupBox7->Caption = "Resultados: 1 registro";
      else
         GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

      IBQuery1->Close();
      IBQuery1->SQL->Clear();
      IBQuery1->SQL->Add("SELECT * FROM PERSONAS WHERE (UPPER(ocupacion) LIKE UPPER(:v1)) ORDER BY apellido, nombre");
      IBQuery1->ParamByName("v1")->AsString = Edit3->Text + "%";
      IBQuery1->Open();
   }
   else
   {
      IBQuery1->Close();
   }
}
//---------------------------------------------------------------------------
void __fastcall TfListas::Button1Click(TObject *Sender)
{
   Edit1->Text = "0";
   Edit2->Text = "0";
   Edit3->Text = "";
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;

   IBQuery2->Close();
   IBQuery2->SQL->Clear();
   IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE gp is null");
   IBQuery2->Open();
   int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
   IBQuery2->Close();

   if(cantidad == 0)
      GroupBox7->Caption = "Resultados: No hay coincidencias";
   else if(cantidad == 1)
      GroupBox7->Caption = "Resultados: 1 registro";
   else
      GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

   IBQuery1->Close();
   IBQuery1->SQL->Clear();
   IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
   IBQuery1->SQL->Add("tel_movil, email, direccion, ");
   IBQuery1->SQL->Add("ocupacion, id");
   IBQuery1->SQL->Add("FROM PERSONAS WHERE gp is null ORDER BY apellido, nombre");
   IBQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfListas::Button5Click(TObject *Sender)
{
   Edit1->Text = "0";
   Edit2->Text = "0";
   Edit3->Text = "";
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;

   IBQuery2->Close();
   IBQuery2->SQL->Clear();
   IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE ministerio is null");
   IBQuery2->Open();
   int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
   IBQuery2->Close();

   if(cantidad == 0)
      GroupBox7->Caption = "Resultados: No hay coincidencias";
   else if(cantidad == 1)
      GroupBox7->Caption = "Resultados: 1 registro";
   else
      GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

   IBQuery1->Close();
   IBQuery1->SQL->Clear();
   IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
   IBQuery1->SQL->Add("tel_movil, email, direccion, ");
   IBQuery1->SQL->Add("ocupacion, id");
   IBQuery1->SQL->Add("FROM PERSONAS WHERE ministerio is null ORDER BY apellido, nombre");
   IBQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfListas::Button6Click(TObject *Sender)
{
   Edit1->Text = "0";
   Edit2->Text = "0";
   Edit3->Text = "";
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;

   IBQuery2->Close();
   IBQuery2->SQL->Clear();
   IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE bautismo is null");
   IBQuery2->Open();
   int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
   IBQuery2->Close();

   if(cantidad == 0)
      GroupBox7->Caption = "Resultados: No hay coincidencias";
   else if(cantidad == 1)
      GroupBox7->Caption = "Resultados: 1 registro";
   else
      GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

   IBQuery1->Close();
   IBQuery1->SQL->Clear();
   IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
   IBQuery1->SQL->Add("tel_movil, email, direccion, ");
   IBQuery1->SQL->Add("ocupacion, id");
   IBQuery1->SQL->Add("FROM PERSONAS WHERE bautismo is null ORDER BY apellido, nombre");
   IBQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfListas::Button7Click(TObject *Sender)
{
   if(IBQuery1->RecordCount > 0)
   {
      Variant XL, v0, v1;
      XL = Variant::CreateObject("excel.application");
      v0 = XL.OlePropertyGet("Workbooks");
      v0.OleProcedure("Add");
      v0 = v0.OlePropertyGet("Item",1);
      v0 = v0.OlePropertyGet("WorkSheets");
      v0 = v0.OleFunction("Add");

      v1 = v0.OlePropertyGet("Cells");

      v1.OlePropertyGet("Item",1,1).OlePropertySet("Value","Nombre");
      v1.OlePropertyGet("Item",1,2).OlePropertySet("Value","Apellido");
      v1.OlePropertyGet("Item",1,3).OlePropertySet("Value","Teléfono fijo");
      v1.OlePropertyGet("Item",1,4).OlePropertySet("Value","Celular");
      v1.OlePropertyGet("Item",1,5).OlePropertySet("Value","email");
      v1.OlePropertyGet("Item",1,6).OlePropertySet("Value","Dirección");
      v1.OlePropertyGet("Item",1,7).OlePropertySet("Value","Ocupación");

      IBQuery1->First();
      int i=2;
      while(!IBQuery1->Eof)
      {
         v1.OlePropertyGet("Item",i,1).OlePropertySet("Value",IBQuery1->FieldByName("nombre")->AsString.c_str());
         v1.OlePropertyGet("Item",i,2).OlePropertySet("Value",IBQuery1->FieldByName("apellido")->AsString.c_str());
         v1.OlePropertyGet("Item",i,3).OlePropertySet("Value",IBQuery1->FieldByName("tel_fijo")->AsString.c_str());
         v1.OlePropertyGet("Item",i,4).OlePropertySet("Value",IBQuery1->FieldByName("tel_movil")->AsString.c_str());
         v1.OlePropertyGet("Item",i,5).OlePropertySet("Value",IBQuery1->FieldByName("email")->AsString.c_str());
         v1.OlePropertyGet("Item",i,6).OlePropertySet("Value",IBQuery1->FieldByName("direccion")->AsString.c_str());
         v1.OlePropertyGet("Item",i,7).OlePropertySet("Value",IBQuery1->FieldByName("ocupacion")->AsString.c_str());
         i++;
         IBQuery1->Next();
      }

      XL.OlePropertySet("DisplayAlerts",true);
      XL.OlePropertySet("Visible",true);
      XL = Unassigned;
   }
}
//---------------------------------------------------------------------------

void __fastcall TfListas::Button8Click(TObject *Sender)
{
   if(IBQuery1->RecordCount > 0)
   {
      AnsiString lista = "";
      IBQuery1->First();
      int i=2;
      while(!IBQuery1->Eof)
      {
         if(IBQuery1->FieldByName("email")->AsString != "")
         {
            lista = lista + IBQuery1->FieldByName("email")->AsString + "; ";
         }
         i++;
         IBQuery1->Next();
      }

      TStringList * cadena;
      cadena = new TStringList();
      cadena->Add(lista);
      if (SaveDialog1->Execute())
         cadena->SaveToFile(SaveDialog1->FileName);

      delete cadena;
   }
}
//---------------------------------------------------------------------------


void __fastcall TfListas::BitBtn1Click(TObject *Sender)
{
   Edit1->Text = "0";
   Edit2->Text = "0";
   Edit3->Text = "";
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;

   if(JvDBLookupCombo1->Text != "")
   {
      IBQuery2->Close();
      IBQuery2->SQL->Clear();
      IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE gp = :v1");
      IBQuery2->ParamByName("v1")->AsString = JvDBLookupCombo1->Text;
      IBQuery2->Open();
      int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
      IBQuery2->Close();

      if(cantidad == 0)
         GroupBox7->Caption = "Resultados: No hay coincidencias";
      else if(cantidad == 1)
         GroupBox7->Caption = "Resultados: 1 registro";
      else
         GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

      IBQuery1->Close();
      IBQuery1->SQL->Clear();
      IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
      IBQuery1->SQL->Add("tel_movil, email, direccion, ");
      IBQuery1->SQL->Add("ocupacion, id");
      IBQuery1->SQL->Add("FROM PERSONAS WHERE gp = :v1 ORDER BY apellido, nombre");
      IBQuery1->ParamByName("v1")->AsString = JvDBLookupCombo1->Text;
      IBQuery1->Open();
   }        
}
//---------------------------------------------------------------------------

void __fastcall TfListas::BitBtn2Click(TObject *Sender)
{
   Edit1->Text = "0";
   Edit2->Text = "0";
   Edit3->Text = "";
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;

   if(JvDBLookupCombo2->Text != "")
   {
      IBQuery2->Close();
      IBQuery2->SQL->Clear();
      IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE ministerio = :v1");
      IBQuery2->ParamByName("v1")->AsString = JvDBLookupCombo2->Text;
      IBQuery2->Open();
      int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
      IBQuery2->Close();

      if(cantidad == 0)
         GroupBox7->Caption = "Resultados: No hay coincidencias";
      else if(cantidad == 1)
         GroupBox7->Caption = "Resultados: 1 registro";
      else
         GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

      IBQuery1->Close();
      IBQuery1->SQL->Clear();
      IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
      IBQuery1->SQL->Add("tel_movil, email, direccion, ");
      IBQuery1->SQL->Add("ocupacion, id");
      IBQuery1->SQL->Add("FROM PERSONAS WHERE ministerio = :v1 ORDER BY apellido, nombre");
      IBQuery1->ParamByName("v1")->AsString = JvDBLookupCombo2->Text;
      IBQuery1->Open();
   }        
}
//---------------------------------------------------------------------------

void __fastcall TfListas::BitBtn3Click(TObject *Sender)
{
   Edit3->Text = "";

   try
   {
      StrToInt(Edit1->Text);     //Verifica si los campos son convertibles a números enteros
      StrToInt(Edit2->Text);

      if(CheckBox1->Checked)
      {
         if((Edit1->Text != "") && (Edit2->Text != ""))
         {
            IBQuery2->Close();
            IBQuery2->SQL->Clear();
            IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE ((fecha_nacimiento >= :v1) AND (fecha_nacimiento <= :v2) AND (estado_civil = 'Casado/a'))");
            IBQuery2->ParamByName("v1")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit2->Text));
            IBQuery2->ParamByName("v2")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit1->Text));
            IBQuery2->Open();
            int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
            IBQuery2->Close();

            if(cantidad == 0)
               GroupBox7->Caption = "Resultados: No hay coincidencias";
            else if(cantidad == 1)
               GroupBox7->Caption = "Resultados: 1 registro";
            else
               GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

            IBQuery1->Close();
            IBQuery1->SQL->Clear();
            IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
            IBQuery1->SQL->Add("tel_movil, email, direccion, ");
            IBQuery1->SQL->Add("ocupacion, id");
            IBQuery1->SQL->Add("FROM PERSONAS WHERE ((fecha_nacimiento >= :v1) AND (fecha_nacimiento <= :v2) AND (estado_civil = 'Casado/a')) ORDER BY apellido, nombre");
            IBQuery1->ParamByName("v1")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit2->Text));
            IBQuery1->ParamByName("v2")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit1->Text));
            IBQuery1->Open();
         }
      }
      else if(CheckBox2->Checked)
      {
         if((Edit1->Text != "") && (Edit2->Text != ""))
         {
            IBQuery2->Close();
            IBQuery2->SQL->Clear();
            IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE ((fecha_nacimiento >= :v1) AND (fecha_nacimiento <= :v2) AND (estado_civil <> 'Casado/a'))");
            IBQuery2->ParamByName("v1")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit2->Text));
            IBQuery2->ParamByName("v2")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit1->Text));
            IBQuery2->Open();
            int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
            IBQuery2->Close();

            if(cantidad == 0)
               GroupBox7->Caption = "Resultados: No hay coincidencias";
            else if(cantidad == 1)
               GroupBox7->Caption = "Resultados: 1 registro";
            else
               GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

            IBQuery1->Close();
            IBQuery1->SQL->Clear();
            IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
            IBQuery1->SQL->Add("tel_movil, email, direccion, ");
            IBQuery1->SQL->Add("ocupacion, id");
            IBQuery1->SQL->Add("FROM PERSONAS WHERE ((fecha_nacimiento >= :v1) AND (fecha_nacimiento <= :v2) AND (estado_civil <> 'Casado/a')) ORDER BY apellido, nombre");
            IBQuery1->ParamByName("v1")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit2->Text));
            IBQuery1->ParamByName("v2")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit1->Text));
            IBQuery1->Open();
         }
      }
      else
      {
         if((Edit1->Text != "") && (Edit2->Text != ""))
         {
            IBQuery2->Close();
            IBQuery2->SQL->Clear();
            IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE ((fecha_nacimiento >= :v1) AND (fecha_nacimiento <= :v2))");
            IBQuery2->ParamByName("v1")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit2->Text));
            IBQuery2->ParamByName("v2")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit1->Text));
            IBQuery2->Open();
            int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
            IBQuery2->Close();

            if(cantidad == 0)
               GroupBox7->Caption = "Resultados: No hay coincidencias";
            else if(cantidad == 1)
               GroupBox7->Caption = "Resultados: 1 registro";
            else
               GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

            IBQuery1->Close();
            IBQuery1->SQL->Clear();
            IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
            IBQuery1->SQL->Add("tel_movil, email, direccion, ");
            IBQuery1->SQL->Add("ocupacion, id");
            IBQuery1->SQL->Add("FROM PERSONAS WHERE ((fecha_nacimiento >= :v1) AND (fecha_nacimiento <= :v2)) ORDER BY apellido, nombre");
            IBQuery1->ParamByName("v1")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit2->Text));
            IBQuery1->ParamByName("v2")->AsDateTime = IncYear(Now(),-1*StrToInt(Edit1->Text));
            IBQuery1->Open();
         }
      }
   }
   catch (...)
   {
      ShowMessage("Los campos solo pueden contener números enteros!");
   }        
}
//---------------------------------------------------------------------------

void __fastcall TfListas::BitBtn4Click(TObject *Sender)
{
   Close();        
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox1Click(TObject *Sender)
{
   if(CheckBox1->Checked)
      CheckBox2->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox2Click(TObject *Sender)
{
   if(CheckBox2->Checked)
      CheckBox1->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::Button2Click(TObject *Sender)
{
   Edit1->Text = "0";
   Edit2->Text = "0";
   Edit3->Text = "";
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;

   IBQuery2->Close();
   IBQuery2->SQL->Clear();
   IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE gp is not null");
   IBQuery2->Open();
   int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
   IBQuery2->Close();

   if(cantidad == 0)
      GroupBox7->Caption = "Resultados: No hay coincidencias";
   else if(cantidad == 1)
      GroupBox7->Caption = "Resultados: 1 registro";
   else
      GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

   IBQuery1->Close();
   IBQuery1->SQL->Clear();
   IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
   IBQuery1->SQL->Add("tel_movil, email, direccion, ");
   IBQuery1->SQL->Add("ocupacion, id");
   IBQuery1->SQL->Add("FROM PERSONAS WHERE gp is not null ORDER BY apellido, nombre");
   IBQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfListas::Button3Click(TObject *Sender)
{
   Edit1->Text = "0";
   Edit2->Text = "0";
   Edit3->Text = "";
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;

   IBQuery2->Close();
   IBQuery2->SQL->Clear();
   IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE ministerio is not null");
   IBQuery2->Open();
   int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
   IBQuery2->Close();

   if(cantidad == 0)
      GroupBox7->Caption = "Resultados: No hay coincidencias";
   else if(cantidad == 1)
      GroupBox7->Caption = "Resultados: 1 registro";
   else
      GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

   IBQuery1->Close();
   IBQuery1->SQL->Clear();
   IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
   IBQuery1->SQL->Add("tel_movil, email, direccion, ");
   IBQuery1->SQL->Add("ocupacion, id");
   IBQuery1->SQL->Add("FROM PERSONAS WHERE ministerio is not null ORDER BY apellido, nombre");
   IBQuery1->Open();        
}
//---------------------------------------------------------------------------

void __fastcall TfListas::Button4Click(TObject *Sender)
{
   Edit1->Text = "0";
   Edit2->Text = "0";
   Edit3->Text = "";
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;

   IBQuery2->Close();
   IBQuery2->SQL->Clear();
   IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE bautismo is not null");
   IBQuery2->Open();
   int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
   IBQuery2->Close();

   if(cantidad == 0)
      GroupBox7->Caption = "Resultados: No hay coincidencias";
   else if(cantidad == 1)
      GroupBox7->Caption = "Resultados: 1 registro";
   else
      GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

   IBQuery1->Close();
   IBQuery1->SQL->Clear();
   IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
   IBQuery1->SQL->Add("tel_movil, email, direccion, ");
   IBQuery1->SQL->Add("ocupacion, id");
   IBQuery1->SQL->Add("FROM PERSONAS WHERE bautismo is not null ORDER BY apellido, nombre");
   IBQuery1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox3Click(TObject *Sender)
{
   if(CheckBox3->Checked)
      CheckBox4->Checked = false;        
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox4Click(TObject *Sender)
{
   if(CheckBox4->Checked)
      CheckBox3->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox5Click(TObject *Sender)
{
   if(CheckBox5->Checked)
      CheckBox6->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox6Click(TObject *Sender)
{
   if(CheckBox6->Checked)
      CheckBox5->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox7Click(TObject *Sender)
{
   if(CheckBox7->Checked)
      CheckBox8->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox8Click(TObject *Sender)
{
   if(CheckBox8->Checked)
      CheckBox7->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox9Click(TObject *Sender)
{
   if(CheckBox9->Checked)
      CheckBox10->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox10Click(TObject *Sender)
{
   if(CheckBox10->Checked)
      CheckBox9->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox11Click(TObject *Sender)
{
   if(CheckBox11->Checked)
      CheckBox12->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox12Click(TObject *Sender)
{
   if(CheckBox12->Checked)
      CheckBox11->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox13Click(TObject *Sender)
{
   if(CheckBox13->Checked)
      CheckBox14->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox14Click(TObject *Sender)
{
   if(CheckBox14->Checked)
      CheckBox13->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox15Click(TObject *Sender)
{
   if(CheckBox15->Checked)
      CheckBox16->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox16Click(TObject *Sender)
{
   if(CheckBox16->Checked)
      CheckBox15->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox17Click(TObject *Sender)
{
   if(CheckBox17->Checked)
      CheckBox18->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox18Click(TObject *Sender)
{
   if(CheckBox18->Checked)
      CheckBox17->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox19Click(TObject *Sender)
{
   if(CheckBox19->Checked)
      CheckBox20->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox20Click(TObject *Sender)
{
   if(CheckBox20->Checked)
      CheckBox19->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox21Click(TObject *Sender)
{
   if(CheckBox21->Checked)
      CheckBox22->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox22Click(TObject *Sender)
{
   if(CheckBox22->Checked)
      CheckBox21->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox23Click(TObject *Sender)
{
   if(CheckBox23->Checked)
      CheckBox24->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox24Click(TObject *Sender)
{
   if(CheckBox24->Checked)
      CheckBox23->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox25Click(TObject *Sender)
{
   if(CheckBox25->Checked)
      CheckBox26->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox26Click(TObject *Sender)
{
   if(CheckBox26->Checked)
      CheckBox25->Checked = false;
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox27Click(TObject *Sender)
{
   if(CheckBox27->Checked)
   {
      CheckBox28->Checked = false;
      CheckBox29->Checked = false;
      CheckBox30->Checked = false;
   }
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox28Click(TObject *Sender)
{
   if(CheckBox28->Checked)
   {
      CheckBox27->Checked = false;
      CheckBox29->Checked = false;
      CheckBox30->Checked = false;
   }
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox29Click(TObject *Sender)
{
   if(CheckBox29->Checked)
   {
      CheckBox28->Checked = false;
      CheckBox27->Checked = false;
      CheckBox30->Checked = false;
   }
}
//---------------------------------------------------------------------------

void __fastcall TfListas::CheckBox30Click(TObject *Sender)
{
   if(CheckBox30->Checked)
   {
      CheckBox28->Checked = false;
      CheckBox29->Checked = false;
      CheckBox27->Checked = false;
   }
}
//---------------------------------------------------------------------------

void __fastcall TfListas::BitBtn5Click(TObject *Sender)
{
   IBQuery2->Close();
   IBQuery2->SQL->Clear();
   IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE id > 0 ");

   if(CheckBox3->Checked)
      IBQuery2->SQL->Add("AND serie_1 is not null ");
   if(CheckBox4->Checked)
      IBQuery2->SQL->Add("AND serie_1 is null ");

   if(CheckBox5->Checked)
      IBQuery2->SQL->Add("AND serie_2 is not null ");
   if(CheckBox6->Checked)
      IBQuery2->SQL->Add("AND serie_2 is null ");

   if(CheckBox7->Checked)
      IBQuery2->SQL->Add("AND serie_3 is not null ");
   if(CheckBox8->Checked)
      IBQuery2->SQL->Add("AND serie_3 is null ");

   if(CheckBox9->Checked)
      IBQuery2->SQL->Add("AND serie_4 is not null ");
   if(CheckBox10->Checked)
      IBQuery2->SQL->Add("AND serie_4 is null ");

   if(CheckBox11->Checked)
      IBQuery2->SQL->Add("AND serie_5 is not null ");
   if(CheckBox12->Checked)
      IBQuery2->SQL->Add("AND serie_5 is null ");

   if(CheckBox13->Checked)
      IBQuery2->SQL->Add("AND recepcion is not null ");
   if(CheckBox14->Checked)
      IBQuery2->SQL->Add("AND recepcion is null ");

   if(CheckBox15->Checked)
      IBQuery2->SQL->Add("AND bautismo is not null ");
   if(CheckBox16->Checked)
      IBQuery2->SQL->Add("AND bautismo is null ");

   if(CheckBox17->Checked)
      IBQuery2->SQL->Add("AND gp is not null ");
   if(CheckBox18->Checked)
      IBQuery2->SQL->Add("AND gp is null ");

   if(CheckBox19->Checked)
      IBQuery2->SQL->Add("AND ministerio is not null ");
   if(CheckBox20->Checked)
      IBQuery2->SQL->Add("AND ministerio is null ");

   if(CheckBox21->Checked)
      IBQuery2->SQL->Add("AND fecha_nacimiento is not null ");
   if(CheckBox22->Checked)
      IBQuery2->SQL->Add("AND fecha_nacimiento is null ");

   if(CheckBox23->Checked)
      IBQuery2->SQL->Add("AND secam_ministerial is not null ");
   if(CheckBox24->Checked)
      IBQuery2->SQL->Add("AND secam_ministerial is null ");

   if(CheckBox25->Checked)
      IBQuery2->SQL->Add("AND secam_fiet is not null ");
   if(CheckBox26->Checked)
      IBQuery2->SQL->Add("AND secam_fiet is null ");

   if(CheckBox27->Checked)
      IBQuery2->SQL->Add("AND estado_civil = 'Soltero/a' ");
   if(CheckBox28->Checked)
      IBQuery2->SQL->Add("AND estado_civil = 'Casado/a' ");
   if(CheckBox29->Checked)
      IBQuery2->SQL->Add("AND estado_civil = 'Divorciado/a' ");
   if(CheckBox30->Checked)
      IBQuery2->SQL->Add("AND estado_civil = 'Separado/a' ");

   IBQuery2->Open();
   int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
   IBQuery2->Close();

   if(cantidad == 0)
      GroupBox7->Caption = "Resultados: No hay coincidencias";
   else if(cantidad == 1)
      GroupBox7->Caption = "Resultados: 1 registro";
   else
      GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";


   IBQuery1->Close();
   IBQuery1->SQL->Clear();
   IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
   IBQuery1->SQL->Add("tel_movil, email, direccion, ");
   IBQuery1->SQL->Add("ocupacion, id");
   IBQuery1->SQL->Add("FROM PERSONAS WHERE id > 0 ");   //el id>0 es solo para dar comiento... algo que siempre se cumple!

   if(CheckBox3->Checked)
      IBQuery1->SQL->Add("AND serie_1 is not null ");
   if(CheckBox4->Checked)
      IBQuery1->SQL->Add("AND serie_1 is null ");

   if(CheckBox5->Checked)
      IBQuery1->SQL->Add("AND serie_2 is not null ");
   if(CheckBox6->Checked)
      IBQuery1->SQL->Add("AND serie_2 is null ");

   if(CheckBox7->Checked)
      IBQuery1->SQL->Add("AND serie_3 is not null ");
   if(CheckBox8->Checked)
      IBQuery1->SQL->Add("AND serie_3 is null ");

   if(CheckBox9->Checked)
      IBQuery1->SQL->Add("AND serie_4 is not null ");
   if(CheckBox10->Checked)
      IBQuery1->SQL->Add("AND serie_4 is null ");

   if(CheckBox11->Checked)
      IBQuery1->SQL->Add("AND serie_5 is not null ");
   if(CheckBox12->Checked)
      IBQuery1->SQL->Add("AND serie_5 is null ");

   if(CheckBox13->Checked)
      IBQuery1->SQL->Add("AND recepcion is not null ");
   if(CheckBox14->Checked)
      IBQuery1->SQL->Add("AND recepcion is null ");

   if(CheckBox15->Checked)
      IBQuery1->SQL->Add("AND bautismo is not null ");
   if(CheckBox16->Checked)
      IBQuery1->SQL->Add("AND bautismo is null ");

   if(CheckBox17->Checked)
      IBQuery1->SQL->Add("AND gp is not null ");
   if(CheckBox18->Checked)
      IBQuery1->SQL->Add("AND gp is null ");

   if(CheckBox19->Checked)
      IBQuery1->SQL->Add("AND ministerio is not null ");
   if(CheckBox20->Checked)
      IBQuery1->SQL->Add("AND ministerio is null ");

   if(CheckBox21->Checked)
      IBQuery1->SQL->Add("AND fecha_nacimiento is not null ");
   if(CheckBox22->Checked)
      IBQuery1->SQL->Add("AND fecha_nacimiento is null ");

   if(CheckBox23->Checked)
      IBQuery1->SQL->Add("AND secam_ministerial is not null ");
   if(CheckBox24->Checked)
      IBQuery1->SQL->Add("AND secam_ministerial is null ");

   if(CheckBox25->Checked)
      IBQuery1->SQL->Add("AND secam_fiet is not null ");
   if(CheckBox26->Checked)
      IBQuery1->SQL->Add("AND secam_fiet is null ");

   if(CheckBox27->Checked)
      IBQuery1->SQL->Add("AND estado_civil = 'Soltero/a' ");
   if(CheckBox28->Checked)
      IBQuery1->SQL->Add("AND estado_civil = 'Casado/a' ");
   if(CheckBox29->Checked)
      IBQuery1->SQL->Add("AND estado_civil = 'Divorciado/a' ");
   if(CheckBox30->Checked)
      IBQuery1->SQL->Add("AND estado_civil = 'Separado/a' ");

   IBQuery1->Open();
}
//---------------------------------------------------------------------------


void __fastcall TfListas::BitBtn6Click(TObject *Sender)
{
   Edit1->Text = "0";
   Edit2->Text = "0";
   Edit3->Text = "";
   CheckBox1->Checked = false;
   CheckBox2->Checked = false;

   if(ComboBox1->Text != "")
   {
      IBQuery2->Close();
      IBQuery2->SQL->Clear();
      IBQuery2->SQL->Add("SELECT COUNT(id) AS cant FROM PERSONAS WHERE campo_char1 = :v1");
      IBQuery2->ParamByName("v1")->AsString = ComboBox1->Text;
      IBQuery2->Open();
      int cantidad = IBQuery2->FieldByName("cant")->AsInteger;
      IBQuery2->Close();

      if(cantidad == 0)
         GroupBox7->Caption = "Resultados: No hay coincidencias";
      else if(cantidad == 1)
         GroupBox7->Caption = "Resultados: 1 registro";
      else
         GroupBox7->Caption = "Resultados: " + IntToStr(cantidad) + " registros";

      IBQuery1->Close();
      IBQuery1->SQL->Clear();
      IBQuery1->SQL->Add("SELECT nombre, apellido, tel_fijo, ");
      IBQuery1->SQL->Add("tel_movil, email, direccion, ");
      IBQuery1->SQL->Add("ocupacion, id");
      IBQuery1->SQL->Add("FROM PERSONAS WHERE campo_char1 = :v1 ORDER BY apellido, nombre");
      IBQuery1->ParamByName("v1")->AsString = ComboBox1->Text;
      IBQuery1->Open();
   }
}
//---------------------------------------------------------------------------

void __fastcall TfListas::Button9Click(TObject *Sender)
{
   if(GroupBox8->Visible)
   {
      Button9->Caption = "Mostrar opciones avanzadas";
      GroupBox8->Visible = false;
      GroupBox7->Top = 240;
      GroupBox7->Height = 353;
      DBGrid1->Height = 321;
   }
   else
   {
      Button9->Caption = "Ocultar opciones avanzadas";
      GroupBox8->Visible = true;
      GroupBox7->Top = 352;
      GroupBox7->Height = 241;
      DBGrid1->Height = 209;

      CheckBox3->Checked = false;
      CheckBox4->Checked = false;
      CheckBox5->Checked = false;
      CheckBox6->Checked = false;
      CheckBox7->Checked = false;
      CheckBox8->Checked = false;
      CheckBox9->Checked = false;
      CheckBox10->Checked = false;
      CheckBox11->Checked = false;
      CheckBox12->Checked = false;
      CheckBox13->Checked = false;
      CheckBox14->Checked = false;
      CheckBox15->Checked = false;
      CheckBox16->Checked = false;
      CheckBox17->Checked = false;
      CheckBox18->Checked = false;
      CheckBox19->Checked = false;
      CheckBox20->Checked = false;
      CheckBox21->Checked = false;
      CheckBox22->Checked = false;
      CheckBox23->Checked = false;
      CheckBox24->Checked = false;
      CheckBox25->Checked = false;
      CheckBox26->Checked = false;
      CheckBox27->Checked = false;
      CheckBox28->Checked = false;
      CheckBox29->Checked = false;
      CheckBox30->Checked = false;
   }
}
//---------------------------------------------------------------------------

