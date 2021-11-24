//---------------------------------------------------------------------------

#ifndef uConfiguracionesH
#define uConfiguracionesH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfConfiguraciones : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TEdit *Edit1;
        TLabel *Label1;
        TBevel *Bevel1;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TLabel *Label2;
        TEdit *Edit2;
        TLabel *Label3;
        TLabel *Label4;
        void __fastcall FormShow(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfConfiguraciones(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfConfiguraciones *fConfiguraciones;
//---------------------------------------------------------------------------
#endif
