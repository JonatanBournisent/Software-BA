//---------------------------------------------------------------------------

#include <vcl.h>
#include <IniFiles.hpp>
#pragma hdrstop

#include "uPrincipal.h"
#include "uAgregar_persona.h"
#include "uConsultar.h"
#include "uAdminGP.h"
#include "uListas.h"
#include "uConfiguraciones.h"
#include "uCumples.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "JvButton"
#pragma link "JvExControls"
#pragma link "JvNavigationPane"
#pragma link "JvSpeedButton"
#pragma resource "*.dfm"
TfPrincipal *fPrincipal;
//---------------------------------------------------------------------------
__fastcall TfPrincipal::TfPrincipal(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfPrincipal::JvNavPanelButton1Click(TObject *Sender)
{
   fAgregar_persona->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TfPrincipal::JvNavPanelButton2Click(TObject *Sender)
{
   fAdminGP->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TfPrincipal::JvNavPanelButton3Click(TObject *Sender)
{
   fConsultar->ShowModal();        
}
//---------------------------------------------------------------------------


void __fastcall TfPrincipal::JvNavPanelButton4Click(TObject *Sender)
{
   fListas->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TfPrincipal::JvNavPanelButton5Click(TObject *Sender)
{
   fCumples->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TfPrincipal::JvSpeedButton1Click(TObject *Sender)
{
   fConfiguraciones->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TfPrincipal::JvNavPanelButton6Click(TObject *Sender)
{
   Close();        
}
//---------------------------------------------------------------------------

