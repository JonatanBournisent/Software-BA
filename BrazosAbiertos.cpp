//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("uPrincipal.cpp", fPrincipal);
USEFORM("uAgregar_persona.cpp", fAgregar_persona);
USEFORM("uConsultar.cpp", fConsultar);
USEFORM("uModificar.cpp", fModificar);
USEFORM("uAdminGP.cpp", fAdminGP);
USEFORM("uListas.cpp", fListas);
USEFORM("uConfiguraciones.cpp", fConfiguraciones);
USEFORM("uCumples.cpp", fCumples);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TfPrincipal), &fPrincipal);
                 Application->CreateForm(__classid(TfAgregar_persona), &fAgregar_persona);
                 Application->CreateForm(__classid(TfConsultar), &fConsultar);
                 Application->CreateForm(__classid(TfModificar), &fModificar);
                 Application->CreateForm(__classid(TfAdminGP), &fAdminGP);
                 Application->CreateForm(__classid(TfListas), &fListas);
                 Application->CreateForm(__classid(TfConfiguraciones), &fConfiguraciones);
                 Application->CreateForm(__classid(TfCumples), &fCumples);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
