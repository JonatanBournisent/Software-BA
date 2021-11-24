//---------------------------------------------------------------------------

#ifndef uPrincipalH
#define uPrincipalH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include <OleServer.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <jpeg.hpp>
#include "JvButton.hpp"
#include "JvExControls.hpp"
#include "JvNavigationPane.hpp"
#include "JvSpeedButton.hpp"
//---------------------------------------------------------------------------
class TfPrincipal : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TJvNavPanelButton *JvNavPanelButton1;
        TJvNavPanelButton *JvNavPanelButton2;
        TJvNavPanelButton *JvNavPanelButton3;
        TJvNavPanelButton *JvNavPanelButton4;
        TJvNavPanelButton *JvNavPanelButton5;
        TJvSpeedButton *JvSpeedButton1;
        TJvNavPanelButton *JvNavPanelButton6;
        void __fastcall JvNavPanelButton1Click(TObject *Sender);
        void __fastcall JvNavPanelButton2Click(TObject *Sender);
        void __fastcall JvNavPanelButton3Click(TObject *Sender);
        void __fastcall JvNavPanelButton4Click(TObject *Sender);
        void __fastcall JvNavPanelButton5Click(TObject *Sender);
        void __fastcall JvSpeedButton1Click(TObject *Sender);
        void __fastcall JvNavPanelButton6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfPrincipal *fPrincipal;
//---------------------------------------------------------------------------
#endif
